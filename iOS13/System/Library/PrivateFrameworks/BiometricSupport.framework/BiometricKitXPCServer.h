/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, BKCatacomb, NSMutableArray, BiometricOperation, ActivityTracker, NSRecursiveLock, NSMutableDictionary, BiometricAutoBugCapture, NSString;

@interface BiometricKitXPCServer : NSObject <CMWakeGestureDelegate, NSXPCListenerDelegate> {

	unsigned long long _osStateHandle;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSMutableSet* _exportedObjects;
	BKCatacomb* _catacomb;
	unsigned _maxTemplatesPerUser;
	unsigned _maxSupportedUsers;
	int _activeOperationNtfToken;
	BOOL _activeOperationNtfTokenValid;
	NSObject*<OS_dispatch_queue> _activeOperationNtfQueue;
	BOOL _dsChangeDetected;
	unsigned _backlightService;
	int _displayStatusNotifyToken;
	int _lastDisplayState;
	int _enrollChgNtfToken;
	BOOL _enrollChgNtfTokenValid;
	int _lockoutChgNtfToken;
	BOOL _lockoutChgNtfTokenValid;
	BOOL _ariadneSignposts;
	BOOL _templatesAtBoot;
	BOOL _catacombFileAccessed;
	IONotificationPortRef _notifyport;
	NSObject*<OS_dispatch_queue> _cmdDispatchQueue;
	NSMutableArray* _bioOpsQueue;
	NSMutableArray* _activeBioOpsQueue;
	BiometricOperation* _runningBioOp;
	ActivityTracker* _ongoingCatacombSaveTimer;
	ActivityTracker* _ongoingBiometricOperation;
	NSMutableArray* _identities;
	NSRecursiveLock* _identitySynchrLock;
	NSMutableDictionary* _catacombStateDict;
	BiometricAutoBugCapture* _biometricABC;
	NSObject*<OS_dispatch_queue> _biometricABCDispatchQueue;

}

