/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NSDate, NEConfigurationManager, NSString, NSObject, NEVPNManager, NSError;

@interface NEVPNConnection : NSObject {

	BOOL _initialized;
	int _sessionType;
	long long _status;
	NSDate* _connectedDate;
	NEConfigurationManager* _configManager;
	NSString* _configurationName;
	NSObject*<OS_dispatch_queue> _queue;
	void* _session;
	NEVPNManager* _weakmanager;
	NSError* _lastDisconnectError;

}

@property (nonatomic,readonly) NEConfigurationManager * configManager;              //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,retain) NSString * configurationName;                          //@synthesize configurationName=_configurationName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign) void* session;                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) int sessionType;                                     //@synthesize sessionType=_sessionType - In the implementation block
@property (__weak) NEVPNManager * weakmanager;                                      //@synthesize weakmanager=_weakmanager - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                      //@synthesize initialized=_initialized - In the implementation block
@property (readonly) NSError * lastDisconnectError;                                 //@synthesize lastDisconnectError=_lastDisconnectError - In the implementation block
@property (readonly) long long status;                                              //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * connectedDate;                                        //@synthesize connectedDate=_connectedDate - In the implementation block
@property (readonly) NEVPNManager * manager; 
+(id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned)arg2 ;
+(id)createConnectionForEnabledEnterpriseConfiguration;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)initialized;
-(long long)status;
-(NEVPNManager *)manager;
-(id)initWithType:(int)arg1 ;
-(void*)session;
-(void)setSession:(void*)arg1 ;
-(void)reload;
-(NSString *)configurationName;
-(int)sessionType;
-(void)setInitialized:(BOOL)arg1 ;
-(void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConfigurationName:(NSString *)arg1 ;
-(BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(void)stopVPNTunnel;
-(void)destroySession;
-(void)resetLastDisconnectError:(id)arg1 ;
-(NSDate *)connectedDate;
-(void)createSessionWithConfigurationIdentifier:(id)arg1 forceInfoFetch:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSessionInfoForce:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initHeadless;
-(NEConfigurationManager *)configManager;
-(BOOL)startVPNTunnelAndReturnError:(id*)arg1 ;
-(NEVPNManager *)weakmanager;
-(void)setWeakmanager:(NEVPNManager *)arg1 ;
-(NSError *)lastDisconnectError;
@end

