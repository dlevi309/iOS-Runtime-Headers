/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@protocol LAContextServerEvaluationProt
@required
-(void)setCredential:(id)arg1 type:(long long)arg2 options:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(/*^block*/id)arg7;
-(void)setShowingCoachingHint:(BOOL)arg1 event:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4;
-(void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setOptions:(id)arg1 forInternalOperation:(long long)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4;
-(void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(/*^block*/id)arg6;
-(void)optionsForInternalOperation:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)credentialOfType:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3;

@end

