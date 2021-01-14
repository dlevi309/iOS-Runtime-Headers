/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMSwimWorkout : CMWorkout {

	long long fLocation;
	double fPoolLength;

}

@property (nonatomic,readonly) long long location; 
@property (nonatomic,readonly) double poolLength; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)swimLocationName:(long long)arg1 ;
+(id)swimWorkoutInstance:(id)arg1 ;
-(double)poolLength;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3 ;
-(id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 ;
-(long long)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

