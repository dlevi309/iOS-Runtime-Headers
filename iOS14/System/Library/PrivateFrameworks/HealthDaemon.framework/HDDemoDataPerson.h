/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSDateComponents, NSDate, NSArray, NSDictionary, HDDemoDataSleepParameters, _HKMedicalIDData;

@interface HDDemoDataPerson : NSObject {

	BOOL _createHighFidelityData;
	BOOL _sexualActivityIsTryingToConceive;
	BOOL _useContinuousGlucoseMonitoring;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _personDescription;
	NSDateComponents* _birthDateComponents;
	NSDate* _birthDate;
	long long _biologicalSex;
	long long _bloodType;
	long long _fitzpatrickSkinType;
	double _timeIncrement;
	double _timeIncrementDuringExercise;
	double _dawnTime;
	double _sunsetTime;
	double _genericSampleTimeNoiseStdDev;
	long long _profileType;
	double _uvIndexSampleFrequency;
	double _waistCircumferenceInInches;
	double _wristCircumferenceInInches;
	double _forearmCircumferenceInInches;
	double _hipCircumferenceInInches;
	double _heightSampleTime;
	double _heightTargetInCm;
	double _heightSampleTimeFrequency;
	double _heightSampleNoiseStdDev;
	double _weightSampleTime;
	double _weightTargetInKg;
	double _weightSampleTimeFrequency;
	double _weightSampleNoiseStdDev;
	double _weightLossStartDay;
	double _weightDailyChangeStdDev;
	double _weightDailyMaxLoss;
	double _weightChangePercentageMax;
	NSArray* _weightGainHolidayDaysInYear;
	long long _restingHeartRate;
	long long _restingHeartRateMaxDailyDifference;
	long long _restingHeartRateMaxTotalDifference;
	long long _walkingHeartRateAverage;
	long long _walkingHeartRateAverageMaxDailyDifference;
	long long _walkingHeartRateAverageMaxTotalDifference;
	double _heartRateSampleFrequency;
	double _heartRateSampleFrequencyStdDev;
	double _heartRateSampleNoiseStdDev;
	long long _restingRespirationRate;
	double _restingRespirationRateSampleFrequency;
	double _restingRespirationRateSampleNoiseStdDev;
	double _bloodPressureSampleFrequency;
	long long _restingSystolicBloodPressure;
	long long _restingDiastolicBloodPressure;
	double _restingSystolicBloodPressureSampleNoiseStdDev;
	double _restingDiastolicBloodPressureSampleNoiseStdDev;
	double _bodyTempFeverMultiplier;
	double _bodyTempExerciseMultiplier;
	double _bodyTempSampleFrequency;
	double _bodyTempSampleNoiseStdDev;
	double _oxygenSaturationMean;
	double _oxygenSaturationStdDev;
	double _oxygenSaturationMeanAtElevation;
	double _oxygenSaturationStdDevAtElevation;
	double _oxygenSaturationMeasuringSuccessRate;
	double _oxygenSaturationMeasuringSuccessRateDuringSleep;
	double _oxygenSaturationSampleFrequency;
	double _peripheralPerfusionIndexMean;
	double _peripheralPerfusionIndexSampleFrequency;
	double _peripheralPerfusionIndexStdDev;
	double _sexualActivityProbabilityPercentage;
	double _sexualActivityProtectionProbabilityPercentage;
	double _sexualActivityProtectionDocumentationProbabilityPercentage;
	double _menstrualPeriodFrequency;
	double _ovulationIndeterminateProbabilityPercentage;
	double _fitzpatrickSkinTypeSampleTime;
	long long _fitzpatrickSkinTypeScore;
	double _toothbrushingDurationMean;
	double _toothbrushingDurationMeanStdDev;
	double _handwashingDurationMean;
	double _handwashingDurationMeanStdDev;
	double _handwashingSampleFrequency;
	double _handwashingSampleFrequencyStdDev;
	double _activeCaloriesSampleFrequency;
	double _restingCaloriesSampleFrequency;
	double _stepsSampleFrequency;
	double _stepsSampleFrequencyDuringExercise;
	double _sedentarySampleFrequency;
	double _exerciseTimeSampleFrequency;
	double _moveGoal;
	double _swimmingStrokesPerYard;
	double _exerciseStartTime;
	double _exerciseStopTime;
	double _exerciseCooldownTime;
	double _exerciseStartTimeStdDev;
	double _exerciseStopTimeStdDev;
	double _exerciseIntensityPercentage;
	NSDictionary* _workoutPrototypesByCalendarDay;
	double _exerciseWeeklyWorkoutsMean;
	double _exerciseWeeklyWorkoutsStdDev;
	double _exercisePostDietWeeklyWorkoutsMean;
	double _exercisePostDietWeeklyWorkoutsStdDev;
	double _flightsClimbedDailyMean;
	double _flightsClimbedStdDev;
	double _flightsClimbedSampleTime;
	double _flightsClimbedSampleFrequency;
	double _flightsClimbedSampleFrequencyStdDev;
	double _rehabLogarithmicConstant;
	double _walkingSpeedMean;
	double _walkingSpeedStdDev;
	double _walkingSpeedSampleFrequency;
	double _walkingSpeedSampleFrequencyStdDev;
	double _stepLengthMean;
	double _stepLengthStdDev;
	double _stepLengthSampleFrequency;
	double _stepLengthSampleFrequencyStdDev;
	double _asymmetryPercentageMean;
	double _asymmetryPercentageStdDev;
	double _asymmetryPercentageSampleFrequency;
	double _asymmetryPercentageSampleFrequencyStdDev;
	double _doubleSupportPercentageMean;
	double _doubleSupportPercentageStdDev;
	double _doubleSupportPercentageSampleFrequency;
	double _doubleSupportPercentageSampleFrequencyStdDev;
	double _sixMinuteWalkTestDistanceMean;
	double _sixMinuteWalkTestDistanceStdDev;
	double _sixMinuteWalkTestDistanceSampleFrequency;
	double _sixMinuteWalkTestDistanceSampleFrequencyStdDev;
	double _stairAscentSpeedMean;
	double _stairAscentSpeedStdDev;
	double _stairAscentSpeedSampleFrequency;
	double _stairAscentSpeedSampleFrequencyStdDev;
	double _stairDescentSpeedMean;
	double _stairDescentSpeedStdDev;
	double _stairDescentSpeedSampleFrequency;
	double _stairDescentSpeedSampleFrequencyStdDev;
	double _breakfastTime;
	double _lunchTime;
	double _snackTime;
	double _dinnerTime;
	double _mealTimeSampleNoiseStdDev;
	double _preDietIntakeMultiplier;
	double _numCupsOfCoffeeDailyMean;
	double _numCupsOfCoffeeStdDev;
	double _waterConsumedSampleTime;
	double _waterConsumedSampleFrequency;
	double _waterConsumedDailyMean;
	double _waterConsumedStdDev;
	double _waterConsumedIntervalMean;
	double _waterConsumedIntervalStdDev;
	HDDemoDataSleepParameters* _weekdaySleepParameters;
	HDDemoDataSleepParameters* _weekendSleepParameters;
	double _wakeUpTimeNoiseStdDev;
	double _bedtimeNoiseStdDev;
	double _inBedTimeStdDev;
	unsigned long long _numSleepInterruptions;
	double _fallSampleFrequency;
	double _fallsDailyMean;
	double _fallsDailyStdDev;
	double _spirometrySampleFrequency;
	double _spirometrySampleTime;
	long long _asthmaSeverity;
	double _continuousGlucoseMonitoringSampleFrequency;
	double _numDailyFingerSticksAdherence;
	double _insulinSensitivity;
	double _insulinProduction;
	double _insulinAdherence;
	unsigned long long _insulinTherapy;
	double _mindfulSessionFrequency;
	long long _mindfulSessionMean;
	long long _mindfulSessionStdDev;
	long long _nutritionTrackingType;
	long long _resultsTrackingType;
	_HKMedicalIDData* _medicalIDData;

}

