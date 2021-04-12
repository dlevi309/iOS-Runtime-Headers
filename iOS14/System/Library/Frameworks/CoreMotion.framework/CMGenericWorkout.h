/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMGenericWorkout : CMWorkout {

	unsigned long long fWorkoutLabel;

}

@property (nonatomic,readonly) unsigned long long workoutLabel; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)genericWorkoutInstance:(id)arg1 ;
-(unsigned long long)workoutLabel;
-(id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

