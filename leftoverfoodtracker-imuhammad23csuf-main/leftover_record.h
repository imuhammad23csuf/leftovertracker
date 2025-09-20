#ifndef LEFTOVER_RECORD_H_
#define LEFTOVER_RECORD_H_

// Ibraheem Muhammad
// CPSC 121L-01
// April 25, 2024
// imuhammad23@csu.fullerton.edu
// imuhammad23csuf

#include <string>

class LeftoverRecord {
 private:
  std::string date_;
  std::string meal_;
  std::string food_name_;
  double qty_in_oz_;
  std::string leftover_reason_;
  std::string disposal_mechanism_;
  double cost_;

 public:
  // Setters
  void SetDate(const std::string &date);
  void SetMeal(const std::string &meal);
  void SetFoodName(const std::string &food_name);
  void SetQuantityInOz(double qty_in_oz);
  void SetLeftoverReason(const std::string &leftover_reason);
  void SetDisposalMechanism(const std::string &disposal_mechanism);
  void SetCost(double cost);

  // Getters
  std::string GetDate() const;
  std::string GetMeal() const;
  std::string GetFoodName() const;
  double GetQuantityInOz() const;
  std::string GetLeftoverReason() const;
  std::string GetDisposalMechanism() const;
  double GetCost() const;

  bool operator==(const LeftoverRecord &other) const;
};

#endif