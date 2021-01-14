/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSProcessHandle, RBSProcessIdentity, BSMachPortTaskNameRight, NSString;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding> {

	BSProcessHandle* _handle;
	RBSProcessIdentity* _identity;
	BSMachPortTaskNameRight* _taskNameRight;
	BOOL _running;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running;                               //@synthesize running=_running - In the implementation block
@property (nonatomic,retain,readonly) BSProcessHandle * handle; 
@property (nonatomic,retain,readonly) RBSProcessIdentity * identity; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentProcess;
-(id)succinctDescription;
-(int)pid;
-(BSProcessHandle *)handle;
-(id)init;
-(RBSProcessIdentity *)identity;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(id)_initForCurrentProcess;
-(BOOL)isRunning;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

