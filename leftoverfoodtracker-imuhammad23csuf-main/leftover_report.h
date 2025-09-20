#ifndef LEFTOVER_REPORT_H_
#define LEFTOVER_REPORT_H_

// Ibraheem Muhammad
// CPSC 121L-01
// April 25, 2024
// imuhammad23@csu.fullerton.edu
// imuhammad23csuf

#include <map>
#include <string>
#include <vector>

#include "leftover_record.h"  // Include the header file for LeftoverRecord if needed

class LeftoverReport {
 public:
  // Constructor
  LeftoverReport(const std::vector<LeftoverRecord> &leftover_records);

  // Member functions
  std::vector<std::string> MostCommonLeftover() const;
  std::vector<std::string> MostCostlyLeftoverProducingMeals() const;
  double TotalCostOfLeftover() const;
  std::vector<std::string> MostCommonLeftoverReasons();
  std::vector<std::string> MostCommonDisposalMechanisms() const;
  std::vector<std::string> SuggestLeftoverReductionStrategies() const;

 private:
  // Member variables
  const std::vector<LeftoverRecord> &leftover_records_;
  std::vector<std::string> most_common_leftover_;
  std::vector<std::string> most_costly_leftover_producing_meals_;
  double total_cost_of_leftovers_;
  std::vector<std::string> most_common_leftover_reasons_;
  std::vector<std::string> most_common_disposal_mechanisms_;
  std::vector<std::string> suggested_strategies_to_reduce_leftovers_;
};

#endif