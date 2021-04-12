/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <libBKDM2.dylib/libBKDM2.dylib-Structs.h>
#import <BiometricSupport/BiometricKitXPCServer.h>
#import <libobjc.A.dylib/CMWakeGestureDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSData, BioLog, NSObject, PearlCoreAnalytics, CMWakeGestureManager, CMDeviceOrientationManager, CMMotionManager, CMAttitude, NSMutableData, NSString;

@interface BiometricKitXPCServerPearl : BiometricKitXPCServer <CMWakeGestureDelegate, NSXPCListenerDelegate> {

	unsigned _services;
	unsigned _connect;
	unsigned _status;
	unsigned short _commProtocolVersion;
	NSData* _fieldDiagnosticsTatsuManifest;
	int _peakPowerPressureLevelNtfToken;
	BOOL _peakPowerPressureLevelNtfTokenValid;
	long long _pearlDeviceState;
	BioLog* _log;
	NSObject*<OS_dispatch_queue> _sharedMemoryTransferQueue;
	NSObject*<OS_dispatch_queue> _loggingDispatchQueue;
	BOOL _logSequenceDebug;
	BOOL _logIdentityRemoval;
	PearlCoreAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _analyticsDispatchQueue;
	CMWakeGestureManager* _wakeGestureManager;
	CMDeviceOrientationManager* _orientationManager;
	CMMotionManager* _motionManager;
	NSObject*<OS_dispatch_queue> _motionDispatchQueue;
	BOOL _orientationManagerRunning;
	unsigned long long _lastDeviceOrientation;
	CMAttitude* _lastDeviceAttitude;
	NSObject*<OS_dispatch_source> _sigTERMDispatchSource;
	BOOL _coachingHintsEnabled;
	NSMutableData* _performCommandBufferData;
	BOOL _performCommandBufferInUse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)displayPearlIssueNotification;
