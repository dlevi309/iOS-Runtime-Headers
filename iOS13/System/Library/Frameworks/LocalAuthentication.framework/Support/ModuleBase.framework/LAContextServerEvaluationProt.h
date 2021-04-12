/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@protocol LAContextServerEvaluationProt
@required
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(/*^block*/id)arg6;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(/*^block*/id)arg7;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setCredential:(id)arg1 type:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4;

@end

