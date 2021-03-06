/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@protocol RWIRelayDelegate
@required
-(void)relayInitialize:(id)arg1;
-(void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
-(void)relayClientConnectionDidChange:(id)arg1;
-(BOOL)relay:(id)arg1 allowIncomingApplicationViaProxy:(SCD_Struct_RW5)arg2 pid:(int)arg3;
-(void)relay:(id)arg1 applicationUpdated:(id)arg2;
-(void)relay:(id)arg1 applicationConnected:(id)arg2;
-(void)relay:(id)arg1 applicationDisconnected:(id)arg2;
-(BOOL)relay:(id)arg1 allowIncomingApplicationConnection:(id)arg2 bundleIdentifier:(id)arg3;
-(id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
-(void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
-(id)relaySetupResponseForClientConnection:(id)arg1;

@end

