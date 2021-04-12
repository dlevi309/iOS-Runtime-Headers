/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<BiometricKitDelegateXpcProtocol>)delegate;
-(void)setDelegate:(id<BiometricKitDelegateXpcProtocol>)arg1 ;
-(void)cancel;
-(void)disconnect;
-(int)connect;
-(unsigned long long)clientID;
-(unsigned long long)connectionId;
-(id)identities:(id)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)interruptConnection;
-(int)initializeConnection;
-(id)initWithDeviceType:(long long)arg1 clientType:(long long)arg2 ;
-(void)invalidateConnection;
-(void)registerDelegateCall:(BOOL)arg1 ;
-(void)registerDelegate:(BOOL)arg1 ;
-(void)notifyAppIsBackground:(BOOL)arg1 ;
-(void)notifyAppIsInactive:(BOOL)arg1 ;
-(void)enroll:(int)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 async:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)match:(id)arg1 withOptions:(id)arg2 async:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
-(void)detectPresenceWithOptions:(id)arg1 async:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 ;
-(int)removeAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned)arg2 ;
-(int)enrollContinue;
-(id)pullAlignmentData;
-(id)pullMatchPolicyInfoData;
-(id)getNodeTopologyForIdentity:(id)arg1 ;
-(id)getProtectedConfigurationForUser:(unsigned)arg1 ;
-(id)getSystemProtectedConfiguration;
-(int)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 ;
-(int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 ;
-(int)getBioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 ;
-(long long)getProvisioningState;
-(int)dropUnlockToken;
-(int)forceBioLockoutForUser:(unsigned)arg1 withOptions:(id)arg2 ;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(int)resetAppleConnectCounter;
-(int)registerStoreToken:(id)arg1 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 ;
-(id)getIdentitiesDatabaseHashForUser:(unsigned)arg1 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 ;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 ;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(long long)getSensorCalibrationStatus;
-(id)getCalibrationDataInfo;
-(id)getSensorInfo;
-(id)pullCalibrationData;
-(id)pullCaptureBuffer;
-(id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 imageWidth:(unsigned*)arg3 imageHeight:(unsigned*)arg4 ;
-(void)setDebugImages:(BOOL)arg1 ;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(BOOL)isFingerOn;
-(int)enableBackgroundFdet:(BOOL)arg1 ;
-(BOOL)isAriadneSignpostsEnabled;
-(BOOL)isXARTAvailable;
-(long long)getDeviceState;
-(int)startNewMatchAttempt;
-(int)getBiometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 ;
-(int)completeEnrollment;
-(int)suspendEnrollment:(BOOL)arg1 ;
-(int)setTemplate:(id)arg1 forIdentity:(id)arg2 ;
-(int)getAugmentationEligibility:(BOOL*)arg1 forIdentity:(id)arg2 ;
-(int)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 outData:(id*)arg3 ;
-(int)queryIdentityMigrationFailureForUser:(unsigned)arg1 failed:(BOOL*)arg2 clear:(BOOL)arg3 ;
-(int)enableMatchAutoRetry:(BOOL)arg1 ;
-(int)pauseFaceDetectTimer:(BOOL)arg1 ;
-(int)getLastMatchEvent:(id*)arg1 ;
@end

