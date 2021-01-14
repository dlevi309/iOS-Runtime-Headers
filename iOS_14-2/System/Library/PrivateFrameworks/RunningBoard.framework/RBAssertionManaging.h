/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

@class RBSystemState;


@protocol RBAssertionManaging <NSObject,RBDomainAttributeManaging>
@property (nonatomic,copy,readonly) RBSystemState * systemState; 
@required
-(RBSystemState *)systemState;
-(id)assertionsForOriginator:(id)arg1;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(id)processForIdentity:(id)arg1;
-(id)stateForIdentity:(id)arg1;
-(void)processDidLaunch:(id)arg1;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1;
-(BOOL)invalidateAssertion:(id)arg1;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
-(void)processDidTerminate:(id)arg1;
-(void)commitBatchWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1;
-(BOOL)hasAssertionWithIdentifier:(id)arg1;
-(id)limitationsForInstance:(id)arg1;
-(BOOL)isProcessForeground:(id)arg1;

@end

