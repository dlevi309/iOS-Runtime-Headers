/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(NSString *)manufacturerName;
-(id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4 ;
@end

