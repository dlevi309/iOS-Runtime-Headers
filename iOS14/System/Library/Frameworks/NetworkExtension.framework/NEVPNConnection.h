/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NSDate, NEConfigurationManager, NSString, NSObject, NEVPNManager, NSError;

@interface NEVPNConnection : NSObject {

	BOOL _initialized;
	BOOL _installed;
	BOOL _installNotify;
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
@property (assign,nonatomic) BOOL installed;                                        //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL installNotify;                                    //@synthesize installNotify=_installNotify - In the implementation block
@property (readonly) NSError * lastDisconnectError;                                 //@synthesize lastDisconnectError=_lastDisconnectError - In the implementation block
@property (readonly) long long status;                                              //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * connectedDate;                                        //@synthesize connectedDate=_connectedDate - In the implementation block
@property (readonly) NEVPNManager * manager; 
+(id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned)arg2 ;
+(id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)arg1 ;
+(id)createConnectionForEnabledEnterpriseConfiguration;
-(NSString *)configurationName;
-(id)initWithType:(int)arg1 ;
-(void)setConfigurationName:(NSString *)arg1 ;
-(NSDate *)connectedDate;
-(int)sessionType;
-(void*)session;
-(BOOL)installed;
-(void)stopVPNTunnel;
-(BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(BOOL)initialized;
-(void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)destroySession;
-(void)setSession:(void*)arg1 ;
-(void)resetLastDisconnectError:(id)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(BOOL)installNotify;
-(id)initHeadlessWithName:(id)arg1 ;
-(void)createSessionWithConfigurationIdentifier:(id)arg1 forceInfoFetch:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateSessionInfoForce:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NEConfigurationManager *)configManager;
-(NEVPNManager *)weakmanager;
-(void)setWeakmanager:(NEVPNManager *)arg1 ;
-(BOOL)startVPNTunnelAndReturnError:(id*)arg1 ;
-(void)setInstallNotify:(BOOL)arg1 ;
-(NSError *)lastDisconnectError;
-(void)reload;
-(NEVPNManager *)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setInitialized:(BOOL)arg1 ;
-(long long)status;
-(void)dealloc;
@end

