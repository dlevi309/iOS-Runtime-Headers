/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout {

	NSString* fManufacturerName;
	NSString* fModel;

}

@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) NSString * model; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
+(id)fitnessMachineWorkoutInstance:(id)arg1 ;
-(NSString *)model;
-(id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4 ;
-(NSString *)manufacturerName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

