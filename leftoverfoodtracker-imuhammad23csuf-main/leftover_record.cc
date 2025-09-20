// Ibraheem Muhammad
// CPSC 121L-01
// April 25, 2024
// imuhammad23@csu.fullerton.edu
// imuhammad23csuf

#include "leftover_record.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (leftover_record.h), only
// if you didn't implement them inline within leftover_record.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the LeftLeftoverRecord
// class.
// ===================================================================
// Constructors
// Setters
bool LeftoverRecord::operator==(const LeftoverRecord &other) const {
  if (date_ == other.date_ && meal_ == other.meal_ &&
      food_name_ == other.food_name_ && qty_in_oz_ == other.qty_in_oz_ &&
      leftover_reason_ == other.leftover_reason_ &&
      disposal_mechanism_ == other.disposal_mechanism_ &&
      cost_ == other.cost_) {
    return true;
  }
  return false;
}

void LeftoverRecord::SetDate(const std::string &date) { date_ = date; }

void LeftoverRecord::SetMeal(const std::string &meal) { meal_ = meal; }

void LeftoverRecord::SetFoodName(const std::string &food_name) {
  food_name_ = food_name;
}

void LeftoverRecord::SetQuantityInOz(double qty_in_oz) {
  qty_in_oz_ = qty_in_oz;
}

void LeftoverRecord::SetLeftoverReason(const std::string &leftover_reason) {
  leftover_reason_ = leftover_reason;
}

void LeftoverRecord::SetDisposalMechanism(
    const std::string &disposal_mechanism) {
  disposal_mechanism_ = disposal_mechanism;
}

void LeftoverRecord::SetCost(double cost) { cost_ = cost; }

// Getters
std::string LeftoverRecord::GetDate() const { return date_; }

std::string LeftoverRecord::GetMeal() const { return meal_; }

std::string LeftoverRecord::GetFoodName() const { return food_name_; }

double LeftoverRecord::GetQuantityInOz() const { return qty_in_oz_; }

std::string LeftoverRecord::GetLeftoverReason() const {
  return leftover_reason_;
}

std::string LeftoverRecord::GetDisposalMechanism() const {
  return disposal_mechanism_;
}

double LeftoverRecord::GetCost() const { return cost_; }