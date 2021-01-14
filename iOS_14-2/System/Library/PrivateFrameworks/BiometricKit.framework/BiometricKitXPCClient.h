/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@protocol BiometricKitDelegateXpcProtocol;
@class BiometricKitXPCClientConnection;

@interface BiometricKitXPCClient : NSObject {

	unsigned long long _clientID;
	unsigned long long _connectionID;
	long long _clientType;
	BiometricKitXPCClientConnection* _connection;
	BOOL _connectionInitialized;
	BOOL _connectionInvalidated;
	id<BiometricKitDelegateXpcProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<BiometricKitDelegateXpcProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long clientID; 
@property (nonatomic,readonly) unsigned long long connectionId; 
+(void)initialize;
-(void)invalidateConnection;
-(void)disconnect;
-(unsigned long long)clientID;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(void)enroll:(int)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 async:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(int)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 outData:(id*)arg3 ;
-(id)getIdentitiesDatabaseHashForUser:(unsigned)arg1 ;
-(int)initializeConnection;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(void)detectPresenceWithOptions:(id)arg1 async:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(int)resetAppleConnectCounter;
-(id)init;
-(id<BiometricKitDelegateXpcProtocol>)delegate;
-(int)enableMatchAutoRetry:(BOOL)arg1 ;
-(id)identities:(id)arg1 ;
-(int)getExpressModeState:(long long*)arg1 forUser:(unsigned)arg2 ;
-(int)getAugmentationEligibility:(BOOL*)arg1 forIdentity:(id)arg2 ;
-(id)pullMatchPolicyInfoData;
-(int)connect;
-(id)getNodeTopologyForIdentity:(id)arg1 ;
-(long long)getProvisioningState;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(void)registerDelegateCall:(BOOL)arg1 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(int)setTemplate:(id)arg1 forIdentity:(id)arg2 ;
-(id)getCalibrationDataInfo;
-(int)getBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 ;
-(id)pullCalibrationData;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(int)suspendEnrollment:(BOOL)arg1 ;
-(void)setDelegate:(id<BiometricKitDelegateXpcProtocol>)arg1 ;
-(id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 imageWidth:(unsigned*)arg3 imageHeight:(unsigned*)arg4 ;
-(id)initWithDeviceType:(long long)arg1 clientType:(long long)arg2 ;
-(void)match:(id)arg1 withOptions:(id)arg2 async:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
-(int)pauseFaceDetectTimer:(BOOL)arg1 ;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 ;
-(int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 ;
-(unsigned long long)connectionId;
-(int)registerStoreToken:(id)arg1 ;
-(void)notifyAppIsInactive:(BOOL)arg1 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(int)startNewMatchAttempt;
-(void)interruptConnection;
-(long long)getSensorCalibrationStatus;
-(int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned)arg1 failed:(BOOL*)arg2 clear:(BOOL)arg3 ;
-(void)notifyAppIsBackground:(BOOL)arg1 ;
-(id)pullAlignmentData;
-(id)getSystemProtectedConfiguration;
-(int)getLastMatchEvent:(id*)arg1 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 ;
-(int)removeAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 ;
-(long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned)arg2 ;
-(BOOL)isAriadneSignpostsEnabled;
-(int)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 ;
-(long long)getDeviceState;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(int)completeEnrollment;
-(int)enrollContinue;
-(id)pullCaptureBuffer;
-(int)dropUnlockToken;
-(void)cancel;
-(int)forceBioLockoutForUser:(unsigned)arg1 withOptions:(id)arg2 ;
-(int)enableBackgroundFdet:(BOOL)arg1 ;
-(id)getSensorInfo;
-(BOOL)isXARTAvailable;
-(BOOL)isFingerOn;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)setDebugImages:(BOOL)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(id)getProtectedConfigurationForUser:(unsigned)arg1 ;
-(void)dealloc;
-(void)registerDelegate:(BOOL)arg1 ;
@end

