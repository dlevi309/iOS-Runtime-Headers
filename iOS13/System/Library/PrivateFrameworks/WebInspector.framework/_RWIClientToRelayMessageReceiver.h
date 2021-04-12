/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@protocol _RWIClientToRelayMessageReceiver
@required
-(void)_rpc_reportIdentifier:(id)arg1;
-(void)_rpc_forwardDidClose:(id)arg1;
-(void)_rpc_forwardGetListing:(id)arg1;
-(void)_rpc_forwardIndicateWebView:(id)arg1;
-(void)_rpc_forwardSocketData:(id)arg1;
-(void)_rpc_forwardSocketSetup:(id)arg1;
-(void)_rpc_getConnectedApplications:(id)arg1;
-(void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1;
-(void)_rpc_forwardAutomaticInspectionRejection:(id)arg1;
-(void)_rpc_reportDriverConnected:(id)arg1;
-(void)_rpc_reportDriverUpdated:(id)arg1;
-(void)_rpc_reportDriverDisconnected:(id)arg1;
-(void)_rpc_forwardDriverStateChangeRequest:(id)arg1;
-(void)_rpc_getConnectedDrivers:(id)arg1;
-(void)_rpc_forwardAutomationSessionRequest:(id)arg1;
-(void)_rpc_requestApplicationLaunch:(id)arg1;

@end

