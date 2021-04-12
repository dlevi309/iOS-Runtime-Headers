/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCPhysicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCPhysicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)acceptDriverConnection:(id)arg1 forHIDDevice:(id)arg2;
-(id)driverConnectionForHIDDevice:(id)arg1;

@required
-(id)matchHIDDevice:(id)arg1;
-(id<GCPhysicalDeviceRegistry>)deviceRegistry;
-(void)relinquishHIDDevice:(id)arg1;
-(void)claimHIDDevice:(id)arg1;
-(void)setDeviceRegistry:(id)arg1;

@end

