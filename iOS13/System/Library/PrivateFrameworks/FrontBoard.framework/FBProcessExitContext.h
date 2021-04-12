/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessExitContext, FBSProcessTerminationRequest, FBProcessWatchdogEventContext, FBProcessState, NSString;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding> {

	unsigned long long _exitReason;
	RBSProcessExitContext* _underlyingContext;
	FBSProcessTerminationRequest* _terminationRequest;
	FBProcessWatchdogEventContext* _watchdogContext;
	FBProcessState* _stateBeforeExiting;
	long long _terminationReason;

}

@property (nonatomic,retain) FBSProcessTerminationRequest * terminationRequest;              //@synthesize terminationRequest=_terminationRequest - In the implementation block
@property (nonatomic,retain) FBProcessWatchdogEventContext * watchdogContext;                //@synthesize watchdogContext=_watchdogContext - In the implementation block
@property (nonatomic,copy) FBProcessState * stateBeforeExiting;                              //@synthesize stateBeforeExiting=_stateBeforeExiting - In the implementation block
@property (assign,nonatomic) long long terminationReason;                                    //@synthesize terminationReason=_terminationReason - In the implementation block
@property (nonatomic,readonly) unsigned long long exitReason;                                //@synthesize exitReason=_exitReason - In the implementation block
@property (nonatomic,readonly) RBSProcessExitContext * underlyingContext;                    //@synthesize underlyingContext=_underlyingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForExitReason:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(long long)terminationReason;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)exitReason;
-(void)setTerminationReason:(long long)arg1 ;
-(id)initWithUnderlyingContext:(id)arg1 ;
-(void)setStateBeforeExiting:(FBProcessState *)arg1 ;
-(void)setTerminationRequest:(FBSProcessTerminationRequest *)arg1 ;
-(void)setWatchdogContext:(FBProcessWatchdogEventContext *)arg1 ;
-(RBSProcessExitContext *)underlyingContext;
-(FBSProcessTerminationRequest *)terminationRequest;
-(FBProcessWatchdogEventContext *)watchdogContext;
-(FBProcessState *)stateBeforeExiting;
-(BOOL)exitedNormally;
-(long long)exitStatus;
-(int)exitCode;
-(int)terminationSignal;
-(BOOL)consideredJetsam;
-(BOOL)fairPlayFailure;
@end

