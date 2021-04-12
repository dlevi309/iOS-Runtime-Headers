/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem {

	CLMotionActivity fActivity;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (nonatomic,readonly) BOOL maybeExitingVehicle; 
@property (nonatomic,readonly) BOOL hasExitedVehicle; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLMotionActivity)activity;
-(BOOL)isRunning;
-(int)confidence;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(BOOL)isMoving;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)maybeExitingVehicle;
-(BOOL)hasExitedVehicle;
@end

