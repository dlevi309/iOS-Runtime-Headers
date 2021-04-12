/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@protocol PBBridgeCompanionProtocol <NSObject>
@optional
-(void)gizmoBecameAvailableWantsConfirmation:(id)arg1;

@required
-(void)sendProxyActivationRequest:(id)arg1;
-(void)gizmoDidBeginActivating:(id)arg1;
-(void)gizmoDidFinishActivating:(id)arg1;
-(void)getCompanionLanguage:(id)arg1;
-(void)getCompanionRegion:(id)arg1;
-(void)gizmoDidEndPasscodeCreation:(id)arg1;
-(void)getSiriState:(id)arg1;
-(void)handleWarrantySentinelResponse:(id)arg1;
-(void)enableSiriForGizmo:(id)arg1;

@end

