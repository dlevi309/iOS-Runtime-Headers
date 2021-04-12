/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol BKSProcessDelegate;
@class RBSProcessIdentity, RBSProcessHandle, BKSLaunchdJobSpecification, RBSAssertion, RBSProcessMonitor, BKSProcessExitContext, BKSProcessAssertion, BSProcessHandle, NSString;

@interface BKSProcess : NSObject <BSDescriptionProviding> {

	os_unfair_lock_s _lock;
	BOOL _bootstrapped;
	RBSProcessIdentity* _identity;
	RBSProcessHandle* _processHandle;
	BKSLaunchdJobSpecification* _jobSpec;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	BKSProcessExitContext* _lastExitContext;
	BKSProcessAssertion* _mediaAssertion;
	BKSProcessAssertion* _audioAssertion;
	BKSProcessAssertion* _accessoryAssertion;
	RBSAssertion* _visibilityAssertion;
	BOOL _workspaceLocked;
	BOOL _connectedToExternalAccessories;
	BOOL _nowPlayingWithAudio;
	BOOL _recordingAudio;
	id<BKSProcessDelegate> _delegate;
	long long _visibility;
	long long _taskState;
	long long _terminationReason;
	BSProcessHandle* _handle;

}

@property (assign,nonatomic) BOOL workspaceLocked;                                   //@synthesize workspaceLocked=_workspaceLocked - In the implementation block
@property (assign,nonatomic) long long visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL connectedToExternalAccessories;                    //@synthesize connectedToExternalAccessories=_connectedToExternalAccessories - In the implementation block
@property (assign,nonatomic) BOOL nowPlayingWithAudio;                               //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,nonatomic) BOOL recordingAudio;                                    //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,nonatomic) long long terminationReason;                            //@synthesize terminationReason=_terminationReason - In the implementation block
@property (assign,nonatomic,__weak) id<BKSProcessDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) long long taskState;                                  //@synthesize taskState=_taskState - In the implementation block
@property (nonatomic,readonly) double backgroundTimeRemaining; 
@property (nonatomic,readonly) BKSProcessExitContext * lastExitContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentProcess;
+(double)backgroundTimeRemaining;
+(id)busyExtensionInstances:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(id<BKSProcessDelegate>)delegate;
-(void)setDelegate:(id<BKSProcessDelegate>)arg1 ;
-(BSProcessHandle *)handle;
-(void)setVisibility:(long long)arg1 ;
-(long long)terminationReason;
-(long long)visibility;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(long long)taskState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BKSProcessExitContext *)lastExitContext;
-(double)backgroundTimeRemaining;
-(void)bootstrapCurrentProcess;
-(id)initWithProcessIdentity:(id)arg1 ;
-(BOOL)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_bootstrapWithError:(out id*)arg1 ;
-(void)_lock_configureMonitor;
-(void)_lock_updateVisibility;
-(id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5 ;
-(BOOL)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2 ;
-(void)setWorkspaceLocked:(BOOL)arg1 ;
-(void)setConnectedToExternalAccessories:(BOOL)arg1 ;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(void)setTerminationReason:(long long)arg1 ;
-(BOOL)workspaceLocked;
-(BOOL)connectedToExternalAccessories;
-(BOOL)nowPlayingWithAudio;
-(BOOL)recordingAudio;
@end

