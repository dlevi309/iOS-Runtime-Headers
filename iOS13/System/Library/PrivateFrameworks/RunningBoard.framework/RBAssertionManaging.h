/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/


@protocol RBAssertionManaging <NSObject,RBDomainAttributeManaging>
@required
-(id)stateForIdentity:(id)arg1;
-(id)processForIdentity:(id)arg1;
-(BOOL)invalidateAssertionsDueToCPUUsageViolationForProcessIdentifier:(id)arg1;
-(BOOL)invalidateAssertion:(id)arg1;
-(id)assertionDescriptorsWithFlattenedAttributes:(BOOL)arg1;
-(id)assertionsForOriginator:(id)arg1;
-(void)acquireAssertionWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)invalidateAssertionFromOriginator:(id)arg1 withIdentifier:(id)arg2;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1;
-(id)limitationsForInstance:(id)arg1;
-(BOOL)hasAssertionWithIdentifier:(id)arg1;
-(void)processDidLaunch:(id)arg1;
-(void)processDidTerminate:(id)arg1;
-(void)revalidateAssertionsForProcessIdentities:(id)arg1;

@end

