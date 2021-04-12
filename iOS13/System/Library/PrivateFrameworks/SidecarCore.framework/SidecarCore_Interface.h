/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

