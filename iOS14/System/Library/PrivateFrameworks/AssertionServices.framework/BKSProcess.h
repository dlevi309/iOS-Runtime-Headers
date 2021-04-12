/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/


@protocol BKSProcessDelegate;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessIdentity, RBSProcessHandle, BKSLaunchdJobSpecification, RBSAssertion, RBSProcessMonitor, BKSProcessExitContext, BKSProcessAssertion, BSProcessHandle;

@interface BKSProcess : NSObject {

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
+(id)busyExtensionInstances:(id)arg1 ;
+(id)currentProcess;
+(double)backgroundTimeRemaining;
-(BKSProcessExitContext *)lastExitContext;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(long long)visibility;
-(BSProcessHandle *)handle;
-(id)init;
-(id<BKSProcessDelegate>)delegate;
-(long long)terminationReason;
-(long long)taskState;
-(void)setVisibility:(long long)arg1 ;
-(void)setDelegate:(id<BKSProcessDelegate>)arg1 ;
-(id)description;
-(void)bootstrapCurrentProcess;
-(id)initWithProcessIdentity:(id)arg1 ;
-(void)setTerminationReason:(long long)arg1 ;
-(BOOL)bootstrapWithProcessHandle:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_bootstrapWithError:(out id*)arg1 ;
-(void)_lock_configureMonitor;
-(void)_lock_updateVisibility;
-(id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5 ;
-(BOOL)bootstrapWithSpecification:(id)arg1 error:(out id*)arg2 ;
-(void)setWorkspaceLocked:(BOOL)arg1 ;
-(void)setConnectedToExternalAccessories:(BOOL)arg1 ;
-(BOOL)workspaceLocked;
-(BOOL)connectedToExternalAccessories;
-(BOOL)nowPlayingWithAudio;
-(BOOL)recordingAudio;
-(void)invalidate;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(double)backgroundTimeRemaining;
@end

