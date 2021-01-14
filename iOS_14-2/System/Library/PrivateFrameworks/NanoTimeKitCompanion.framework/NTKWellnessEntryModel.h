/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class HKQuantity, NSArray, NSDate, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry> {

	BOOL _wheelchairUser;
	BOOL _databaseLoading;
	BOOL _deviceLocked;
	BOOL _areFitnessAppsRestricted;
	long long _activityMoveMode;
	HKQuantity* _activeEnergyTotal;
	HKQuantity* _activeEnergyGoal;
	double _appleMoveTimeTotal;
	double _appleMoveTimeGoal;
	double _appleExerciseTimeTotal;
	double _appleExerciseTimeGoal;
	long long _appleStandHoursTotal;
	long long _appleStandHoursGoal;
	NSArray* _activeEnergyChartData;
	NSArray* _appleMoveTimeChartData;
	NSArray* _appleExerciseTimeChartData;
	NSArray* _appleStandHourChartData;

}

@property (assign,nonatomic) BOOL databaseLoading;                                       //@synthesize databaseLoading=_databaseLoading - In the implementation block
@property (assign,nonatomic) BOOL areFitnessAppsRestricted;                              //@synthesize areFitnessAppsRestricted=_areFitnessAppsRestricted - In the implementation block
@property (assign,nonatomic) long long activityMoveMode;                                 //@synthesize activityMoveMode=_activityMoveMode - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyTotal;                             //@synthesize activeEnergyTotal=_activeEnergyTotal - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyGoal;                              //@synthesize activeEnergyGoal=_activeEnergyGoal - In the implementation block
@property (assign,nonatomic) double appleMoveTimeTotal;                                  //@synthesize appleMoveTimeTotal=_appleMoveTimeTotal - In the implementation block
@property (assign,nonatomic) double appleMoveTimeGoal;                                   //@synthesize appleMoveTimeGoal=_appleMoveTimeGoal - In the implementation block
@property (assign,nonatomic) double appleExerciseTimeTotal;                              //@synthesize appleExerciseTimeTotal=_appleExerciseTimeTotal - In the implementation block
@property (assign,nonatomic) double appleExerciseTimeGoal;                               //@synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal - In the implementation block
@property (assign,nonatomic) BOOL wheelchairUser;                                        //@synthesize wheelchairUser=_wheelchairUser - In the implementation block
@property (assign,nonatomic) long long appleStandHoursTotal;                             //@synthesize appleStandHoursTotal=_appleStandHoursTotal - In the implementation block
@property (assign,nonatomic) long long appleStandHoursGoal;                              //@synthesize appleStandHoursGoal=_appleStandHoursGoal - In the implementation block
@property (nonatomic,retain) NSArray * activeEnergyChartData;                            //@synthesize activeEnergyChartData=_activeEnergyChartData - In the implementation block
@property (nonatomic,retain) NSArray * appleMoveTimeChartData;                           //@synthesize appleMoveTimeChartData=_appleMoveTimeChartData - In the implementation block
@property (nonatomic,retain) NSArray * appleExerciseTimeChartData;                       //@synthesize appleExerciseTimeChartData=_appleExerciseTimeChartData - In the implementation block
@property (nonatomic,retain) NSArray * appleStandHourChartData;                          //@synthesize appleStandHourChartData=_appleStandHourChartData - In the implementation block
@property (nonatomic,readonly) BOOL userHasDoneActivitySetup; 
@property (nonatomic,readonly) BOOL deviceLocked;                                        //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (setter=tl_setEntryDate:,nonatomic,retain) NSDate * tl_entryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)idealizedEntryModel;
+(id)formattingManager;
+(id)lockedEntryModel;
+(id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)_signatureCornerFromModel:(id)arg1 ;
+(id)_signatureBezelFromModel:(id)arg1 ;
+(id)_signatureRectangleFromModel:(id)arg1 ;
+(id)_LocalizedStringWithActiveEnergy:(id)arg1 ;
-(long long)activityMoveMode;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)availabilityState;
-(void)setDate:(id)arg1 ;
-(double)appleMoveTimeGoal;
-(double)appleExerciseTimeGoal;
-(long long)appleStandHoursGoal;
-(void)setAppleMoveTimeGoal:(double)arg1 ;
-(void)setActivityMoveMode:(long long)arg1 ;
-(void)setAppleExerciseTimeGoal:(double)arg1 ;
-(void)setAppleStandHoursGoal:(long long)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(double)appleMoveTimeCompletionPercentage;
-(double)activeEnergyCompletionPercentage;
-(double)appleExerciseTimeCompletionPercentage;
-(double)appleStandHourCompletionPercentage;
-(double)appleMoveTimeTotal;
-(HKQuantity *)activeEnergyTotal;
-(double)appleExerciseTimeTotal;
-(long long)appleStandHoursTotal;
-(void)setActiveEnergyTotal:(HKQuantity *)arg1 ;
-(void)setActiveEnergyGoal:(HKQuantity *)arg1 ;
-(void)setAppleStandHoursTotal:(long long)arg1 ;
-(void)setAppleExerciseTimeTotal:(double)arg1 ;
-(void)setActiveEnergyChartData:(NSArray *)arg1 ;
-(void)setAppleExerciseTimeChartData:(NSArray *)arg1 ;
-(void)setAppleStandHourChartData:(NSArray *)arg1 ;
-(HKQuantity *)activeEnergyGoal;
-(BOOL)userHasDoneActivitySetup;
-(BOOL)deviceLocked;
-(BOOL)areFitnessAppsRestricted;
-(BOOL)databaseLoading;
-(id)loggingString;
-(void)setAppleMoveTimeTotal:(double)arg1 ;
-(void)setWheelchairUser:(BOOL)arg1 ;
-(BOOL)wheelchairUser;
-(NSArray *)activeEnergyChartData;
-(NSArray *)appleMoveTimeChartData;
-(NSArray *)appleExerciseTimeChartData;
-(NSArray *)appleStandHourChartData;
-(BOOL)tl_validate:(id*)arg1 ;
-(NSDate *)tl_entryDate;
-(void)tl_setEntryDate:(id)arg1 ;
-(void)setAppleMoveTimeChartData:(NSArray *)arg1 ;
-(void)setDatabaseLoading:(BOOL)arg1 ;
-(void)setAreFitnessAppsRestricted:(BOOL)arg1 ;
@end

