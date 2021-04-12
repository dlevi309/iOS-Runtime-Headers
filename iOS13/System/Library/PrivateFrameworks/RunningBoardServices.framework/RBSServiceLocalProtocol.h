/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/


@protocol RBSServiceLocalProtocol
@required
-(void)reset;
-(BOOL)subscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2 error:(out id*)arg3;
-(void)unsubscribeProcessStateMonitor:(id)arg1 configuration:(id)arg2;
-(id)infoPlistResultForInstance:(id)arg1 forKeys:(id)arg2 error:(out id*)arg3;
-(id)acquireAssertion:(id)arg1 error:(out id*)arg2;
-(BOOL)invalidateAssertion:(id)arg1 error:(out id*)arg2;
-(BOOL)invalidateAssertionWithIdentifier:(id)arg1 error:(out id*)arg2;
-(id)lastExitContextForInstance:(id)arg1 error:(out id*)arg2;
-(id)limitationsForInstance:(id)arg1 error:(out id*)arg2;
-(id)hostProcessForInstance:(id)arg1 error:(out id*)arg2;
-(id)captureStateForSubsystem:(id)arg1 error:(out id*)arg2;
-(id)busyExtensionInstancesFromSet:(id)arg1 error:(out id*)arg2;
-(id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)arg1 error:(out id*)arg2;
-(BOOL)executeLaunchRequest:(id)arg1 process:(out id*)arg2 assertion:(out id*)arg3 error:(out id*)arg4;
-(BOOL)executeTerminateRequest:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3;
-(id)handleForKey:(id)arg1;
-(id)handleForPredicate:(id)arg1 error:(out id*)arg2;
-(void)subscribeToProcessDeath:(id)arg1 handler:(/*^block*/id)arg2;
-(id)statesForPredicate:(id)arg1 withDescriptor:(id)arg2 error:(out id*)arg3;
-(void)intendToExit:(id)arg1 withStatus:(id)arg2;
-(id)identifiersForStateCaptureSubsystems:(out id*)arg1;

@end

