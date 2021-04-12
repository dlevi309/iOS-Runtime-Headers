/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncManagerRepositoryTask.h>

@class HDAssertion;

@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {

	os_unfair_lock_s _lock;
	/*^block*/id _completion;
	HDAssertion* _accessibilityAssertion;

}

@property (nonatomic,retain) HDAssertion * accessibilityAssertion;              //@synthesize accessibilityAssertion=_accessibilityAssertion - In the implementation block
-(void)dealloc;
-(HDAssertion *)accessibilityAssertion;
-(void)callCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)didFinishWithSuccess;
-(void)didFailWithErrors:(id)arg1 ;
-(id)pipelineForRepository:(id)arg1 ;
-(id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)requiresExistingShareOwnerParticipant;
-(id)initWithManager:(id)arg1 context:(id)arg2 ;
-(void)mainWithRepositories:(id)arg1 error:(id)arg2 ;
-(void)setAccessibilityAssertion:(HDAssertion *)arg1 ;
@end

