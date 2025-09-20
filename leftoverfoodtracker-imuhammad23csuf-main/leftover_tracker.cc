// Ibraheem Muhammad
// CPSC 121L-01
// April 25, 2024
// imuhammad23@csu.fullerton.edu
// imuhammad23csuf

#include "leftover_tracker.h"

#include "leftover_report.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_tracker.h), only
// if you didn't implement them inline within leftover_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftoverTracker
// class.
// ===================================================================
const std::vector<LeftoverRecord> &LeftoverTracker::GetRecords() const {
  return leftover_records_;
}

LeftoverReport LeftoverTracker::GetLeftoverReport() const {
  return LeftoverReport(leftover_records_);
}

bool LeftoverTracker::AddRecord(const LeftoverRecord &record) {
  // Iterate over existing records
  for (const auto &existing_record : leftover_records_) {
    // Compare each member variable for equality
    if (existing_record == record) {
      return false;  // If equal, return false
    }
  }
  // If no match found, add the record and return true
  leftover_records_.push_back(record);
  return true;
}

bool LeftoverTracker::DeleteRecord(const LeftoverRecord &record) {
  for (auto it = leftover_records_.begin(); it != leftover_records_.end();
       it++) {
    if (it->GetDate() == record.GetDate() &&
        it->GetMeal() == record.GetMeal() &&
        it->GetFoodName() == record.GetFoodName() &&
        it->GetQuantityInOz() == record.GetQuantityInOz() &&
        it->GetLeftoverReason() == record.GetLeftoverReason() &&
        it->GetDisposalMechanism() == record.GetDisposalMechanism() &&
        it->GetCost() == record.GetCost()) {
      leftover_records_.erase(it);
      return true;
    }
  }
  return false;
}
