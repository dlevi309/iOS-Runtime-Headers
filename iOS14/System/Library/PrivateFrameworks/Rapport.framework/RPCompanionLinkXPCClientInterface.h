/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol RPCompanionLinkXPCClientInterface
@optional
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4;
-(void)xpcServerHidePassword:(unsigned)arg1;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
-(void)xpcServerAcceptSession:(id)arg1 completion:(/*^block*/id)arg2;
-(void)companionLinkLostDevice:(id)arg1;
-(void)companionLinkAuthCompleted:(id)arg1;
-(void)companionLinkFoundDevice:(id)arg1;
-(void)companionLinkLocalDeviceUpdated:(id)arg1;
-(void)xpcServerShowPassword:(id)arg1 flags:(unsigned)arg2;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2;
-(void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3;
-(void)xpcDiscoveryFoundEndpoint:(id)arg1;
-(void)xpcDiscoveryLostEndpoint:(id)arg1;
-(void)xpcDiscoveryChangedEndpoint:(id)arg1;

@end

