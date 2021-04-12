/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@protocol BiometricKitXpcProtocol <NSObject>
@required
-(void)resetAppleConnectCounter:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)diagnostics:(int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)enableBackgroundFdet:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)isXARTAvailable:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)fileRadarWithLogs:(id)arg1 description:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getBiometryAvailabilityForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getIdentityFromUUID:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)match:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)enrollContinue:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)identities:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)pullCaptureBuffer:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)registerDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getMaxIdentityCount:(int)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)removeIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)registerStoreToken:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)isAriadneSignpostsEnabled:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)startNewMatchAttempt:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getNodeTopologyForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)pullAlignmentData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getCalibrationDataInfo:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)forceBioLockoutForUser:(unsigned)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)completeEnrollment:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)setSystemProtectedConfiguration:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)pullMatchPolicyInfoData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getCountersignedStoreToken:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getAugmentationEligibilityForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getSystemProtectedConfiguration:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)updateIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getExpressModeStateForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getSensorInfo:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getProtectedConfigurationForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)suspendEnrollment:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)enableMatchAutoRetry:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)dropUnlockToken:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)notifyAppIsBackground:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)setDebugImages:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)detectPresenceWithOptions:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)cancel:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)disconnect:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)pauseFaceDetectTimer:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)isFingerOn:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)setUserDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getBioLockoutStateForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getSensorCalibrationStatus:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)setTemplate:(id)arg1 forIdentity:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getIdentitiesDatabaseHashForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)queryIdentityMigrationFailureForUser:(unsigned)arg1 clear:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)removeAllIdentitiesForUser:(unsigned)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)getLogs:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getFreeIdentityCount:(int)arg1 user:(unsigned)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4;
-(void)enroll:(int)arg1 user:(unsigned)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(/*^block*/id)arg5;
-(void)setProtectedConfiguration:(id)arg1 user:(unsigned)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(/*^block*/id)arg5;
-(void)connect:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)logEventOrCode:(unsigned long long)arg1;
-(void)notifyAppIsInactive:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)pullCalibrationData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)registerDelegate:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3;
-(void)getLastMatchEvent:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getProvisioningState:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;
-(void)getDeviceState:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2;

@end

