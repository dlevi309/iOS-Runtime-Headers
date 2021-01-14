/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKActivityCache, NSArray;

@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding> {

	HKActivityCache* _currentActivityCache;
	NSArray* _activeEnergyResults;
	NSArray* _appleMoveTimeResults;
	NSArray* _appleExerciseTimeResults;
	NSArray* _appleStandHourResults;

}

@property (nonatomic,retain) HKActivityCache * currentActivityCache;              //@synthesize currentActivityCache=_currentActivityCache - In the implementation block
@property (nonatomic,copy) NSArray * activeEnergyResults;                         //@synthesize activeEnergyResults=_activeEnergyResults - In the implementation block
@property (nonatomic,copy) NSArray * appleMoveTimeResults;                        //@synthesize appleMoveTimeResults=_appleMoveTimeResults - In the implementation block
@property (nonatomic,copy) NSArray * appleExerciseTimeResults;                    //@synthesize appleExerciseTimeResults=_appleExerciseTimeResults - In the implementation block
@property (nonatomic,copy) NSArray * appleStandHourResults;                       //@synthesize appleStandHourResults=_appleStandHourResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)activeEnergyResults;
-(NSArray *)appleMoveTimeResults;
-(NSArray *)appleExerciseTimeResults;
-(NSArray *)appleStandHourResults;
-(void)setActiveEnergyResults:(NSArray *)arg1 ;
-(void)setAppleMoveTimeResults:(NSArray *)arg1 ;
-(void)setAppleExerciseTimeResults:(NSArray *)arg1 ;
-(void)setAppleStandHourResults:(NSArray *)arg1 ;
-(HKActivityCache *)currentActivityCache;
-(void)setCurrentActivityCache:(HKActivityCache *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