@property (nonatomic,readonly) IONotificationPortRef notifyport;                                  //@synthesize notifyport=_notifyport - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> cmdDispatchQueue;              //@synthesize cmdDispatchQueue=_cmdDispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL ariadneSignposts;                                               //@synthesize ariadneSignposts=_ariadneSignposts - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * bioOpsQueue;                               //@synthesize bioOpsQueue=_bioOpsQueue - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * activeBioOpsQueue;                         //@synthesize activeBioOpsQueue=_activeBioOpsQueue - In the implementation block
@property (nonatomic,retain,readonly) BiometricOperation * runningBioOp;                          //@synthesize runningBioOp=_runningBioOp - In the implementation block
@property (nonatomic,retain,readonly) ActivityTracker * ongoingCatacombSaveTimer;                 //@synthesize ongoingCatacombSaveTimer=_ongoingCatacombSaveTimer - In the implementation block
@property (nonatomic,retain,readonly) ActivityTracker * ongoingBiometricOperation;                //@synthesize ongoingBiometricOperation=_ongoingBiometricOperation - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * identities;                                //@synthesize identities=_identities - In the implementation block
@property (nonatomic,retain,readonly) NSRecursiveLock * identitySynchrLock;                       //@synthesize identitySynchrLock=_identitySynchrLock - In the implementation block
@property (assign,nonatomic) BOOL templatesAtBoot;                                                //@synthesize templatesAtBoot=_templatesAtBoot - In the implementation block
@property (assign,nonatomic) BOOL catacombFileAccessed;                                           //@synthesize catacombFileAccessed=_catacombFileAccessed - In the implementation block
@property (nonatomic,readonly) BOOL lastDisplayState; 
@property (nonatomic,retain,readonly) NSMutableDictionary * catacombStateDict;                    //@synthesize catacombStateDict=_catacombStateDict - In the implementation block
@property (nonatomic,retain) BiometricAutoBugCapture * biometricABC;                              //@synthesize biometricABC=_biometricABC - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> biometricABCDispatchQueue;              //@synthesize biometricABCDispatchQueue=_biometricABCDispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setPreferenceValue:(id)arg1 forKey:(id)arg2 ;
+(BOOL)isPreferenceKeySet:(id)arg1 ;
+(id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2 ;
+(id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2 defaultValue:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableArray *)identities;
-(id)allClients;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(int)enrollContinue;
-(id)pullAlignmentData;
-(id)pullMatchPolicyInfoData;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(int)removeUser:(unsigned)arg1 ;
-(BOOL)isDisplayOn;
-(int)cancelWithClient:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cmdDispatchQueue;
-(void)registerDelegate:(BOOL)arg1 withClient:(id)arg2 ;
-(void)notifyAppIsInactive:(BOOL)arg1 withClient:(id)arg2 ;
-(int)loadCatacombAfterFirstUnlock;
-(int)enroll:(int)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 withClient:(id)arg4 ;
-(int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2 ;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)removeAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2 ;
-(id)identities:(id)arg1 withClient:(id)arg2 ;
-(long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2 ;
-(long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)registerStoreToken:(id)arg1 withClient:(id)arg2 ;
-(int)getCountersignedStoreToken:(id*)arg1 withClient:(id)arg2 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 withClient:(id)arg5 ;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)resetAppleConnectCounterWithClient:(id)arg1 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(id)getIdentitiesDatabaseHashForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(int)dropUnlockTokenWithClient:(id)arg1 ;
-(int)forceBioLockoutForUser:(unsigned)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2 ;
-(id)getProtectedConfigurationForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(id)getSystemProtectedConfigurationWithClient:(id)arg1 ;
-(int)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 withClient:(id)arg4 ;
-(int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(long long)getProvisioningStateWithClient:(id)arg1 ;
-(int)getBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(long long)getSensorCalibrationStatusWithClient:(id)arg1 ;
-(id)getCalibrationDataInfoWithClient:(id)arg1 ;
-(id)getSensorInfoWithClient:(id)arg1 ;
-(int)setDebugImages:(BOOL)arg1 withClient:(id)arg2 ;
-(id)pullCalibrationDataWithClient:(id)arg1 ;
-(id)pullCaptureBufferWithClient:(id)arg1 ;
-(id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 hasWidth:(unsigned*)arg3 hasHeight:(unsigned*)arg4 withClient:(id)arg5 ;
-(BOOL)isFingerOnWithClient:(id)arg1 ;
-(int)enableBackgroundFdet:(BOOL)arg1 withClient:(id)arg2 ;
-(BOOL)ariadneSignposts;
-(BOOL)isXARTAvailableWithClient:(id)arg1 ;
-(long long)getDeviceStateWithClient:(id)arg1 ;
-(int)startNewMatchAttemptWithClient:(id)arg1 ;
-(int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(int)completeEnrollmentWithClient:(id)arg1 ;
-(int)suspendEnrollment:(BOOL)arg1 withClient:(id)arg2 ;
-(int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3 ;
-(int)getAugmentationEligibility:(BOOL*)arg1 forIdentity:(id)arg2 withClient:(id)arg3 ;
-(int)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 outData:(id*)arg3 withClient:(id)arg4 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned)arg1 failed:(BOOL*)arg2 clear:(BOOL)arg3 withClient:(id)arg4 ;
-(int)enableMatchAutoRetry:(BOOL)arg1 withClient:(id)arg2 ;
-(int)pauseFaceDetectTimer:(BOOL)arg1 withClient:(id)arg2 ;
-(int)getLastMatchEvent:(id*)arg1 withClient:(id)arg2 ;
-(os_state_data_s*)osStateHandler:(os_state_hints_s*)arg1 ;
-(int)initAutoBugCapture;
-(void)updateActiveOperationNotification;
-(int)displayStateChanged:(BOOL)arg1 ;
-(void)disconnectingClient:(id)arg1 ;
-(id)stateDictionaryWithHints:(os_state_hints_s*)arg1 ;
-(id)createEnrollOperation;
-(int)initEnrollOperation:(id)arg1 biometricType:(int)arg2 userID:(unsigned)arg3 options:(id)arg4 client:(id)arg5 ;
-(int)processBioOperation:(id)arg1 ;
-(int)parseAuthDict:(id)arg1 toAuthData:(SCD_Struct_Bi1*)arg2 ;
-(int)checkCatacombForUser:(unsigned)arg1 ;
-(int)performEnrollCommand:(id)arg1 ;
-(id)createMatchOperation;
-(int)initMatchOperation:(id)arg1 filter:(id)arg2 options:(id)arg3 client:(id)arg4 ;
-(int)performMatchCommand:(id)arg1 ;
-(id)createPresenceDetectOperation;
-(int)initPresenceDetectOperation:(id)arg1 options:(id)arg2 client:(id)arg3 ;
-(int)performPresenceDetectCommand:(id)arg1 ;
-(int)performCancelCommand;
-(void)removeBioOperationOfClient:(id)arg1 ;
-(int)startEnrollOperation:(id)arg1 ;
-(int)startMatchOperation:(id)arg1 ;
-(int)startPresenceDetectOperation:(id)arg1 ;
-(void)sendStatusMessage:(unsigned)arg1 toClient:(id)arg2 ;
-(int)startBioOperation:(id)arg1 ;
-(int)pauseBioOperation:(id)arg1 ;
-(void)resumeQueuedBioOperation;
-(void)updateActiveOperationNotificationWithOverride:(int)arg1 ;
-(id)hexDumpData:(char*)arg1 size:(unsigned long long)arg2 ;
-(int)writeStringToPersistentLog:(id)arg1 ;
-(int)performDisplayStatusChangedCommand:(BOOL)arg1 ;
-(void)updateLockoutStateNotification:(unsigned)arg1 ;
-(int)loadCatacomb;
-(id)identitiesOfUser:(unsigned)arg1 ;
-(BOOL)isClassCFileAccessible;
-(BOOL)catacombFileAccessed;
-(void)setCatacombFileAccessed:(BOOL)arg1 ;
-(void)setTemplatesAtBoot:(BOOL)arg1 ;
-(int)restoreAndSyncTemplates;
-(void)updateEnrollmentChangedNotification:(BOOL)arg1 ;
-(int)handleFirstUnlock;
-(int)loadCatacombForUser:(unsigned)arg1 ;
-(BOOL)validateAllUsers;
-(int)syncTemplateListForUser:(unsigned)arg1 ;
-(int)performGetTemplatesValidityCommand:(unsigned)arg1 isValid:(BOOL*)arg2 ;
-(int)saveCatacomb;
-(int)performRemoveUserDataCommand:(unsigned)arg1 ;
-(id)catacombFileNameForUserID:(unsigned)arg1 ;
-(int)cacheCatacombInfo;
-(int)performGetIdentitiesListCommand:(unsigned)arg1 outBuffer:(id)arg2 ;
-(id)getIdentityObjectByUserID:(unsigned)arg1 UUID:(id)arg2 ;
-(int)performRemoveIdentityCommand:(SCD_Struct_Bi3*)arg1 ;
-(void)removeIdentityObject:(id)arg1 ;
-(int)performGetBiometrickitdInfoCommand:(SCD_Struct_Bi4*)arg1 ;
-(int)performGetCatacombStateCommand:(id)arg1 ;
-(int)saveTemplateListAfterTemplateUpdate;
-(int)readCatacombState;
-(int)performPrepareSaveCatacombCommand:(unsigned)arg1 outDataSize:(unsigned*)arg2 ;
-(int)performCompleteSaveCatacombCommand:(unsigned)arg1 outBuffer:(id)arg2 ;
-(int)logCatacombInfo:(id)arg1 data:(id)arg2 ;
-(unsigned)catacombVersion;
-(int)saveCatacombForUsers:(id)arg1 ;
-(int)getCatacombSaveListForUsers:(id)arg1 list:(id*)arg2 ;
-(int)archiveCatacombDataForUser:(unsigned)arg1 toArchiver:(id)arg2 ;
-(int)performConfirmSaveCatacombCommand:(unsigned)arg1 ;
-(void)clearTemplateList;
-(int)performNoCatacombCommand:(unsigned)arg1 ;
-(void)deleteUnusedCatacombFiles;
-(void)clearTemplateListForUser:(unsigned)arg1 ;
-(int)unarchiveCatacombDataForUser:(unsigned)arg1 fromUnarchiver:(id)arg2 secureData:(id*)arg3 identities:(id*)arg4 ;
-(int)performLoadCatacombCommand:(unsigned)arg1 inData:(id)arg2 ;
-(void)addIdentityObjects:(id)arg1 ;
-(int)saveCatacombForIdentity:(id)arg1 ;
-(int)filterIdentities:(id)arg1 withFilter:(id)arg2 ;
-(int)performRequestMaxIdentityCountCommand:(unsigned*)arg1 ;
-(int)performGetFreeIdentityCountCommand:(unsigned)arg1 outCount:(unsigned*)arg2 ;
-(int)performGetCatacombUUIDCommand:(unsigned)arg1 outUUID:(id*)arg2 ;
-(int)performGetCatacombHashCommand:(unsigned)arg1 outHash:(id*)arg2 ;
-(int)performDropUnlockTokenCommand;
-(int)performGetSKSLockStateCommand:(unsigned)arg1 outState:(unsigned*)arg2 ;
-(int)performForceBioLockoutCommand:(unsigned)arg1 ;
-(int)performGetLastMatchEventCommand:(SCD_Struct_Bi5*)arg1 ;
-(id)createMatchEventDictionary:(SCD_Struct_Bi5*)arg1 ;
-(int)performGetProtectedConfigCommand:(unsigned)arg1 outSetCfg:(id*)arg2 outEffectiveCfg:(id*)arg3 ;
-(int)performGetSystemProtectedConfigCommand:(id*)arg1 ;
-(int)performSetProtectedConfigCommand:(unsigned)arg1 cfg:(id)arg2 authData:(SCD_Struct_Bi1*)arg3 ;
-(int)performSetSystemProtectedConfigCommand:(id)arg1 authData:(SCD_Struct_Bi1*)arg2 ;
-(unsigned)serviceConnect;
-(void)handleSharedMemoryTransfer:(unsigned)arg1 withHeader:(id)arg2 data:(id)arg3 ;
-(int)performRequestMessageDataCommand:(unsigned long long)arg1 size:(unsigned long long)arg2 outData:(id*)arg3 ;
-(int)serviceStatus:(unsigned)arg1 version:(unsigned)arg2 ordinal:(unsigned long long)arg3 data:(id)arg4 timestamp:(unsigned long long)arg5 ;
-(void)statusMessage:(unsigned)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(void)switchToNextBioOperation:(BOOL)arg1 ;
-(void)stopBioOperationsAfterReconnect;
-(BOOL)lastDisplayState;
-(int)checkTemplatesValidityForUser:(unsigned)arg1 ;
-(BOOL)templatesExistAtBoot;
-(id)getIdentityObject:(SCD_Struct_Bi3*)arg1 ;
-(int)saveCatacombIfDirtyWithInterval:(double)arg1 andDelay:(double)arg2 ;
-(int)performSaveBioLockoutRecordCommand:(id)arg1 ;
-(int)performLoadBioLockoutRecordCommand:(id)arg1 ;
-(int)performIsXARTAvailableCommand:(BOOL*)arg1 ;
-(void)doSharedMemoryTransfers;
-(BOOL)getEnabledForUnlock;
-(int)setAppleMesaSEPLoggingLevel;
-(void)serviceStatus:(unsigned)arg1 type:(unsigned)arg2 inValue:(void*)arg3 ;
-(void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(IONotificationPortRef)notifyport;
-(void)setAriadneSignposts:(BOOL)arg1 ;
-(NSMutableArray *)bioOpsQueue;
-(NSMutableArray *)activeBioOpsQueue;
-(BiometricOperation *)runningBioOp;
-(ActivityTracker *)ongoingCatacombSaveTimer;
-(ActivityTracker *)ongoingBiometricOperation;
-(NSRecursiveLock *)identitySynchrLock;
-(BOOL)templatesAtBoot;
-(NSMutableDictionary *)catacombStateDict;
-(BiometricAutoBugCapture *)biometricABC;
-(void)setBiometricABC:(BiometricAutoBugCapture *)arg1 ;
-(NSObject*<OS_dispatch_queue>)biometricABCDispatchQueue;
-(void)setBiometricABCDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

