/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@protocol AFSiriActivationService <NSObject>
@required
-(oneway void)prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3;
-(oneway void)handleContext:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4;
-(oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)handleIntentForwardingAction:(id)arg1 inBackgroundApplicationWithBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

