/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)workoutLabel;
-(id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2 ;
@end

