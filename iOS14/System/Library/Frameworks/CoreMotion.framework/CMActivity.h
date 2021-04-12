/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)confidence;
-(CLMotionActivity)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasExitedVehicle;
-(BOOL)maybeExitingVehicle;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(id)description;
-(BOOL)isMoving;
-(BOOL)isRunning;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

