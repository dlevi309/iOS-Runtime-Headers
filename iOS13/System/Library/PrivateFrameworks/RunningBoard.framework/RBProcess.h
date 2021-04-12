/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBJetsamBandProviding, OS_dispatch_source, RBBundleProperties;
@class RBLaunchdJob, RBSProcessIdentity, RBSProcessHandle, BSMachPortTaskNameRight, NSString, RBProcessState, NSObject, RBSProcessIdentifier, RBSProcessInstance, RBSProcessExitContext, RBSProcessExitStatus, BSAuditToken;

@interface RBProcess : NSObject <RBSProcessIdentifier, BSDescriptionProviding> {

	int _pid;
	RBLaunchdJob* _job;
	RBSProcessIdentity* _identity;
	RBSProcessHandle* _handle;
	BSMachPortTaskNameRight* _taskNameRight;
	NSString* _logProem;
	id<RBJetsamBandProviding> _jetsamProvider;
	RBProcess* _hostProcess;
	os_unfair_lock_s _lock;
	RBProcessState* _lock_appliedState;
	RBProcessState* _lock_state;
	int _appliedJetsamPriority;
	BOOL _platformBinary;
	BOOL _usesSocketMonitoring;
	BOOL _systemPreventsIdleSleep;
	unsigned char _manageFlags;
	NSObject*<OS_dispatch_source> _procSource;
	double _cachedProcessStartTime;
	BOOL _systemShell;
	BOOL _terminating;
	BOOL _suspended;
	int _requestedJetsamPriority;
	RBSProcessIdentifier* _identifier;
	RBSProcessInstance* _instance;
	RBSProcessExitContext* _lastExitContext;
	RBSProcessExitStatus* _intendedExitStatus;
	id<RBBundleProperties> _bundleProperties;
	BSAuditToken* _auditToken;
	NSString* _underlyingAssertion;
	double _processStartTime;

}

@property (nonatomic,copy,readonly) RBSProcessIdentifier * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessHandle * handle;                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                           //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessInstance * instance;                           //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) BSAuditToken * auditToken;                               //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) RBLaunchdJob * job;                                           //@synthesize job=_job - In the implementation block
@property (nonatomic,readonly) id<RBBundleProperties> bundleProperties;                      //@synthesize bundleProperties=_bundleProperties - In the implementation block
@property (nonatomic,readonly) RBProcess * hostProcess;                                      //@synthesize hostProcess=_hostProcess - In the implementation block
@property (assign,getter=isTerminating,nonatomic) BOOL terminating;                          //@synthesize terminating=_terminating - In the implementation block
@property (nonatomic,readonly) NSString * logProem;                                          //@synthesize logProem=_logProem - In the implementation block
@property (nonatomic,copy) RBSProcessExitStatus * intendedExitStatus;                        //@synthesize intendedExitStatus=_intendedExitStatus - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessExitContext * lastExitContext;                 //@synthesize lastExitContext=_lastExitContext - In the implementation block
@property (getter=isBeingPtraced,nonatomic,readonly) BOOL beingPtraced; 
@property (getter=isLifecycleManaged,nonatomic,readonly) BOOL lifecycleManaged; 
@property (getter=isReported,nonatomic,readonly) BOOL reported; 
@property (getter=isPlatformBinary,nonatomic,readonly) BOOL platformBinary;                  //@synthesize platformBinary=_platformBinary - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended;                            //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,readonly) int currentJetsamPriority; 
@property (nonatomic,readonly) int requestedJetsamPriority;                                  //@synthesize requestedJetsamPriority=_requestedJetsamPriority - In the implementation block
@property (getter=isSystemShell,nonatomic,readonly) BOOL systemShell;                        //@synthesize systemShell=_systemShell - In the implementation block
@property (nonatomic,readonly) NSString * underlyingAssertion;                               //@synthesize underlyingAssertion=_underlyingAssertion - In the implementation block
@property (nonatomic,readonly) double processStartTime;                                      //@synthesize processStartTime=_processStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(RBSProcessIdentifier *)identifier;
-(RBSProcessHandle *)handle;
-(BSAuditToken *)auditToken;
-(BOOL)isSuspended;
-(RBSProcessIdentity *)identity;
-(RBSProcessInstance *)instance;
-(id)succinctDescription;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isReported;
-(int)rbs_pid;
-(id)processPredicate;
-(RBSProcessExitContext *)lastExitContext;
-(RBProcess *)hostProcess;
-(double)processStartTime;
-(BOOL)isPlatformBinary;
-(RBLaunchdJob *)job;
-(void)setTerminating:(BOOL)arg1 ;
-(BOOL)isTerminating;
-(BOOL)isLifecycleManaged;
-(NSString *)logProem;
-(NSString *)underlyingAssertion;
-(id<RBBundleProperties>)bundleProperties;
-(BOOL)isSystemShell;
-(int)requestedJetsamPriority;
-(void)_applyState:(id)arg1 ;
-(void)_lock_shutdownSockets;
-(void)_applyJetsamLenientModeState:(BOOL)arg1 ;
-(void)_lock_applyCurrentStateIfPossible;
-(BOOL)_lock_terminateWithContext:(id)arg1 ;
-(BOOL)_sendSignal:(int)arg1 ;
-(void)_lock_applyJetsamPriority;
-(void)_lock_applyRole;
-(void)_lock_applyJetsamLenientMode;
-(void)_lock_applyGPU;
-(void)_lock_applyCPULimits;
-(id)_lock_lockedFilePathsIgnoringAllowed;
-(id)_lock_allowedLockedFilePaths;
-(void)_lock_suspend;
-(void)_lock_resume;
-(void)_lock_disableCPULimits;
-(void)_lock_setCPULimits:(SCD_Struct_RB4*)arg1 violationPolicy:(unsigned long long)arg2 ;
-(void)_lock_restoreCPULimitDefaults;
-(void)_lock_resumeCPUMonitoring;
-(id)_initWithInstance:(id)arg1 taskNameRight:(id)arg2 job:(id)arg3 bundleProperties:(id)arg4 jetsamBandProvider:(id)arg5 initialState:(id)arg6 hostProcess:(id)arg7 properties:(id)arg8 systemPreventsIdleSleep:(BOOL)arg9 ;
-(BOOL)isBeingPtraced;
-(void)_systemPreventIdleSleepStateDidChange:(BOOL)arg1 ;
-(int)currentJetsamPriority;
-(BOOL)terminateWithContext:(id)arg1 ;
-(void)invokeHandlerOnProcessDeath:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(RBSProcessExitStatus *)intendedExitStatus;
-(void)setIntendedExitStatus:(RBSProcessExitStatus *)arg1 ;
@end

