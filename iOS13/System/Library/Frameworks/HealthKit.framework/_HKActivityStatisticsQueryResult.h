/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _HKActivityStatisticsQueryResult : NSObject <NSSecureCoding> {

	NSArray* _activeEnergyResults;
	NSArray* _appleMoveTimeResults;
	NSArray* _appleExerciseTimeResults;
	NSArray* _appleStandHourResults;
	NSArray* _workoutResults;

}

@property (nonatomic,copy) NSArray * activeEnergyResults;                   //@synthesize activeEnergyResults=_activeEnergyResults - In the implementation block
@property (nonatomic,copy) NSArray * appleMoveTimeResults;                  //@synthesize appleMoveTimeResults=_appleMoveTimeResults - In the implementation block
@property (nonatomic,copy) NSArray * appleExerciseTimeResults;              //@synthesize appleExerciseTimeResults=_appleExerciseTimeResults - In the implementation block
@property (nonatomic,copy) NSArray * appleStandHourResults;                 //@synthesize appleStandHourResults=_appleStandHourResults - In the implementation block
@property (nonatomic,copy) NSArray * workoutResults;                        //@synthesize workoutResults=_workoutResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)activeEnergyResults;
-(NSArray *)appleMoveTimeResults;
-(NSArray *)appleExerciseTimeResults;
-(NSArray *)appleStandHourResults;
-(NSArray *)workoutResults;
-(void)setActiveEnergyResults:(NSArray *)arg1 ;
-(void)setAppleMoveTimeResults:(NSArray *)arg1 ;
-(void)setAppleExerciseTimeResults:(NSArray *)arg1 ;
-(void)setAppleStandHourResults:(NSArray *)arg1 ;
-(void)setWorkoutResults:(NSArray *)arg1 ;
@end

