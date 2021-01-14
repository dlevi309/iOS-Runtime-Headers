/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/


@protocol SidecarCore_Interface
@required
-(void)relaySession:(id)arg1 openedByDevice:(id)arg2 dataLink:(long long)arg3 service:(id)arg4;
-(void)relaySession:(long long)arg1 receivedOPACKData:(id)arg2 dataLink:(long long)arg3;
-(void)relaySession:(long long)arg1 closedWithError:(id)arg2;
-(void)relaySession:(long long)arg1 stream:(id)arg2 status:(unsigned long long)arg3;
-(void)relayPresenterStartServiceExtension:(id)arg1 completion:(/*^block*/id)arg2;
-(void)relayPresenterServiceExtensionReady:(id)arg1;
-(void)relayTerminateService;

@end

