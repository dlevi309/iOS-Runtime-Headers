/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

