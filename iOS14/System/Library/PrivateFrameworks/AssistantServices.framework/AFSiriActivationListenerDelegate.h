/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFSiriActivationListenerDelegate <NSObject>
@optional
-(void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(/*^block*/id)arg4;
-(void)siriActivationListener:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundApplicationWithBundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4;
-(void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4;
-(void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5;

@end

