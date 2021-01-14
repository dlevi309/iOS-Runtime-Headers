/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class GCDeviceLight;


@protocol _GCDeviceLightComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceLightServiceConnectedHandler; 
@property (nonatomic,retain) GCDeviceLight * light; 
@required
-(GCDeviceLight *)light;
-(void)setLight:(id)arg1;
-(id)deviceLightServiceConnectedHandler;
-(void)setDeviceLightServiceConnectedHandler:(/*^block*/id)arg1;

@end

