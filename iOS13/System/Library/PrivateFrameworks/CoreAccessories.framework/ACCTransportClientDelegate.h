/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@protocol ACCTransportClientDelegate <NSObject>
@optional
-(void)transportClient:(id)arg1 authStatusDidChange:(BOOL)arg2 forConnectionWithUUID:(id)arg3;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5;

@end

