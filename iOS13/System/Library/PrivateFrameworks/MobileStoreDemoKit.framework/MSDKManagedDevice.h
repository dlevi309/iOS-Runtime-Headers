/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


@protocol MSDKManagedDeviceDelegate, OS_xpc_object, MSDKF200EventObserverProtocol;
@class NSObject;

@interface MSDKManagedDevice : NSObject {

	id<MSDKManagedDeviceDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _helperConnection;
	id<MSDKF200EventObserverProtocol> _F200EventObserver;

}

@property (retain) NSObject*<OS_xpc_object> connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> helperConnection;                            //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) id<MSDKF200EventObserverProtocol> F200EventObserver;                  //@synthesize F200EventObserver=_F200EventObserver - In the implementation block
@property (assign,nonatomic,__weak) id<MSDKManagedDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<MSDKManagedDeviceDelegate>)delegate;
-(void)setDelegate:(id<MSDKManagedDeviceDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)prepare;
-(BOOL)cancelOperation;
-(BOOL)setupConnection;
-(void)handleMessage:(id)arg1 ;
-(NSObject*<OS_xpc_object>)helperConnection;
-(void)setHelperConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)isDeviceClassSupported;
-(int)readDemoMode;
-(id)getCacheIdentifier;
-(void)setF200EventObserver:(id<MSDKF200EventObserverProtocol>)arg1 ;
-(id<MSDKF200EventObserverProtocol>)F200EventObserver;
-(id)errorWithXPCDictionary:(id)arg1 ;
-(BOOL)fetchF200EventsWithOptions:(id)arg1 replyQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)sendF200MessageWithCommand:(unsigned char)arg1 messageOptions:(id)arg2 payloadData:(id)arg3 replyQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)sendF200QueryCommandWithOptions:(id)arg1 payloadDictionary:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendF200ConfigCommandWithOptions:(id)arg1 payloadDictionary:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendF200ArmCommandWithOptions:(id)arg1 payloadDictionary:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendF200DisarmCommandWithOptions:(id)arg1 payloadDictionary:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)readNVRam:(id)arg1 ;
-(BOOL)setupHelperConnection;
-(BOOL)setupConnection:(id)arg1 withMachService:(id)arg2 ;
-(void)handleContentUpdateStatus:(const char*)arg1 event:(id)arg2 ;
-(void)handleF200EventMessage:(id)arg1 ;
-(BOOL)prepareWithWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)isEnrolled;
-(BOOL)isContentFrozen_xpc;
-(unsigned long long)typeOfDemoDevice;
-(long long)getDemoInstallState;
-(BOOL)isContentFrozen;
-(BOOL)lockDemoContent;
-(BOOL)unlockDemoContent;
-(BOOL)unenroll:(BOOL)arg1 ;
-(id)getDeviceOptions;
-(id)getStoreID;
-(BOOL)setStoreOpenAt:(long long)arg1 openMinute:(long long)arg2 closeHour:(long long)arg3 closeMinute:(long long)arg4 ;
-(BOOL)setIdleDelay:(long long)arg1 ;
-(BOOL)configureWiFi:(id)arg1 password:(id)arg2 ;
-(BOOL)checkInBlockingUI;
-(BOOL)storeDataBlob:(id)arg1 ;
-(id)retrieveDataBlob;
-(BOOL)deleteDataBlob;
-(id)getPersistentWiFiSsid;
-(id)fetchF200StatusInfo;
-(BOOL)acknowledgeAlarmSoundingRequest;
-(BOOL)registerF200EventObserver:(id)arg1 ;
-(BOOL)unregisterF200EventObserver;
-(BOOL)fetchF200EventsWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)sendF200EchoCommandWithOptions:(id)arg1 payloadString:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)sendF200QueryCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)sendF200ConfigCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)sendF200ArmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)sendF200DisarmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)sendF200GenericCommandWithOptions:(id)arg1 payloadData:(id)arg2 replyQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)needOwnershipWarning:(id*)arg1 ;
-(BOOL)clearOwnershipWarning;
-(id)saveStoreHour:(id)arg1 ;
-(id)saveScreenSaverIdleDelay:(id)arg1 ;
-(id)getScreenSaverConfig;
-(BOOL)saveScreenSaverConfig:(id)arg1 ;
@end

