/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class HKQuantity, NSArray, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry> {

	BOOL _databaseLoading;
	BOOL _deviceLocked;
	HKQuantity* _activeEnergyTotal;
	HKQuantity* _activeEnergyGoal;
	double _appleExerciseTimeTotal;
	double _appleExerciseTimeGoal;
	long long _appleStandHoursTotal;
	long long _appleStandHoursGoal;
	NSArray* _activeEnergyChartData;
	NSArray* _appleExerciseTimeChartData;
	NSArray* _appleStandHourChartData;

}

@property (assign,nonatomic) BOOL databaseLoading;                              //@synthesize databaseLoading=_databaseLoading - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyTotal;                    //@synthesize activeEnergyTotal=_activeEnergyTotal - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyGoal;                     //@synthesize activeEnergyGoal=_activeEnergyGoal - In the implementation block
@property (assign,nonatomic) double appleExerciseTimeTotal;                     //@synthesize appleExerciseTimeTotal=_appleExerciseTimeTotal - In the implementation block
@property (assign,nonatomic) double appleExerciseTimeGoal;                      //@synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal - In the implementation block
@property (assign,nonatomic) long long appleStandHoursTotal;                    //@synthesize appleStandHoursTotal=_appleStandHoursTotal - In the implementation block
@property (assign,nonatomic) long long appleStandHoursGoal;                     //@synthesize appleStandHoursGoal=_appleStandHoursGoal - In the implementation block
@property (nonatomic,retain) NSArray * activeEnergyChartData;                   //@synthesize activeEnergyChartData=_activeEnergyChartData - In the implementation block
@property (nonatomic,retain) NSArray * appleExerciseTimeChartData;              //@synthesize appleExerciseTimeChartData=_appleExerciseTimeChartData - In the implementation block
@property (nonatomic,retain) NSArray * appleStandHourChartData;                 //@synthesize appleStandHourChartData=_appleStandHourChartData - In the implementation block
@property (nonatomic,readonly) BOOL userHasDoneActivitySetup; 
@property (nonatomic,readonly) BOOL deviceLocked;                               //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)formattingManager;
+(id)idealizedEntryModel;
+(id)lockedEntryModel;
+(id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)_signatureCornerFromModel:(id)arg1 ;
+(id)_signatureBezelFromModel:(id)arg1 ;
+(id)_signatureRectangleFromModel:(id)arg1 ;
+(id)_LocalizedStringWithActiveEnergy:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)date;
-(void)setDate:(id)arg1 ;
-(double)appleExerciseTimeGoal;
-(long long)appleStandHoursGoal;
-(void)setAppleExerciseTimeGoal:(double)arg1 ;
-(void)setAppleStandHoursGoal:(long long)arg1 ;
-(long long)availabilityState;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(double)activeEnergyCompletionPercentage;
-(double)appleExerciseTimeCompletionPercentage;
-(double)appleStandHourCompletionPercentage;
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
-(BOOL)databaseLoading;
-(id)loggingString;
-(NSArray *)activeEnergyChartData;
-(NSArray *)appleExerciseTimeChartData;
-(NSArray *)appleStandHourChartData;
-(void)setDatabaseLoading:(BOOL)arg1 ;
@end

