/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKWorkout, HKUnit, NSString;

@interface WFHKWorkoutContainer : NSObject <WFNaming, NSSecureCoding> {

	HKWorkout* _workout;
	HKUnit* _distanceUnit;
	HKUnit* _caloriesUnit;

}

@property (nonatomic,retain) HKWorkout * workout;                   //@synthesize workout=_workout - In the implementation block
@property (nonatomic,retain) HKUnit * distanceUnit;                 //@synthesize distanceUnit=_distanceUnit - In the implementation block
@property (nonatomic,retain) HKUnit * caloriesUnit;                 //@synthesize caloriesUnit=_caloriesUnit - In the implementation block
@property (nonatomic,readonly) double caloriesValue; 
@property (nonatomic,readonly) double distanceValue; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDistanceUnit:(HKUnit *)arg1 ;
-(HKUnit *)distanceUnit;
-(NSString *)wfName;
-(HKWorkout *)workout;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkout:(HKWorkout *)arg1 ;
-(id)initWithWorkout:(id)arg1 ;
-(id)initWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3 ;
-(double)caloriesValue;
-(double)distanceValue;
-(HKUnit *)caloriesUnit;
-(void)setCaloriesUnit:(HKUnit *)arg1 ;
@end

