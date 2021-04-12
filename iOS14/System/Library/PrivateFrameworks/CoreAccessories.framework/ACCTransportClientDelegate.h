/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@protocol ACCTransportClientDelegate <NSObject>
@optional
-(void)transportClient:(id)arg1 authStatusDidChange:(BOOL)arg2 forConnectionWithUUID:(id)arg3;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5;
-(void)transportClientServerDisconnected:(id)arg1;

@end

