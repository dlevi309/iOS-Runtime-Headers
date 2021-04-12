/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/

#import <BiometricSupport/BiometricKitXpcProtocol.h>

@class NSMutableDictionary, BiometricKitXPCServer, NSXPCConnection, NSString;

@interface BiometricKitXPCExportedObject : NSObject <BiometricKitXpcProtocol> {

	NSMutableDictionary* _clients;
	BiometricKitXPCServer* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BiometricKitXPCServer * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)terminate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setServer:(BiometricKitXPCServer *)arg1 ;
-(BiometricKitXPCServer *)server;
-(id)clients;
-(void)connect:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)disconnect:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)registerDelegate:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)notifyAppIsBackground:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)notifyAppIsInactive:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)enroll:(int)arg1 user:(unsigned)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(/*^block*/id)arg5 ;
-(void)match:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)detectPresenceWithOptions:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)cancel:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)updateIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)removeIdentity:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)removeAllIdentitiesForUser:(unsigned)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getIdentityFromUUID:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)identities:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)registerDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)registerStoreToken:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getCountersignedStoreToken:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)diagnostics:(int)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getMaxIdentityCount:(int)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getFreeIdentityCount:(int)arg1 user:(unsigned)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)setUserDSID:(unsigned long long)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getIdentitiesDatabaseHashForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)dropUnlockToken:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)forceBioLockoutForUser:(unsigned)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)enrollContinue:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)resetAppleConnectCounter:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)pullAlignmentData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)pullMatchPolicyInfoData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getNodeTopologyForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getProtectedConfigurationForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getSystemProtectedConfiguration:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)setProtectedConfiguration:(id)arg1 user:(unsigned)arg2 options:(id)arg3 client:(unsigned long long)arg4 replyBlock:(/*^block*/id)arg5 ;
-(void)setSystemProtectedConfiguration:(id)arg1 options:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getProvisioningState:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getBioLockoutStateForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getSensorCalibrationStatus:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getCalibrationDataInfo:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getSensorInfo:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)setDebugImages:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)pullCalibrationData:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)pullCaptureBuffer:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getLogs:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)fileRadarWithLogs:(id)arg1 description:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)isFingerOn:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)enableBackgroundFdet:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)isAriadneSignpostsEnabled:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)isXARTAvailable:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getDeviceState:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)startNewMatchAttempt:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getBiometryAvailabilityForUser:(unsigned)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)completeEnrollment:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)suspendEnrollment:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)setTemplate:(id)arg1 forIdentity:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)getAugmentationEligibilityForIdentity:(id)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)fieldDiagnosticsControl:(unsigned)arg1 inData:(id)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)queryIdentityMigrationFailureForUser:(unsigned)arg1 clear:(BOOL)arg2 client:(unsigned long long)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)enableMatchAutoRetry:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)pauseFaceDetectTimer:(BOOL)arg1 client:(unsigned long long)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)getLastMatchEvent:(unsigned long long)arg1 replyBlock:(/*^block*/id)arg2 ;
-(id)client:(unsigned long long)arg1 ;
@end

