/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)trialOverridePath:(id)arg1 namespaceName:(id)arg2 factorName:(id)arg3 error:(id*)arg4 ;
-(BOOL)setTrialUseDefaultFiles:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)resetTrialMLModelsForNamespaceName:(id)arg1 error:(id*)arg2 ;
-(id)sysdiagnoseInformationWithError:(id*)arg1 ;
@end

