/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCLogicalDeviceManager <_GCDeviceManager>
@property (__weak) id<GCLogicalDeviceRegistry> deviceRegistry; 
@optional
-(BOOL)canMakeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
-(void)activateLogicalDevice:(id)arg1;
-(void)deactivateLogicalDevice:(id)arg1;

@required
-(id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
-(id<GCLogicalDeviceRegistry>)deviceRegistry;
-(void)setDeviceRegistry:(id)arg1;

@end

