/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/


@interface _BRKDeviceOrientationNotificationProxy : NSObject

@property (nonatomic,readonly) BOOL wristOrientationIsRight; 
@property (nonatomic,readonly) BOOL crownOrientationIsRight; 
+(id)sharedInstance;
-(id)init;
-(void)_postNotification;
-(void)_logCurrentState;
-(void)_postChangeNotification:(id)arg1 ;
-(BOOL)wristOrientationIsRight;
-(BOOL)crownOrientationIsRight;
@end