+(unsigned)getChipID;
+(unsigned)getBoardID;
+(unsigned)getDeviceTreeProperty:(id)arg1 ;
+(id)getSHA384FromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)deviceOrientation;
-(id)deviceAttitude;
-(void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 ;
-(int)initializeEngine;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3 ;
-(int)getBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 withClient:(id)arg3 ;
-(long long)getDeviceStateWithClient:(id)arg1 ;
-(int)startNewMatchAttemptWithClient:(id)arg1 ;
-(int)completeEnrollmentWithClient:(id)arg1 ;
-(int)suspendEnrollment:(BOOL)arg1 withClient:(id)arg2 ;
-(int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3 ;
-(int)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 outData:(id*)arg3 withClient:(id)arg4 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned)arg1 failed:(BOOL*)arg2 clear:(BOOL)arg3 withClient:(id)arg4 ;
-(int)enableMatchAutoRetry:(BOOL)arg1 withClient:(id)arg2 ;
-(int)pauseFaceDetectTimer:(BOOL)arg1 withClient:(id)arg2 ;
-(int)initAutoBugCapture;
-(id)createEnrollOperation;
-(int)initEnrollOperation:(id)arg1 biometricType:(int)arg2 userID:(unsigned)arg3 options:(id)arg4 client:(id)arg5 ;
-(int)performEnrollCommand:(id)arg1 ;
-(id)createMatchOperation;
-(int)initMatchOperation:(id)arg1 filter:(id)arg2 options:(id)arg3 client:(id)arg4 ;
-(int)performMatchCommand:(id)arg1 ;
-(id)createPresenceDetectOperation;
-(int)initPresenceDetectOperation:(id)arg1 options:(id)arg2 client:(id)arg3 ;
-(int)performPresenceDetectCommand:(id)arg1 ;
-(int)performCancelCommand;
-(int)performDisplayStatusChangedCommand:(BOOL)arg1 ;
-(int)performGetTemplatesValidityCommand:(unsigned)arg1 isValid:(BOOL*)arg2 ;
-(int)performRemoveUserDataCommand:(unsigned)arg1 ;
-(int)performGetIdentitiesListCommand:(unsigned)arg1 outBuffer:(id)arg2 ;
-(int)performRemoveIdentityCommand:(SCD_Struct_Bi0*)arg1 ;
-(int)performGetBiometrickitdInfoCommand:(SCD_Struct_Bi1*)arg1 ;
-(int)performGetCatacombStateCommand:(id)arg1 ;
-(int)saveTemplateListAfterTemplateUpdate;
-(int)performPrepareSaveCatacombCommand:(unsigned)arg1 outDataSize:(unsigned*)arg2 ;
-(int)performCompleteSaveCatacombCommand:(unsigned)arg1 outBuffer:(id)arg2 ;
-(int)archiveCatacombDataForUser:(unsigned)arg1 toArchiver:(id)arg2 ;
-(int)performConfirmSaveCatacombCommand:(unsigned)arg1 ;
-(int)performNoCatacombCommand:(unsigned)arg1 ;
-(int)unarchiveCatacombDataForUser:(unsigned)arg1 fromUnarchiver:(id)arg2 secureData:(id*)arg3 identities:(id*)arg4 ;
-(int)performLoadCatacombCommand:(unsigned)arg1 inData:(id)arg2 ;
-(int)performRequestMaxIdentityCountCommand:(unsigned*)arg1 ;
-(int)performGetFreeIdentityCountCommand:(unsigned)arg1 outCount:(unsigned*)arg2 ;
-(int)performGetCatacombUUIDCommand:(unsigned)arg1 outUUID:(id*)arg2 ;
-(int)performGetCatacombHashCommand:(unsigned)arg1 outHash:(id*)arg2 ;
-(int)performDropUnlockTokenCommand;
-(int)performGetSKSLockStateCommand:(unsigned)arg1 outState:(unsigned*)arg2 ;
-(int)performForceBioLockoutCommand:(unsigned)arg1 ;
-(int)performGetLastMatchEventCommand:(SCD_Struct_Bi2*)arg1 ;
-(int)performGetProtectedConfigCommand:(unsigned)arg1 outSetCfg:(id*)arg2 outEffectiveCfg:(id*)arg3 ;
-(int)performGetSystemProtectedConfigCommand:(id*)arg1 ;
-(int)performSetProtectedConfigCommand:(unsigned)arg1 cfg:(id)arg2 authData:(SCD_Struct_Bi3*)arg3 ;
-(int)performSetSystemProtectedConfigCommand:(id)arg1 authData:(SCD_Struct_Bi3*)arg2 ;
-(unsigned)serviceConnect;
-(void)handleSharedMemoryTransfer:(unsigned)arg1 withHeader:(id)arg2 data:(id)arg3 ;
-(int)performRequestMessageDataCommand:(unsigned long long)arg1 size:(unsigned long long)arg2 outData:(id*)arg3 ;
-(int)serviceStatus:(unsigned)arg1 version:(unsigned)arg2 ordinal:(unsigned long long)arg3 data:(id)arg4 timestamp:(unsigned long long)arg5 ;
-(void)statusMessage:(unsigned)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)checkReferenceFrames;
-(void)registerForLiftToWakeNotifications:(BOOL)arg1 ;
-(void)registerForDiagsProfileRemoval;
-(int)getCommProtocolVersion;
-(void)loadCalibrationData;
-(int)loadSavageFWCertificate;
-(int)loadDCNKernels;
-(int)performCommand:(unsigned short)arg1 inValue:(unsigned short)arg2 inData:(const void*)arg3 inSize:(unsigned long long)arg4 outData:(char*)arg5 outSize:(unsigned long long*)arg6 ;
-(void)updateLoggingState;
-(void)updateAutoRetryMode;
-(void)updateCombinedSequenceMode;
-(void)updateCoachingHintsEnabled;
-(void)updateEntitlementOverrideFlags;
-(void)matchResult:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)logKernelMessage:(id)arg1 ;
-(void)analyticsKernelMessage:(id)arg1 ;
-(int)enableFieldDiagnostics:(BOOL)arg1 withManifest:(id)arg2 ;
-(void)matchEventMessage:(SCD_Struct_Bi2*)arg1 ;
-(BOOL)isFieldDiagnosticsEnabled;
-(void)logSequenceDebugWithContext:(SCD_Struct_Bi5*)arg1 ;
-(id)detailsForFaceDetectInfo:(const SCD_Struct_Bi6*)arg1 ;
-(void)faceDetectMessage:(unsigned)arg1 details:(id)arg2 ;
-(int)setDoubleHeighStatusBar:(BOOL)arg1 ;
-(int)performCommand:(unsigned short)arg1 version:(unsigned short)arg2 inValue:(unsigned short)arg3 inData:(const void*)arg4 inSize:(unsigned long long)arg5 outData:(char*)arg6 outSize:(unsigned long long*)arg7 ;
-(int)getSPRLInfo:(SCD_Struct_Bi7*)arg1 ;
-(int)sendDCNKernelsCheckResult:(int)arg1 ;
-(id)getRomeoSerialNumberIORegAttempt;
-(id)classStringForEnum:(int)arg1 ;
-(id)getRomeoSerialNumberFDR;
-(id)getRomeoSerialNumberIOReg;
-(int)verifyRomeoSerialNumberAgainstFDR;
-(BOOL)hasFDREntitlement;
-(int)sendRomeoSNCheckResult:(int)arg1 ;
-(BOOL)hasManifestEntitlement:(unsigned)arg1 ;
-(int)sendSelfCheckResult:(SCD_Struct_Bi8*)arg1 ;
-(id)pathForAlternateFDRClass:(id)arg1 ;
-(int)loadFDRClassCommand:(int)arg1 withClass:(int)arg2 withData:(id)arg3 isAlternative:(BOOL)arg4 ;
-(id)getFDRClassFromFile:(id)arg1 ;
-(id)getFDRClassFromFDR:(id)arg1 ;
-(int)sendFDRDataCheckResult:(int)arg1 ;
-(int)loadPCECalibrationOverride:(id)arg1 ;
-(int)loadFDRCalibrationData:(BOOL)arg1 ;
-(int)verifyRomeoSerialNumber;
-(id)filenameForSavageCertType:(id)arg1 ;
-(void)logRemoveIdentity:(id)arg1 withClient:(id)arg2 ;
-(int)generateFieldDiagnosticsNonce:(id*)arg1 ;
-(int)getFieldDiagnosticsRemainingTime:(unsigned*)arg1 ;
-(int)getFieldDiagnosticsEncryptionKey:(id*)arg1 ;
-(int)enableFieldDiagnosticsCommand:(BOOL)arg1 tatsuManifest:(id)arg2 ;
-(int)saveFieldDiagnosticsTatsuManifest:(id)arg1 ;
-(void)serviceMatch:(unsigned)arg1 ;
-(void)firstUnlockCallback;
-(int)checkFieldDiagnosticsCatacombSetting;
@end

