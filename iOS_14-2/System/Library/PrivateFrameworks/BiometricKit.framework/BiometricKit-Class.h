/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol OS_os_log, BiometricKitDelegate;
@class BiometricKitXPCClient, BiometricKitStatistics, NSDictionary, NSObject, NSString;

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	int _enrollingMode;
	int _matchingMode;
	BiometricKitStatistics* _statistics;
	NSDictionary* _images[300];
	SCD_Struct_Bi1* _compSet;
	BOOL _showDebugImages;
	SCD_Struct_Bi3 _enrollImageSet;
	BOOL _isInternalInstall;
	BOOL _ariadneSignposts;
	NSObject*<OS_os_log> _osLog;
	NSObject*<OS_os_log> _osLogTrace;
	BOOL _inUse;
	int _enrollProgressConfigRenderMode;
	id<BiometricKitDelegate> _delegate;

}

@property (assign,nonatomic) id<BiometricKitDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL inUse;                                                //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) int enrollProgressConfigRenderMode;              //@synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)manager;
+(long long)getSensorPatchVersion;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(id)pullDebugImage:(BOOL)arg1 rotated:(BOOL)arg2 ;
-(id)getIdentitiesDatabaseHash;
-(id)getIdentitiesDatabaseHashForUser:(unsigned)arg1 ;
-(BOOL)isDelegate;
-(int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(long long)getBioLockoutStateForUser:(unsigned)arg1 ;
-(int)resetAppleConnectCounter;
-(int)forceBioLockout;
-(id)init;
-(id<BiometricKitDelegate>)delegate;
-(id)identities:(id)arg1 ;
-(int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2 ;
-(int)detectPresenceWithOptions:(id)arg1 ;
-(int)match:(id)arg1 ;
-(id)imageDictFromRawImageData:(SCD_Struct_Bi5*)arg1 ;
-(id)getMatchPolicyInfo;
-(void)appWillResignActive:(id)arg1 ;
-(BOOL)isTouchIDAvailableWithInfo:(long long*)arg1 ;
-(void)_enrollResult:(id)arg1 ;
-(long long)getProvisioningState;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(void)enrollProgressMessage:(unsigned)arg1 ;
-(int)removeIdentity:(id)arg1 withOptions:(id)arg2 ;
-(void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 target:(SCD_Struct_Bi5*)arg3 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(id)getCalibrationDataInfo;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(int)updateIdentity:(id)arg1 ;
-(int)enroll:(int)arg1 withOptions:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(int)removeIdentity:(id)arg1 ;
-(void)_homeButtonPressed;
-(id)getTemplateInfo:(id)arg1 ;
-(BOOL)isTouchIDCapable;
-(id)pullCalibrationData;
-(int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 ;
-(void)setDelegate:(id<BiometricKitDelegate>)arg1 ;
-(void)_matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(long long)getBioLockoutState;
-(int)updateIdentity:(id)arg1 withOptions:(id)arg2 ;
-(id)getIdentitiesDatabaseUUIDForUser:(unsigned)arg1 ;
-(int)match:(id)arg1 withOptions:(id)arg2 ;
-(int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 ;
-(int)registerStoreToken:(id)arg1 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(id)getIdentitiesDatabaseUUID;
-(id)createMatchInfo:(id)arg1 withTopology:(const SCD_Struct_Bi9*)arg2 withMatchImage:(SCD_Struct_Bi5*)arg3 ;
-(int)forceBioLockoutForUser:(unsigned)arg1 ;
-(long long)getSensorCalibrationStatus;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(void)setEnrollProgressConfigRenderMode:(int)arg1 ;
-(int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(float)getModulationRatio;
-(void)_touchIDButtonPressed:(BOOL)arg1 ;
-(id)getSystemProtectedConfiguration;
-(void)_taskResumeStatus:(int)arg1 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 ;
-(int)removeAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 ;
-(void)setInUse:(BOOL)arg1 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2 ;
-(long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned)arg2 ;
-(void)_statusMessage:(unsigned)arg1 ;
-(int)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 ;
-(long long)getCalibrationDataState;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(id)getLogs:(BOOL)arg1 withDetails:(id*)arg2 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(int)enroll:(int)arg1 forUser:(unsigned)arg2 withOptions:(id)arg3 ;
-(id)getProtectedConfiguration;
-(long long)getCalBlobVersion;
-(BOOL)inUse;
-(id)pullCaptureBuffer;
-(int)dropUnlockToken;
-(void)cancel;
-(void)appDidBecomeActive:(id)arg1 ;
-(int)enableBackgroundFdet:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getSensorInfo;
-(int)detectFingerWithOptions:(id)arg1 ;
-(BOOL)isFingerOn;
-(void)_templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(void)logEventOrCode:(unsigned long long)arg1 ;
-(void)setDebugImages:(BOOL)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(id)getProtectedConfigurationForUser:(unsigned)arg1 ;
-(void)dealloc;
-(int)enrollProgressConfigRenderMode;
@end