@property (nonatomic,copy) NSString * firstName;                                                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                              //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * personDescription;                                                     //@synthesize personDescription=_personDescription - In the implementation block
@property (nonatomic,retain) NSDateComponents * birthDateComponents;                                         //@synthesize birthDateComponents=_birthDateComponents - In the implementation block
@property (nonatomic,retain) NSDate * birthDate;                                                             //@synthesize birthDate=_birthDate - In the implementation block
@property (assign,nonatomic) long long biologicalSex;                                                        //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) long long bloodType;                                                            //@synthesize bloodType=_bloodType - In the implementation block
@property (assign,nonatomic) long long fitzpatrickSkinType;                                                  //@synthesize fitzpatrickSkinType=_fitzpatrickSkinType - In the implementation block
@property (assign,nonatomic) double timeIncrement;                                                           //@synthesize timeIncrement=_timeIncrement - In the implementation block
@property (assign,nonatomic) double timeIncrementDuringExercise;                                             //@synthesize timeIncrementDuringExercise=_timeIncrementDuringExercise - In the implementation block
@property (assign,nonatomic) double dawnTime;                                                                //@synthesize dawnTime=_dawnTime - In the implementation block
@property (assign,nonatomic) double sunsetTime;                                                              //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) double genericSampleTimeNoiseStdDev;                                            //@synthesize genericSampleTimeNoiseStdDev=_genericSampleTimeNoiseStdDev - In the implementation block
@property (assign,nonatomic) BOOL createHighFidelityData;                                                    //@synthesize createHighFidelityData=_createHighFidelityData - In the implementation block
@property (assign,nonatomic) long long profileType;                                                          //@synthesize profileType=_profileType - In the implementation block
@property (assign,nonatomic) double uvIndexSampleFrequency;                                                  //@synthesize uvIndexSampleFrequency=_uvIndexSampleFrequency - In the implementation block
@property (assign,nonatomic) double waistCircumferenceInInches;                                              //@synthesize waistCircumferenceInInches=_waistCircumferenceInInches - In the implementation block
@property (assign,nonatomic) double wristCircumferenceInInches;                                              //@synthesize wristCircumferenceInInches=_wristCircumferenceInInches - In the implementation block
@property (assign,nonatomic) double forearmCircumferenceInInches;                                            //@synthesize forearmCircumferenceInInches=_forearmCircumferenceInInches - In the implementation block
@property (assign,nonatomic) double hipCircumferenceInInches;                                                //@synthesize hipCircumferenceInInches=_hipCircumferenceInInches - In the implementation block
@property (assign,nonatomic) double heightSampleTime;                                                        //@synthesize heightSampleTime=_heightSampleTime - In the implementation block
@property (assign,nonatomic) double heightTargetInCm;                                                        //@synthesize heightTargetInCm=_heightTargetInCm - In the implementation block
@property (assign,nonatomic) double heightSampleTimeFrequency;                                               //@synthesize heightSampleTimeFrequency=_heightSampleTimeFrequency - In the implementation block
@property (assign,nonatomic) double heightSampleNoiseStdDev;                                                 //@synthesize heightSampleNoiseStdDev=_heightSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double weightSampleTime;                                                        //@synthesize weightSampleTime=_weightSampleTime - In the implementation block
@property (assign,nonatomic) double weightTargetInKg;                                                        //@synthesize weightTargetInKg=_weightTargetInKg - In the implementation block
@property (assign,nonatomic) double weightSampleTimeFrequency;                                               //@synthesize weightSampleTimeFrequency=_weightSampleTimeFrequency - In the implementation block
@property (assign,nonatomic) double weightSampleNoiseStdDev;                                                 //@synthesize weightSampleNoiseStdDev=_weightSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double weightLossStartDay;                                                      //@synthesize weightLossStartDay=_weightLossStartDay - In the implementation block
@property (assign,nonatomic) double weightDailyChangeStdDev;                                                 //@synthesize weightDailyChangeStdDev=_weightDailyChangeStdDev - In the implementation block
@property (assign,nonatomic) double weightDailyMaxLoss;                                                      //@synthesize weightDailyMaxLoss=_weightDailyMaxLoss - In the implementation block
@property (assign,nonatomic) double weightChangePercentageMax;                                               //@synthesize weightChangePercentageMax=_weightChangePercentageMax - In the implementation block
@property (nonatomic,retain) NSArray * weightGainHolidayDaysInYear;                                          //@synthesize weightGainHolidayDaysInYear=_weightGainHolidayDaysInYear - In the implementation block
@property (assign,nonatomic) long long restingHeartRate;                                                     //@synthesize restingHeartRate=_restingHeartRate - In the implementation block
@property (assign,nonatomic) long long restingHeartRateMaxDailyDifference;                                   //@synthesize restingHeartRateMaxDailyDifference=_restingHeartRateMaxDailyDifference - In the implementation block
@property (assign,nonatomic) long long restingHeartRateMaxTotalDifference;                                   //@synthesize restingHeartRateMaxTotalDifference=_restingHeartRateMaxTotalDifference - In the implementation block
@property (assign,nonatomic) long long walkingHeartRateAverage;                                              //@synthesize walkingHeartRateAverage=_walkingHeartRateAverage - In the implementation block
@property (assign,nonatomic) long long walkingHeartRateAverageMaxDailyDifference;                            //@synthesize walkingHeartRateAverageMaxDailyDifference=_walkingHeartRateAverageMaxDailyDifference - In the implementation block
@property (assign,nonatomic) long long walkingHeartRateAverageMaxTotalDifference;                            //@synthesize walkingHeartRateAverageMaxTotalDifference=_walkingHeartRateAverageMaxTotalDifference - In the implementation block
@property (assign,nonatomic) double heartRateSampleFrequency;                                                //@synthesize heartRateSampleFrequency=_heartRateSampleFrequency - In the implementation block
@property (assign,nonatomic) double heartRateSampleFrequencyStdDev;                                          //@synthesize heartRateSampleFrequencyStdDev=_heartRateSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double heartRateSampleNoiseStdDev;                                              //@synthesize heartRateSampleNoiseStdDev=_heartRateSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) long long restingRespirationRate;                                               //@synthesize restingRespirationRate=_restingRespirationRate - In the implementation block
@property (assign,nonatomic) double restingRespirationRateSampleFrequency;                                   //@synthesize restingRespirationRateSampleFrequency=_restingRespirationRateSampleFrequency - In the implementation block
@property (assign,nonatomic) double restingRespirationRateSampleNoiseStdDev;                                 //@synthesize restingRespirationRateSampleNoiseStdDev=_restingRespirationRateSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double bloodPressureSampleFrequency;                                            //@synthesize bloodPressureSampleFrequency=_bloodPressureSampleFrequency - In the implementation block
@property (assign,nonatomic) long long restingSystolicBloodPressure;                                         //@synthesize restingSystolicBloodPressure=_restingSystolicBloodPressure - In the implementation block
@property (assign,nonatomic) long long restingDiastolicBloodPressure;                                        //@synthesize restingDiastolicBloodPressure=_restingDiastolicBloodPressure - In the implementation block
@property (assign,nonatomic) double restingSystolicBloodPressureSampleNoiseStdDev;                           //@synthesize restingSystolicBloodPressureSampleNoiseStdDev=_restingSystolicBloodPressureSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double restingDiastolicBloodPressureSampleNoiseStdDev;                          //@synthesize restingDiastolicBloodPressureSampleNoiseStdDev=_restingDiastolicBloodPressureSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double bodyTempFeverMultiplier;                                                 //@synthesize bodyTempFeverMultiplier=_bodyTempFeverMultiplier - In the implementation block
@property (assign,nonatomic) double bodyTempExerciseMultiplier;                                              //@synthesize bodyTempExerciseMultiplier=_bodyTempExerciseMultiplier - In the implementation block
@property (assign,nonatomic) double bodyTempSampleFrequency;                                                 //@synthesize bodyTempSampleFrequency=_bodyTempSampleFrequency - In the implementation block
@property (assign,nonatomic) double bodyTempSampleNoiseStdDev;                                               //@synthesize bodyTempSampleNoiseStdDev=_bodyTempSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double oxygenSaturationMean;                                                    //@synthesize oxygenSaturationMean=_oxygenSaturationMean - In the implementation block
@property (assign,nonatomic) double oxygenSaturationStdDev;                                                  //@synthesize oxygenSaturationStdDev=_oxygenSaturationStdDev - In the implementation block
@property (assign,nonatomic) double oxygenSaturationMeanAtElevation;                                         //@synthesize oxygenSaturationMeanAtElevation=_oxygenSaturationMeanAtElevation - In the implementation block
@property (assign,nonatomic) double oxygenSaturationStdDevAtElevation;                                       //@synthesize oxygenSaturationStdDevAtElevation=_oxygenSaturationStdDevAtElevation - In the implementation block
@property (assign,nonatomic) double oxygenSaturationMeasuringSuccessRate;                                    //@synthesize oxygenSaturationMeasuringSuccessRate=_oxygenSaturationMeasuringSuccessRate - In the implementation block
@property (assign,nonatomic) double oxygenSaturationMeasuringSuccessRateDuringSleep;                         //@synthesize oxygenSaturationMeasuringSuccessRateDuringSleep=_oxygenSaturationMeasuringSuccessRateDuringSleep - In the implementation block
@property (assign,nonatomic) double oxygenSaturationSampleFrequency;                                         //@synthesize oxygenSaturationSampleFrequency=_oxygenSaturationSampleFrequency - In the implementation block
@property (assign,nonatomic) double peripheralPerfusionIndexMean;                                            //@synthesize peripheralPerfusionIndexMean=_peripheralPerfusionIndexMean - In the implementation block
@property (assign,nonatomic) double peripheralPerfusionIndexSampleFrequency;                                 //@synthesize peripheralPerfusionIndexSampleFrequency=_peripheralPerfusionIndexSampleFrequency - In the implementation block
@property (assign,nonatomic) double peripheralPerfusionIndexStdDev;                                          //@synthesize peripheralPerfusionIndexStdDev=_peripheralPerfusionIndexStdDev - In the implementation block
@property (assign,nonatomic) double sexualActivityProbabilityPercentage;                                     //@synthesize sexualActivityProbabilityPercentage=_sexualActivityProbabilityPercentage - In the implementation block
@property (assign,nonatomic) double sexualActivityProtectionProbabilityPercentage;                           //@synthesize sexualActivityProtectionProbabilityPercentage=_sexualActivityProtectionProbabilityPercentage - In the implementation block
@property (assign,nonatomic) double sexualActivityProtectionDocumentationProbabilityPercentage;              //@synthesize sexualActivityProtectionDocumentationProbabilityPercentage=_sexualActivityProtectionDocumentationProbabilityPercentage - In the implementation block
@property (assign,nonatomic) double menstrualPeriodFrequency;                                                //@synthesize menstrualPeriodFrequency=_menstrualPeriodFrequency - In the implementation block
@property (assign,nonatomic) BOOL sexualActivityIsTryingToConceive;                                          //@synthesize sexualActivityIsTryingToConceive=_sexualActivityIsTryingToConceive - In the implementation block
@property (assign,nonatomic) double ovulationIndeterminateProbabilityPercentage;                             //@synthesize ovulationIndeterminateProbabilityPercentage=_ovulationIndeterminateProbabilityPercentage - In the implementation block
@property (assign,nonatomic) double fitzpatrickSkinTypeSampleTime;                                           //@synthesize fitzpatrickSkinTypeSampleTime=_fitzpatrickSkinTypeSampleTime - In the implementation block
@property (assign,nonatomic) long long fitzpatrickSkinTypeScore;                                             //@synthesize fitzpatrickSkinTypeScore=_fitzpatrickSkinTypeScore - In the implementation block
@property (assign,nonatomic) double toothbrushingDurationMean;                                               //@synthesize toothbrushingDurationMean=_toothbrushingDurationMean - In the implementation block
@property (assign,nonatomic) double toothbrushingDurationMeanStdDev;                                         //@synthesize toothbrushingDurationMeanStdDev=_toothbrushingDurationMeanStdDev - In the implementation block
@property (assign,nonatomic) double handwashingDurationMean;                                                 //@synthesize handwashingDurationMean=_handwashingDurationMean - In the implementation block
@property (assign,nonatomic) double handwashingDurationMeanStdDev;                                           //@synthesize handwashingDurationMeanStdDev=_handwashingDurationMeanStdDev - In the implementation block
@property (assign,nonatomic) double handwashingSampleFrequency;                                              //@synthesize handwashingSampleFrequency=_handwashingSampleFrequency - In the implementation block
@property (assign,nonatomic) double handwashingSampleFrequencyStdDev;                                        //@synthesize handwashingSampleFrequencyStdDev=_handwashingSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double activeCaloriesSampleFrequency;                                           //@synthesize activeCaloriesSampleFrequency=_activeCaloriesSampleFrequency - In the implementation block
@property (assign,nonatomic) double restingCaloriesSampleFrequency;                                          //@synthesize restingCaloriesSampleFrequency=_restingCaloriesSampleFrequency - In the implementation block
@property (assign,nonatomic) double stepsSampleFrequency;                                                    //@synthesize stepsSampleFrequency=_stepsSampleFrequency - In the implementation block
@property (assign,nonatomic) double stepsSampleFrequencyDuringExercise;                                      //@synthesize stepsSampleFrequencyDuringExercise=_stepsSampleFrequencyDuringExercise - In the implementation block
@property (assign,nonatomic) double sedentarySampleFrequency;                                                //@synthesize sedentarySampleFrequency=_sedentarySampleFrequency - In the implementation block
@property (assign,nonatomic) double exerciseTimeSampleFrequency;                                             //@synthesize exerciseTimeSampleFrequency=_exerciseTimeSampleFrequency - In the implementation block
@property (assign,nonatomic) double moveGoal;                                                                //@synthesize moveGoal=_moveGoal - In the implementation block
@property (assign,nonatomic) double swimmingStrokesPerYard;                                                  //@synthesize swimmingStrokesPerYard=_swimmingStrokesPerYard - In the implementation block
@property (assign,nonatomic) double exerciseStartTime;                                                       //@synthesize exerciseStartTime=_exerciseStartTime - In the implementation block
@property (assign,nonatomic) double exerciseStopTime;                                                        //@synthesize exerciseStopTime=_exerciseStopTime - In the implementation block
@property (assign,nonatomic) double exerciseCooldownTime;                                                    //@synthesize exerciseCooldownTime=_exerciseCooldownTime - In the implementation block
@property (assign,nonatomic) double exerciseStartTimeStdDev;                                                 //@synthesize exerciseStartTimeStdDev=_exerciseStartTimeStdDev - In the implementation block
@property (assign,nonatomic) double exerciseStopTimeStdDev;                                                  //@synthesize exerciseStopTimeStdDev=_exerciseStopTimeStdDev - In the implementation block
@property (assign,nonatomic) double exerciseIntensityPercentage;                                             //@synthesize exerciseIntensityPercentage=_exerciseIntensityPercentage - In the implementation block
@property (nonatomic,retain) NSDictionary * workoutPrototypesByCalendarDay;                                  //@synthesize workoutPrototypesByCalendarDay=_workoutPrototypesByCalendarDay - In the implementation block
@property (assign,nonatomic) double exerciseWeeklyWorkoutsMean;                                              //@synthesize exerciseWeeklyWorkoutsMean=_exerciseWeeklyWorkoutsMean - In the implementation block
@property (assign,nonatomic) double exerciseWeeklyWorkoutsStdDev;                                            //@synthesize exerciseWeeklyWorkoutsStdDev=_exerciseWeeklyWorkoutsStdDev - In the implementation block
@property (assign,nonatomic) double exercisePostDietWeeklyWorkoutsMean;                                      //@synthesize exercisePostDietWeeklyWorkoutsMean=_exercisePostDietWeeklyWorkoutsMean - In the implementation block
@property (assign,nonatomic) double exercisePostDietWeeklyWorkoutsStdDev;                                    //@synthesize exercisePostDietWeeklyWorkoutsStdDev=_exercisePostDietWeeklyWorkoutsStdDev - In the implementation block
@property (assign,nonatomic) double flightsClimbedDailyMean;                                                 //@synthesize flightsClimbedDailyMean=_flightsClimbedDailyMean - In the implementation block
@property (assign,nonatomic) double flightsClimbedStdDev;                                                    //@synthesize flightsClimbedStdDev=_flightsClimbedStdDev - In the implementation block
@property (assign,nonatomic) double flightsClimbedSampleTime;                                                //@synthesize flightsClimbedSampleTime=_flightsClimbedSampleTime - In the implementation block
@property (assign,nonatomic) double flightsClimbedSampleFrequency;                                           //@synthesize flightsClimbedSampleFrequency=_flightsClimbedSampleFrequency - In the implementation block
@property (assign,nonatomic) double flightsClimbedSampleFrequencyStdDev;                                     //@synthesize flightsClimbedSampleFrequencyStdDev=_flightsClimbedSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double rehabLogarithmicConstant;                                                //@synthesize rehabLogarithmicConstant=_rehabLogarithmicConstant - In the implementation block
@property (assign,nonatomic) double walkingSpeedMean;                                                        //@synthesize walkingSpeedMean=_walkingSpeedMean - In the implementation block
@property (assign,nonatomic) double walkingSpeedStdDev;                                                      //@synthesize walkingSpeedStdDev=_walkingSpeedStdDev - In the implementation block
@property (assign,nonatomic) double walkingSpeedSampleFrequency;                                             //@synthesize walkingSpeedSampleFrequency=_walkingSpeedSampleFrequency - In the implementation block
@property (assign,nonatomic) double walkingSpeedSampleFrequencyStdDev;                                       //@synthesize walkingSpeedSampleFrequencyStdDev=_walkingSpeedSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double stepLengthMean;                                                          //@synthesize stepLengthMean=_stepLengthMean - In the implementation block
@property (assign,nonatomic) double stepLengthStdDev;                                                        //@synthesize stepLengthStdDev=_stepLengthStdDev - In the implementation block
@property (assign,nonatomic) double stepLengthSampleFrequency;                                               //@synthesize stepLengthSampleFrequency=_stepLengthSampleFrequency - In the implementation block
@property (assign,nonatomic) double stepLengthSampleFrequencyStdDev;                                         //@synthesize stepLengthSampleFrequencyStdDev=_stepLengthSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double asymmetryPercentageMean;                                                 //@synthesize asymmetryPercentageMean=_asymmetryPercentageMean - In the implementation block
@property (assign,nonatomic) double asymmetryPercentageStdDev;                                               //@synthesize asymmetryPercentageStdDev=_asymmetryPercentageStdDev - In the implementation block
@property (assign,nonatomic) double asymmetryPercentageSampleFrequency;                                      //@synthesize asymmetryPercentageSampleFrequency=_asymmetryPercentageSampleFrequency - In the implementation block
@property (assign,nonatomic) double asymmetryPercentageSampleFrequencyStdDev;                                //@synthesize asymmetryPercentageSampleFrequencyStdDev=_asymmetryPercentageSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double doubleSupportPercentageMean;                                             //@synthesize doubleSupportPercentageMean=_doubleSupportPercentageMean - In the implementation block
@property (assign,nonatomic) double doubleSupportPercentageStdDev;                                           //@synthesize doubleSupportPercentageStdDev=_doubleSupportPercentageStdDev - In the implementation block
@property (assign,nonatomic) double doubleSupportPercentageSampleFrequency;                                  //@synthesize doubleSupportPercentageSampleFrequency=_doubleSupportPercentageSampleFrequency - In the implementation block
@property (assign,nonatomic) double doubleSupportPercentageSampleFrequencyStdDev;                            //@synthesize doubleSupportPercentageSampleFrequencyStdDev=_doubleSupportPercentageSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double sixMinuteWalkTestDistanceMean;                                           //@synthesize sixMinuteWalkTestDistanceMean=_sixMinuteWalkTestDistanceMean - In the implementation block
@property (assign,nonatomic) double sixMinuteWalkTestDistanceStdDev;                                         //@synthesize sixMinuteWalkTestDistanceStdDev=_sixMinuteWalkTestDistanceStdDev - In the implementation block
@property (assign,nonatomic) double sixMinuteWalkTestDistanceSampleFrequency;                                //@synthesize sixMinuteWalkTestDistanceSampleFrequency=_sixMinuteWalkTestDistanceSampleFrequency - In the implementation block
@property (assign,nonatomic) double sixMinuteWalkTestDistanceSampleFrequencyStdDev;                          //@synthesize sixMinuteWalkTestDistanceSampleFrequencyStdDev=_sixMinuteWalkTestDistanceSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double stairAscentSpeedMean;                                                    //@synthesize stairAscentSpeedMean=_stairAscentSpeedMean - In the implementation block
@property (assign,nonatomic) double stairAscentSpeedStdDev;                                                  //@synthesize stairAscentSpeedStdDev=_stairAscentSpeedStdDev - In the implementation block
@property (assign,nonatomic) double stairAscentSpeedSampleFrequency;                                         //@synthesize stairAscentSpeedSampleFrequency=_stairAscentSpeedSampleFrequency - In the implementation block
@property (assign,nonatomic) double stairAscentSpeedSampleFrequencyStdDev;                                   //@synthesize stairAscentSpeedSampleFrequencyStdDev=_stairAscentSpeedSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double stairDescentSpeedMean;                                                   //@synthesize stairDescentSpeedMean=_stairDescentSpeedMean - In the implementation block
@property (assign,nonatomic) double stairDescentSpeedStdDev;                                                 //@synthesize stairDescentSpeedStdDev=_stairDescentSpeedStdDev - In the implementation block
@property (assign,nonatomic) double stairDescentSpeedSampleFrequency;                                        //@synthesize stairDescentSpeedSampleFrequency=_stairDescentSpeedSampleFrequency - In the implementation block
@property (assign,nonatomic) double stairDescentSpeedSampleFrequencyStdDev;                                  //@synthesize stairDescentSpeedSampleFrequencyStdDev=_stairDescentSpeedSampleFrequencyStdDev - In the implementation block
@property (assign,nonatomic) double breakfastTime;                                                           //@synthesize breakfastTime=_breakfastTime - In the implementation block
@property (assign,nonatomic) double lunchTime;                                                               //@synthesize lunchTime=_lunchTime - In the implementation block
@property (assign,nonatomic) double snackTime;                                                               //@synthesize snackTime=_snackTime - In the implementation block
@property (assign,nonatomic) double dinnerTime;                                                              //@synthesize dinnerTime=_dinnerTime - In the implementation block
@property (assign,nonatomic) double mealTimeSampleNoiseStdDev;                                               //@synthesize mealTimeSampleNoiseStdDev=_mealTimeSampleNoiseStdDev - In the implementation block
@property (assign,nonatomic) double preDietIntakeMultiplier;                                                 //@synthesize preDietIntakeMultiplier=_preDietIntakeMultiplier - In the implementation block
@property (assign,nonatomic) double numCupsOfCoffeeDailyMean;                                                //@synthesize numCupsOfCoffeeDailyMean=_numCupsOfCoffeeDailyMean - In the implementation block
@property (assign,nonatomic) double numCupsOfCoffeeStdDev;                                                   //@synthesize numCupsOfCoffeeStdDev=_numCupsOfCoffeeStdDev - In the implementation block
@property (assign,nonatomic) double waterConsumedSampleTime;                                                 //@synthesize waterConsumedSampleTime=_waterConsumedSampleTime - In the implementation block
@property (assign,nonatomic) double waterConsumedSampleFrequency;                                            //@synthesize waterConsumedSampleFrequency=_waterConsumedSampleFrequency - In the implementation block
@property (assign,nonatomic) double waterConsumedDailyMean;                                                  //@synthesize waterConsumedDailyMean=_waterConsumedDailyMean - In the implementation block
@property (assign,nonatomic) double waterConsumedStdDev;                                                     //@synthesize waterConsumedStdDev=_waterConsumedStdDev - In the implementation block
@property (assign,nonatomic) double waterConsumedIntervalMean;                                               //@synthesize waterConsumedIntervalMean=_waterConsumedIntervalMean - In the implementation block
@property (assign,nonatomic) double waterConsumedIntervalStdDev;                                             //@synthesize waterConsumedIntervalStdDev=_waterConsumedIntervalStdDev - In the implementation block
@property (nonatomic,retain) HDDemoDataSleepParameters * weekdaySleepParameters;                             //@synthesize weekdaySleepParameters=_weekdaySleepParameters - In the implementation block
@property (nonatomic,retain) HDDemoDataSleepParameters * weekendSleepParameters;                             //@synthesize weekendSleepParameters=_weekendSleepParameters - In the implementation block
@property (assign,nonatomic) double wakeUpTimeNoiseStdDev;                                                   //@synthesize wakeUpTimeNoiseStdDev=_wakeUpTimeNoiseStdDev - In the implementation block
@property (assign,nonatomic) double bedtimeNoiseStdDev;                                                      //@synthesize bedtimeNoiseStdDev=_bedtimeNoiseStdDev - In the implementation block
@property (assign,nonatomic) double inBedTimeStdDev;                                                         //@synthesize inBedTimeStdDev=_inBedTimeStdDev - In the implementation block
@property (assign,nonatomic) unsigned long long numSleepInterruptions;                                       //@synthesize numSleepInterruptions=_numSleepInterruptions - In the implementation block
@property (assign,nonatomic) double fallSampleFrequency;                                                     //@synthesize fallSampleFrequency=_fallSampleFrequency - In the implementation block
@property (assign,nonatomic) double fallsDailyMean;                                                          //@synthesize fallsDailyMean=_fallsDailyMean - In the implementation block
@property (assign,nonatomic) double fallsDailyStdDev;                                                        //@synthesize fallsDailyStdDev=_fallsDailyStdDev - In the implementation block
@property (assign,nonatomic) double spirometrySampleFrequency;                                               //@synthesize spirometrySampleFrequency=_spirometrySampleFrequency - In the implementation block
@property (assign,nonatomic) double spirometrySampleTime;                                                    //@synthesize spirometrySampleTime=_spirometrySampleTime - In the implementation block
@property (assign,nonatomic) long long asthmaSeverity;                                                       //@synthesize asthmaSeverity=_asthmaSeverity - In the implementation block
@property (assign,nonatomic) BOOL useContinuousGlucoseMonitoring;                                            //@synthesize useContinuousGlucoseMonitoring=_useContinuousGlucoseMonitoring - In the implementation block
@property (assign,nonatomic) double continuousGlucoseMonitoringSampleFrequency;                              //@synthesize continuousGlucoseMonitoringSampleFrequency=_continuousGlucoseMonitoringSampleFrequency - In the implementation block
@property (assign,nonatomic) double numDailyFingerSticksAdherence;                                           //@synthesize numDailyFingerSticksAdherence=_numDailyFingerSticksAdherence - In the implementation block
@property (assign,nonatomic) double insulinSensitivity;                                                      //@synthesize insulinSensitivity=_insulinSensitivity - In the implementation block
@property (assign,nonatomic) double insulinProduction;                                                       //@synthesize insulinProduction=_insulinProduction - In the implementation block
@property (assign,nonatomic) double insulinAdherence;                                                        //@synthesize insulinAdherence=_insulinAdherence - In the implementation block
@property (assign,nonatomic) unsigned long long insulinTherapy;                                              //@synthesize insulinTherapy=_insulinTherapy - In the implementation block
@property (assign,nonatomic) double mindfulSessionFrequency;                                                 //@synthesize mindfulSessionFrequency=_mindfulSessionFrequency - In the implementation block
@property (assign,nonatomic) long long mindfulSessionMean;                                                   //@synthesize mindfulSessionMean=_mindfulSessionMean - In the implementation block
@property (assign,nonatomic) long long mindfulSessionStdDev;                                                 //@synthesize mindfulSessionStdDev=_mindfulSessionStdDev - In the implementation block
@property (assign,nonatomic) long long nutritionTrackingType;                                                //@synthesize nutritionTrackingType=_nutritionTrackingType - In the implementation block
@property (assign,nonatomic) long long resultsTrackingType;                                                  //@synthesize resultsTrackingType=_resultsTrackingType - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                                               //@synthesize medicalIDData=_medicalIDData - In the implementation block
+(id)defaultPersonWithBiologicalSex:(long long)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)fullName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setBiologicalSex:(long long)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(long long)bloodType;
-(long long)biologicalSex;
-(_HKMedicalIDData *)medicalIDData;
-(double)sunsetTime;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(NSDateComponents *)birthDateComponents;
-(void)setBirthDateComponents:(NSDateComponents *)arg1 ;
-(long long)restingHeartRate;
-(void)setRestingHeartRate:(long long)arg1 ;
-(NSDate *)birthDate;
-(void)setSunsetTime:(double)arg1 ;
-(double)dawnTime;
-(double)moveGoal;
-(void)setBloodType:(long long)arg1 ;
-(void)setBirthDate:(NSDate *)arg1 ;
-(long long)profileType;
-(void)setProfileType:(long long)arg1 ;
-(double)breakfastTime;
-(double)lunchTime;
-(double)snackTime;
-(double)dinnerTime;
-(long long)nutritionTrackingType;
-(BOOL)useContinuousGlucoseMonitoring;
-(double)continuousGlucoseMonitoringSampleFrequency;
-(HDDemoDataSleepParameters *)weekendSleepParameters;
-(HDDemoDataSleepParameters *)weekdaySleepParameters;
-(double)exerciseStartTime;
-(double)exerciseStartTimeStdDev;
-(double)exerciseStopTime;
-(double)exerciseStopTimeStdDev;
-(double)mealTimeSampleNoiseStdDev;
-(double)bedtimeNoiseStdDev;
-(double)wakeUpTimeNoiseStdDev;
-(double)numDailyFingerSticksAdherence;
-(double)waterConsumedSampleFrequency;
-(double)waterConsumedDailyMean;
-(double)waterConsumedIntervalMean;
-(double)waterConsumedIntervalStdDev;
-(double)insulinProduction;
-(unsigned long long)insulinTherapy;
-(double)timeIncrement;
-(double)numCupsOfCoffeeDailyMean;
-(double)numCupsOfCoffeeStdDev;
-(double)insulinAdherence;
-(double)insulinSensitivity;
-(double)weightLossStartDay;
-(double)preDietIntakeMultiplier;
-(double)genericSampleTimeNoiseStdDev;
-(double)sexualActivityProbabilityPercentage;
-(double)sexualActivityProtectionProbabilityPercentage;
-(double)sexualActivityProtectionDocumentationProbabilityPercentage;
-(BOOL)sexualActivityIsTryingToConceive;
-(double)bodyTempSampleNoiseStdDev;
-(double)menstrualPeriodFrequency;
-(double)inBedTimeStdDev;
-(unsigned long long)numSleepInterruptions;
-(double)heartRateSampleNoiseStdDev;
-(double)heartRateSampleFrequency;
-(double)heartRateSampleFrequencyStdDev;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 description:(id)arg3 birthDateComponents:(id)arg4 biologicalSex:(long long)arg5 ;
-(void)setFitzpatrickSkinType:(long long)arg1 ;
-(void)setTimeIncrement:(double)arg1 ;
-(void)setTimeIncrementDuringExercise:(double)arg1 ;
-(void)setDawnTime:(double)arg1 ;
-(void)setGenericSampleTimeNoiseStdDev:(double)arg1 ;
-(void)setUvIndexSampleFrequency:(double)arg1 ;
-(void)setWaistCircumferenceInInches:(double)arg1 ;
-(void)setWristCircumferenceInInches:(double)arg1 ;
-(void)setForearmCircumferenceInInches:(double)arg1 ;
-(void)setHipCircumferenceInInches:(double)arg1 ;
-(void)setHeightTargetInCm:(double)arg1 ;
-(void)setHeightSampleTime:(double)arg1 ;
-(void)setHeightSampleTimeFrequency:(double)arg1 ;
-(void)setHeightSampleNoiseStdDev:(double)arg1 ;
-(void)setWeightTargetInKg:(double)arg1 ;
-(void)setWeightSampleTime:(double)arg1 ;
-(void)setWeightSampleTimeFrequency:(double)arg1 ;
-(void)setWeightLossStartDay:(double)arg1 ;
-(void)setWeightSampleNoiseStdDev:(double)arg1 ;
-(void)setWeightDailyChangeStdDev:(double)arg1 ;
-(void)setWeightChangePercentageMax:(double)arg1 ;
-(void)setWeightDailyMaxLoss:(double)arg1 ;
-(void)setWeightGainHolidayDaysInYear:(NSArray *)arg1 ;
-(void)setRestingHeartRateMaxDailyDifference:(long long)arg1 ;
-(void)setRestingHeartRateMaxTotalDifference:(long long)arg1 ;
-(void)setWalkingHeartRateAverage:(long long)arg1 ;
-(void)setWalkingHeartRateAverageMaxDailyDifference:(long long)arg1 ;
-(void)setWalkingHeartRateAverageMaxTotalDifference:(long long)arg1 ;
-(void)setHeartRateSampleFrequency:(double)arg1 ;
-(void)setHeartRateSampleFrequencyStdDev:(double)arg1 ;
-(void)setHeartRateSampleNoiseStdDev:(double)arg1 ;
-(void)setRestingRespirationRate:(long long)arg1 ;
-(void)setRestingRespirationRateSampleFrequency:(double)arg1 ;
-(void)setRestingRespirationRateSampleNoiseStdDev:(double)arg1 ;
-(void)setBloodPressureSampleFrequency:(double)arg1 ;
-(void)setRestingSystolicBloodPressure:(long long)arg1 ;
-(void)setRestingDiastolicBloodPressure:(long long)arg1 ;
-(void)setRestingSystolicBloodPressureSampleNoiseStdDev:(double)arg1 ;
-(void)setRestingDiastolicBloodPressureSampleNoiseStdDev:(double)arg1 ;
-(void)setBodyTempSampleFrequency:(double)arg1 ;
-(void)setBodyTempSampleNoiseStdDev:(double)arg1 ;
-(void)setBodyTempFeverMultiplier:(double)arg1 ;
-(void)setBodyTempExerciseMultiplier:(double)arg1 ;
-(void)setOxygenSaturationSampleFrequency:(double)arg1 ;
-(void)setOxygenSaturationMean:(double)arg1 ;
-(void)setOxygenSaturationStdDev:(double)arg1 ;
-(void)setOxygenSaturationMeanAtElevation:(double)arg1 ;
-(void)setOxygenSaturationStdDevAtElevation:(double)arg1 ;
-(void)setOxygenSaturationMeasuringSuccessRate:(double)arg1 ;
-(void)setOxygenSaturationMeasuringSuccessRateDuringSleep:(double)arg1 ;
-(void)setPeripheralPerfusionIndexMean:(double)arg1 ;
-(void)setPeripheralPerfusionIndexStdDev:(double)arg1 ;
-(void)setPeripheralPerfusionIndexSampleFrequency:(double)arg1 ;
-(void)setSexualActivityProbabilityPercentage:(double)arg1 ;
-(void)setSexualActivityProtectionProbabilityPercentage:(double)arg1 ;
-(void)setSexualActivityProtectionDocumentationProbabilityPercentage:(double)arg1 ;
-(void)setSexualActivityIsTryingToConceive:(BOOL)arg1 ;
-(void)setMenstrualPeriodFrequency:(double)arg1 ;
-(void)setOvulationIndeterminateProbabilityPercentage:(double)arg1 ;
-(void)setToothbrushingDurationMean:(double)arg1 ;
-(void)setToothbrushingDurationMeanStdDev:(double)arg1 ;
-(void)setHandwashingDurationMean:(double)arg1 ;
-(void)setHandwashingDurationMeanStdDev:(double)arg1 ;
-(void)setHandwashingSampleFrequency:(double)arg1 ;
-(void)setHandwashingSampleFrequencyStdDev:(double)arg1 ;
-(double)timeIncrementDuringExercise;
-(void)setActiveCaloriesSampleFrequency:(double)arg1 ;
-(void)setRestingCaloriesSampleFrequency:(double)arg1 ;
-(void)setStepsSampleFrequency:(double)arg1 ;
-(void)setStepsSampleFrequencyDuringExercise:(double)arg1 ;
-(void)setSedentarySampleFrequency:(double)arg1 ;
-(void)setSwimmingStrokesPerYard:(double)arg1 ;
-(void)setExerciseIntensityPercentage:(double)arg1 ;
-(void)setExerciseStartTime:(double)arg1 ;
-(void)setExerciseStopTime:(double)arg1 ;
-(void)setExerciseStartTimeStdDev:(double)arg1 ;
-(void)setExerciseStopTimeStdDev:(double)arg1 ;
-(void)setExerciseCooldownTime:(double)arg1 ;
-(void)setExerciseWeeklyWorkoutsMean:(double)arg1 ;
-(void)setExerciseWeeklyWorkoutsStdDev:(double)arg1 ;
-(void)setExercisePostDietWeeklyWorkoutsMean:(double)arg1 ;
-(void)setExercisePostDietWeeklyWorkoutsStdDev:(double)arg1 ;
-(void)setFlightsClimbedDailyMean:(double)arg1 ;
-(void)setFlightsClimbedStdDev:(double)arg1 ;
-(void)setFlightsClimbedSampleTime:(double)arg1 ;
-(void)setFlightsClimbedSampleFrequency:(double)arg1 ;
-(void)setFlightsClimbedSampleFrequencyStdDev:(double)arg1 ;
-(void)setRehabLogarithmicConstant:(double)arg1 ;
-(void)setWalkingSpeedMean:(double)arg1 ;
-(void)setWalkingSpeedStdDev:(double)arg1 ;
-(void)setWalkingSpeedSampleFrequency:(double)arg1 ;
-(void)setWalkingSpeedSampleFrequencyStdDev:(double)arg1 ;
-(void)setStepLengthMean:(double)arg1 ;
-(void)setStepLengthStdDev:(double)arg1 ;
-(void)setStepLengthSampleFrequency:(double)arg1 ;
-(void)setStepLengthSampleFrequencyStdDev:(double)arg1 ;
-(void)setAsymmetryPercentageMean:(double)arg1 ;
-(void)setAsymmetryPercentageStdDev:(double)arg1 ;
-(void)setAsymmetryPercentageSampleFrequency:(double)arg1 ;
-(void)setAsymmetryPercentageSampleFrequencyStdDev:(double)arg1 ;
-(void)setDoubleSupportPercentageMean:(double)arg1 ;
-(void)setDoubleSupportPercentageStdDev:(double)arg1 ;
-(void)setDoubleSupportPercentageSampleFrequency:(double)arg1 ;
-(void)setDoubleSupportPercentageSampleFrequencyStdDev:(double)arg1 ;
-(void)setSixMinuteWalkTestDistanceMean:(double)arg1 ;
-(void)setSixMinuteWalkTestDistanceStdDev:(double)arg1 ;
-(void)setSixMinuteWalkTestDistanceSampleFrequency:(double)arg1 ;
-(void)setSixMinuteWalkTestDistanceSampleFrequencyStdDev:(double)arg1 ;
-(void)setStairAscentSpeedMean:(double)arg1 ;
-(void)setStairAscentSpeedStdDev:(double)arg1 ;
-(void)setStairAscentSpeedSampleFrequency:(double)arg1 ;
-(void)setStairAscentSpeedSampleFrequencyStdDev:(double)arg1 ;
-(void)setStairDescentSpeedMean:(double)arg1 ;
-(void)setStairDescentSpeedStdDev:(double)arg1 ;
-(void)setStairDescentSpeedSampleFrequency:(double)arg1 ;
-(void)setStairDescentSpeedSampleFrequencyStdDev:(double)arg1 ;
-(void)setMoveGoal:(double)arg1 ;
-(void)setWorkoutPrototypesByCalendarDay:(NSDictionary *)arg1 ;
-(void)setMealTimeSampleNoiseStdDev:(double)arg1 ;
-(void)setBreakfastTime:(double)arg1 ;
-(void)setLunchTime:(double)arg1 ;
-(void)setSnackTime:(double)arg1 ;
-(void)setDinnerTime:(double)arg1 ;
-(void)setPreDietIntakeMultiplier:(double)arg1 ;
-(void)setNumCupsOfCoffeeDailyMean:(double)arg1 ;
-(void)setNumCupsOfCoffeeStdDev:(double)arg1 ;
-(void)setWaterConsumedSampleFrequency:(double)arg1 ;
-(void)setWaterConsumedDailyMean:(double)arg1 ;
-(void)setWaterConsumedStdDev:(double)arg1 ;
-(void)setWaterConsumedIntervalMean:(double)arg1 ;
-(void)setWaterConsumedIntervalStdDev:(double)arg1 ;
-(void)setWaterConsumedSampleTime:(double)arg1 ;
-(void)setWeekdaySleepParameters:(HDDemoDataSleepParameters *)arg1 ;
-(void)setWeekendSleepParameters:(HDDemoDataSleepParameters *)arg1 ;
-(void)setWakeUpTimeNoiseStdDev:(double)arg1 ;
-(void)setBedtimeNoiseStdDev:(double)arg1 ;
-(void)setInBedTimeStdDev:(double)arg1 ;
-(void)setNumSleepInterruptions:(unsigned long long)arg1 ;
-(void)setFallSampleFrequency:(double)arg1 ;
-(void)setFallsDailyMean:(double)arg1 ;
-(void)setFallsDailyStdDev:(double)arg1 ;
-(void)setUseContinuousGlucoseMonitoring:(BOOL)arg1 ;
-(void)setContinuousGlucoseMonitoringSampleFrequency:(double)arg1 ;
-(void)setNumDailyFingerSticksAdherence:(double)arg1 ;
-(void)setInsulinSensitivity:(double)arg1 ;
-(void)setInsulinProduction:(double)arg1 ;
-(void)setInsulinAdherence:(double)arg1 ;
-(void)setInsulinTherapy:(unsigned long long)arg1 ;
-(void)setSpirometrySampleFrequency:(double)arg1 ;
-(void)setSpirometrySampleTime:(double)arg1 ;
-(void)setAsthmaSeverity:(long long)arg1 ;
-(void)setMindfulSessionFrequency:(double)arg1 ;
-(void)setMindfulSessionMean:(long long)arg1 ;
-(void)setMindfulSessionStdDev:(long long)arg1 ;
-(void)setNutritionTrackingType:(long long)arg1 ;
-(void)setResultsTrackingType:(long long)arg1 ;
-(void)updateMedicalIDData;
-(double)rehabLogarithmicConstant;
-(double)asymmetryPercentageMean;
-(double)doubleSupportPercentageMean;
-(void)setCreateHighFidelityData:(BOOL)arg1 ;
-(double)heightTargetInCm;
-(double)weightTargetInKg;
-(double)exerciseTimeSampleFrequency;
-(void)applyProfileType:(long long)arg1 ;
-(void)setHighFidelityGeneration:(BOOL)arg1 ;
-(NSString *)personDescription;
-(void)setPersonDescription:(NSString *)arg1 ;
-(long long)fitzpatrickSkinType;
-(BOOL)createHighFidelityData;
-(double)uvIndexSampleFrequency;
-(double)waistCircumferenceInInches;
-(double)wristCircumferenceInInches;
-(double)forearmCircumferenceInInches;
-(double)hipCircumferenceInInches;
-(double)heightSampleTime;
-(double)heightSampleTimeFrequency;
-(double)heightSampleNoiseStdDev;
-(double)weightSampleTime;
-(double)weightSampleTimeFrequency;
-(double)weightSampleNoiseStdDev;
-(double)weightDailyChangeStdDev;
-(double)weightDailyMaxLoss;
-(double)weightChangePercentageMax;
-(NSArray *)weightGainHolidayDaysInYear;
-(long long)restingHeartRateMaxDailyDifference;
-(long long)restingHeartRateMaxTotalDifference;
-(long long)walkingHeartRateAverage;
-(long long)walkingHeartRateAverageMaxDailyDifference;
-(long long)walkingHeartRateAverageMaxTotalDifference;
-(long long)restingRespirationRate;
-(double)restingRespirationRateSampleFrequency;
-(double)restingRespirationRateSampleNoiseStdDev;
-(double)bloodPressureSampleFrequency;
-(long long)restingSystolicBloodPressure;
-(long long)restingDiastolicBloodPressure;
-(double)restingSystolicBloodPressureSampleNoiseStdDev;
-(double)restingDiastolicBloodPressureSampleNoiseStdDev;
-(double)bodyTempFeverMultiplier;
-(double)bodyTempExerciseMultiplier;
-(double)bodyTempSampleFrequency;
-(double)oxygenSaturationMean;
-(double)oxygenSaturationStdDev;
-(double)oxygenSaturationMeanAtElevation;
-(double)oxygenSaturationStdDevAtElevation;
-(double)oxygenSaturationMeasuringSuccessRate;
-(double)oxygenSaturationMeasuringSuccessRateDuringSleep;
-(double)oxygenSaturationSampleFrequency;
-(double)peripheralPerfusionIndexMean;
-(double)peripheralPerfusionIndexSampleFrequency;
-(double)peripheralPerfusionIndexStdDev;
-(double)ovulationIndeterminateProbabilityPercentage;
-(double)fitzpatrickSkinTypeSampleTime;
-(void)setFitzpatrickSkinTypeSampleTime:(double)arg1 ;
-(long long)fitzpatrickSkinTypeScore;
-(void)setFitzpatrickSkinTypeScore:(long long)arg1 ;
-(double)toothbrushingDurationMean;
-(double)toothbrushingDurationMeanStdDev;
-(double)handwashingDurationMean;
-(double)handwashingDurationMeanStdDev;
-(double)handwashingSampleFrequency;
-(double)handwashingSampleFrequencyStdDev;
-(double)activeCaloriesSampleFrequency;
-(double)restingCaloriesSampleFrequency;
-(double)stepsSampleFrequency;
-(double)stepsSampleFrequencyDuringExercise;
-(double)sedentarySampleFrequency;
-(void)setExerciseTimeSampleFrequency:(double)arg1 ;
-(double)swimmingStrokesPerYard;
-(double)exerciseCooldownTime;
-(double)exerciseIntensityPercentage;
-(NSDictionary *)workoutPrototypesByCalendarDay;
-(double)exerciseWeeklyWorkoutsMean;
-(double)exerciseWeeklyWorkoutsStdDev;
-(double)exercisePostDietWeeklyWorkoutsMean;
-(double)exercisePostDietWeeklyWorkoutsStdDev;
-(double)flightsClimbedDailyMean;
-(double)flightsClimbedStdDev;
-(double)flightsClimbedSampleTime;
-(double)flightsClimbedSampleFrequency;
-(double)flightsClimbedSampleFrequencyStdDev;
-(double)walkingSpeedMean;
-(double)walkingSpeedStdDev;
-(double)walkingSpeedSampleFrequency;
-(double)walkingSpeedSampleFrequencyStdDev;
-(double)stepLengthMean;
-(double)stepLengthStdDev;
-(double)stepLengthSampleFrequency;
-(double)stepLengthSampleFrequencyStdDev;
-(double)asymmetryPercentageStdDev;
-(double)asymmetryPercentageSampleFrequency;
-(double)asymmetryPercentageSampleFrequencyStdDev;
-(double)doubleSupportPercentageStdDev;
-(double)doubleSupportPercentageSampleFrequency;
-(double)doubleSupportPercentageSampleFrequencyStdDev;
-(double)sixMinuteWalkTestDistanceMean;
-(double)sixMinuteWalkTestDistanceStdDev;
-(double)sixMinuteWalkTestDistanceSampleFrequency;
-(double)sixMinuteWalkTestDistanceSampleFrequencyStdDev;
-(double)stairAscentSpeedMean;
-(double)stairAscentSpeedStdDev;
-(double)stairAscentSpeedSampleFrequency;
-(double)stairAscentSpeedSampleFrequencyStdDev;
-(double)stairDescentSpeedMean;
-(double)stairDescentSpeedStdDev;
-(double)stairDescentSpeedSampleFrequency;
-(double)stairDescentSpeedSampleFrequencyStdDev;
-(double)waterConsumedSampleTime;
-(double)waterConsumedStdDev;
-(double)fallSampleFrequency;
-(double)fallsDailyMean;
-(double)fallsDailyStdDev;
-(double)spirometrySampleFrequency;
-(double)spirometrySampleTime;
-(long long)asthmaSeverity;
-(double)mindfulSessionFrequency;
-(long long)mindfulSessionMean;
-(long long)mindfulSessionStdDev;
-(long long)resultsTrackingType;
@end
