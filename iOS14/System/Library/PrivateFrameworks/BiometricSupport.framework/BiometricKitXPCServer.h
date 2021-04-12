/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, BKCatacomb, NSMutableArray, BiometricOperation, ActivityTracker, NSRecursiveLock, CatacombStateCache, BiometricAutoBugCapture, NSString;

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
	int _expressModeChgNtfToken;
	BOOL _expressModeChgNtfTokenValid;
	long long _expressModeState;
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
	CatacombStateCache* _catacombStateCache;
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
@property (nonatomic,retain,readonly) CatacombStateCache * catacombStateCache;                    //@synthesize catacombStateCache=_catacombStateCache - In the implementation block
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
-(BiometricOperation *)runningBioOp;
-(id)allClients;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(int)startNewMatchAttemptWithClient:(id)arg1 ;
-(BOOL)lastDisplayState;
-(void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(int)processBioOperation:(id)arg1 ;
-(BOOL)templatesExistAtBoot;
-(void)serviceStatus:(unsigned)arg1 type:(unsigned)arg2 inValue:(void*)arg3 ;
-(void)setCatacombFileAccessed:(BOOL)arg1 ;
-(id)stateDictionaryWithHints:(os_state_hints_s*)arg1 ;
-(int)registerStoreToken:(id)arg1 withClient:(id)arg2 ;
-(int)performGetProtectedConfigCommand:(unsigned)arg1 outSetCfg:(id*)arg2 outEffectiveCfg:(id*)arg3 ;
-(id)init;
-(BiometricAutoBugCapture *)biometricABC;
-(int)performGetFreeIdentityCountCommand:(unsigned)arg1 outCount:(unsigned*)arg2 ;
-(void)updateEnrollmentChangedNotification:(BOOL)arg1 ;
-(id)identitiesOfUser:(unsigned)arg1 ;
-(void)statusMessage:(unsigned)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)getProtectedConfigurationForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(int)getCountersignedStoreToken:(id*)arg1 withClient:(id)arg2 ;
-(int)forceBioLockoutForUser:(unsigned)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)performCompleteSaveCatacombCommand:(id)arg1 outBuffer:(id)arg2 ;
-(void)updateActiveOperationNotificationWithOverride:(int)arg1 ;
-(int)restoreAndSyncTemplates;
-(int)initEnrollOperation:(id)arg1 biometricType:(int)arg2 userID:(unsigned)arg3 options:(id)arg4 client:(id)arg5 ;
-(int)removeUser:(unsigned)arg1 ;
-(int)parseAuthDict:(id)arg1 toAuthData:(SCD_Struct_Bi1*)arg2 ;
-(int)performCancelCommand;
-(int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)performGetSKSLockStateCommand:(unsigned)arg1 outState:(unsigned*)arg2 ;
-(id)pullMatchPolicyInfoData;
-(int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2 ;
-(int)performLoadBioLockoutRecordCommand:(id)arg1 ;
-(int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(int)performGetLastMatchEventCommand:(SCD_Struct_Bi6*)arg1 ;
-(id)getCalibrationDataInfoWithClient:(id)arg1 ;
-(int)enroll:(int)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 withClient:(id)arg4 ;
-(void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(id)createEnrollOperation;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)logCatacombInfo:(id)arg1 data:(id)arg2 ;
-(NSMutableArray *)activeBioOpsQueue;
-(long long)getDeviceStateWithClient:(id)arg1 ;
-(CatacombStateCache *)catacombStateCache;
-(int)startEnrollOperation:(id)arg1 ;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(int)handleFirstUnlock;
-(int)serviceStatus:(unsigned)arg1 version:(unsigned)arg2 ordinal:(unsigned long long)arg3 data:(id)arg4 timestamp:(unsigned long long)arg5 ;
-(ActivityTracker *)ongoingCatacombSaveTimer;
-(int)archiveCatacombDataForComponent:(id)arg1 toArchiver:(id)arg2 ;
-(int)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 withClient:(id)arg4 ;
-(id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2 ;
-(long long)getProvisioningStateWithClient:(id)arg1 ;
-(int)loadCatacombForComponent:(id)arg1 ;
-(int)performGetCatacombStateCommand:(id)arg1 ;
-(int)initPresenceDetectOperation:(id)arg1 options:(id)arg2 client:(id)arg3 ;
-(int)pauseBioOperation:(id)arg1 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned)arg1 failed:(BOOL*)arg2 clear:(BOOL)arg3 withClient:(id)arg4 ;
-(int)resetAppleConnectCounterWithClient:(id)arg1 ;
-(int)cancelWithClient:(id)arg1 ;
-(void)disconnectingClient:(id)arg1 ;
-(int)initAutoBugCapture;
-(void)switchToNextBioOperation:(BOOL)arg1 ;
-(int)performPresenceDetectCommand:(id)arg1 ;
-(int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3 ;
-(BOOL)templatesAtBoot;
-(int)loadCatacombForUser:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)cmdDispatchQueue;
-(void)doSharedMemoryTransfers;
-(BOOL)isFingerOnWithClient:(id)arg1 ;
-(ActivityTracker *)ongoingBiometricOperation;
-(void)updateActiveOperationNotification;
-(void)updateExpressModeStateNotification;
-(BOOL)validateAllUsers;
-(void)resumeQueuedBioOperation;
-(int)performSetSystemProtectedConfigCommand:(id)arg1 authData:(SCD_Struct_Bi1*)arg2 ;
-(int)enableMatchAutoRetry:(BOOL)arg1 withClient:(id)arg2 ;
-(int)unarchiveCatacombDataForComponent:(id)arg1 fromUnarchiver:(id)arg2 secureData:(id*)arg3 identities:(id*)arg4 ;
-(int)performForceBioLockoutCommand:(unsigned)arg1 ;
-(int)performGetCatacombUUIDCommand:(unsigned)arg1 outUUID:(id*)arg2 ;
-(int)performConfirmSaveCatacombCommand:(id)arg1 ;
-(void)updateExpressModeStateWithEnrollmentCount:(unsigned)arg1 ;
-(id)catacombFileNameForComponent:(id)arg1 ;
-(void)updateExpressModeStateWithLockoutState:(unsigned)arg1 ;
-(id)createMatchEventDictionary:(SCD_Struct_Bi6*)arg1 ;
-(int)loadCatacombAfterFirstUnlock;
-(int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(void)notifyAppIsInactive:(BOOL)arg1 withClient:(id)arg2 ;
-(int)getCatacombSaveListForComponents:(id)arg1 list:(id*)arg2 ;
-(int)performGetTemplatesValidityCommand:(unsigned)arg1 isValid:(BOOL*)arg2 ;
-(int)performRequestMessageDataCommand:(unsigned long long)arg1 size:(unsigned long long)arg2 outData:(id*)arg3 ;
-(int)checkCatacombForUser:(unsigned)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)getIdentityObject:(SCD_Struct_Ca2*)arg1 ;
-(BOOL)isXARTAvailableWithClient:(id)arg1 ;
-(int)saveCatacombForComponents:(id)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2 ;
-(int)setAppleMesaSEPLoggingLevel;
-(id)getSensorInfoWithClient:(id)arg1 ;
-(int)performDisplayStatusChangedCommand:(BOOL)arg1 ;
-(int)performGetBiometrickitdInfoCommand:(SCD_Struct_Bi7*)arg1 ;
-(int)saveCatacombIfDirtyWithInterval:(double)arg1 andDelay:(double)arg2 ;
-(int)dropUnlockTokenWithClient:(id)arg1 ;
-(int)startPresenceDetectOperation:(id)arg1 ;
-(int)completeEnrollmentWithClient:(id)arg1 ;
-(int)filterIdentities:(id)arg1 withFilter:(id)arg2 ;
-(int)startMatchOperation:(id)arg1 ;
-(void)clearTemplateList;
-(void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(id)createPresenceDetectOperation;
-(NSRecursiveLock *)identitySynchrLock;
-(int)performSetProtectedConfigCommand:(unsigned)arg1 cfg:(id)arg2 authData:(SCD_Struct_Bi1*)arg3 ;
-(int)displayStateChanged:(BOOL)arg1 ;
-(void)handleSharedMemoryTransfer:(unsigned)arg1 withHeader:(id)arg2 data:(id)arg3 ;
-(int)performNoCatacombCommand:(unsigned)arg1 ;
-(void)addIdentityObjects:(id)arg1 ;
-(int)suspendEnrollment:(BOOL)arg1 withClient:(id)arg2 ;
-(id)pullAlignmentData;
-(NSObject*<OS_dispatch_queue>)biometricABCDispatchQueue;
-(id)hexDumpData:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)deleteUnusedCatacombFiles;
-(NSMutableArray *)bioOpsQueue;
-(void)updateExpressModeState;
-(long long)getSensorCalibrationStatusWithClient:(id)arg1 ;
-(id)pullCalibrationDataWithClient:(id)arg1 ;
-(int)saveCatacomb;
-(int)performGetCatacombHashCommand:(unsigned)arg1 outHash:(id*)arg2 ;
-(void)setTemplatesAtBoot:(BOOL)arg1 ;
-(id)createMatchOperation;
-(BOOL)isClassCFileAccessible;
-(BOOL)getEnabledForUnlock;
-(int)performSaveBioLockoutRecordCommand:(id)arg1 ;
-(void)setBiometricABCDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)identities;
-(long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(int)performRemoveUserDataCommand:(unsigned)arg1 ;
-(int)performPrepareSaveCatacombCommand:(id)arg1 outDataSize:(unsigned*)arg2 ;
-(int)performEnrollCommand:(id)arg1 ;
-(id)getSystemProtectedConfigurationWithClient:(id)arg1 ;
-(void)setAriadneSignposts:(BOOL)arg1 ;
-(BOOL)catacombFileAccessed;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(void)registerDelegate:(BOOL)arg1 withClient:(id)arg2 ;
-(int)writeStringToPersistentLog:(id)arg1 ;
-(int)performLoadCatacombCommand:(id)arg1 inData:(id)arg2 ;
-(int)enrollContinue;
-(void)stopBioOperationsAfterReconnect;
-(void)updateLockoutStateNotification:(unsigned)arg1 ;
-(BOOL)isDisplayOn;
-(int)saveTemplateListAfterTemplateUpdate;
-(void)clearTemplateListForUser:(unsigned)arg1 ;
-(unsigned)serviceConnect;
-(int)performMatchCommand:(id)arg1 ;
-(int)startBioOperation:(id)arg1 ;
-(os_state_data_s*)osStateHandler:(os_state_hints_s*)arg1 ;
-(int)syncTemplateListForUser:(unsigned)arg1 ;
-(int)saveCatacombForIdentity:(id)arg1 ;
-(int)getLastMatchEvent:(id*)arg1 withClient:(id)arg2 ;
-(int)performGetSystemProtectedConfigCommand:(id*)arg1 ;
-(int)enableBackgroundFdet:(BOOL)arg1 withClient:(id)arg2 ;
-(id)getIdentitiesDatabaseHashForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(int)cacheCatacombInfo;
-(int)pauseFaceDetectTimer:(BOOL)arg1 withClient:(id)arg2 ;
-(int)loadCatacomb;
-(id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 hasWidth:(unsigned*)arg3 hasHeight:(unsigned*)arg4 withClient:(id)arg5 ;
-(void)sendStatusMessage:(unsigned)arg1 toClient:(id)arg2 ;
-(IONotificationPortRef)notifyport;
-(int)setDebugImages:(BOOL)arg1 withClient:(id)arg2 ;
-(int)removeAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)getAugmentationEligibility:(BOOL*)arg1 forIdentity:(id)arg2 withClient:(id)arg3 ;
-(int)initMatchOperation:(id)arg1 filter:(id)arg2 options:(id)arg3 client:(id)arg4 ;
-(void)removeBioOperationOfClient:(id)arg1 ;
-(int)getBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(int)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 outData:(id*)arg3 withClient:(id)arg4 ;
-(id)identities:(id)arg1 withClient:(id)arg2 ;
-(id)getIdentityObjectByUserID:(unsigned)arg1 UUID:(id)arg2 ;
-(int)checkTemplatesValidityForUser:(unsigned)arg1 ;
-(int)performRequestMaxIdentityCountCommand:(unsigned*)arg1 ;
-(int)getExpressModeState:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 withClient:(id)arg2 ;
-(int)readCatacombState;
-(int)performDropUnlockTokenCommand;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2 ;
-(id)identitiesOfComponent:(id)arg1 ;
-(int)performIsXARTAvailableCommand:(BOOL*)arg1 ;
-(id)pullCaptureBufferWithClient:(id)arg1 ;
-(void)dealloc;
-(void)removeIdentityObject:(id)arg1 ;
-(unsigned)catacombVersion;
-(int)updatePropertiesOfIdentities;
-(BOOL)ariadneSignposts;
-(id)catacombComponentForIdentity:(id)arg1 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 withClient:(id)arg5 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)performRemoveIdentityCommand:(SCD_Struct_Ca2*)arg1 ;
-(void)setBiometricABC:(BiometricAutoBugCapture *)arg1 ;
-(int)performGetIdentitiesListCommand:(unsigned)arg1 outBuffer:(id)arg2 ;
@end

