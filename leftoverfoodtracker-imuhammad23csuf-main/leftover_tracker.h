#ifndef LEFTOVER_TRACKER_H_
#define LEFTOVER_TRACKER_H_

// Ibraheem Muhammad
// CPSC 121L-01
// April 25, 2024
// imuhammad23@csu.fullerton.edu
// imuhammad23csuf

#include <vector>

#include "leftover_record.h"
#include "leftover_report.h"

class LeftoverTracker {
  // ======================= YOUR CODE HERE =======================
  // Write the LeftoverTracker class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================
 public:
  LeftoverTracker() {}
  bool AddRecord(const LeftoverRecord &record);
  bool DeleteRecord(const LeftoverRecord &record);
  const std::vector<LeftoverRecord> &GetRecords() const;
  LeftoverReport GetLeftoverReport() const;

 private:
  std::vector<LeftoverRecord> leftover_records_;
};
#endif