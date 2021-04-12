/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain,readonly) BSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,retain,readonly) RBSProcessIdentity * identity; 
+(id)currentProcess;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(BSProcessHandle *)handle;
-(BOOL)isRunning;
-(RBSProcessIdentity *)identity;
-(int)pid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(id)_initForCurrentProcess;
@end

