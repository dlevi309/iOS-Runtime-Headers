/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessExitContext, NSError, FBSProcessTerminationRequest, FBProcessWatchdogEventContext, FBProcessState, NSString;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding> {

	unsigned long long _exitReason;
	RBSProcessExitContext* _underlyingContext;
	NSError* _launchError;
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
@property (nonatomic,readonly) NSError * launchError;                                        //@synthesize launchError=_launchError - In the implementation block
@property (nonatomic,readonly) RBSProcessExitContext * underlyingContext;                    //@synthesize underlyingContext=_underlyingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForExitReason:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)createError;
-(FBProcessState *)stateBeforeExiting;
-(void)setWatchdogContext:(FBProcessWatchdogEventContext *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)terminationReason;
-(NSString *)debugDescription;
-(NSError *)launchError;
-(FBSProcessTerminationRequest *)terminationRequest;
-(int)exitCode;
-(RBSProcessExitContext *)underlyingContext;
-(BOOL)fairPlayFailure;
-(NSString *)description;
-(id)initWithUnderlyingContext:(id)arg1 ;
-(void)setTerminationReason:(long long)arg1 ;
-(unsigned long long)exitReason;
-(id)initWithLaunchError:(id)arg1 underlyingContext:(id)arg2 ;
-(BOOL)consideredJetsam;
-(BOOL)exitedNormally;
-(void)setStateBeforeExiting:(FBProcessState *)arg1 ;
-(FBProcessWatchdogEventContext *)watchdogContext;
-(int)terminationSignal;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(long long)exitStatus;
-(id)succinctDescriptionBuilder;
-(void)setTerminationRequest:(FBSProcessTerminationRequest *)arg1 ;
@end

