/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCAppServerInterface
@required
-(void)pingWithReply:(/*^block*/id)arg1;
-(void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToLightXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToMotionXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToControllerServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToBatteryXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;
-(void)connectToSettingsXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2;

@end

