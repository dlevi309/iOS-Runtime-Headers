/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <libobjc.A.dylib/AXUIMessageSenderDelegate.h>

@class BSProcessDeathWatcher, AXUIDisplayManager, AXAccessQueue, NSMutableArray, NSMutableDictionary, AXUIMessageSender, NSString;

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate> {

	BSProcessDeathWatcher* _springBoardReaper;
	BOOL _shouldAllowServicesToProcessMessages;
	AXUIDisplayManager* _displayManager;
	AXAccessQueue* _resumingConnectionsQueue;
	NSMutableArray* _pausedConnections;
	AXAccessQueue* _entitlementsCheckersAccessQueue;
	NSMutableDictionary* _entitlementsCheckers;
	AXUIMessageSender* _messageSender;
	NSMutableArray* _serviceContexts;
	AXAccessQueue* _servicesAccessQueue;
	unsigned long long _lastUsedServiceIdentifier;
	NSMutableDictionary* _transactions;

}

@property (nonatomic,retain) NSMutableArray * pausedConnections;                           //@synthesize pausedConnections=_pausedConnections - In the implementation block
@property (nonatomic,retain) AXAccessQueue * resumingConnectionsQueue;                     //@synthesize resumingConnectionsQueue=_resumingConnectionsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitlementsCheckers;                   //@synthesize entitlementsCheckers=_entitlementsCheckers - In the implementation block
@property (nonatomic,retain) AXAccessQueue * entitlementsCheckersAccessQueue;              //@synthesize entitlementsCheckersAccessQueue=_entitlementsCheckersAccessQueue - In the implementation block
@property (nonatomic,retain) AXUIMessageSender * messageSender;                            //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceContexts;                             //@synthesize serviceContexts=_serviceContexts - In the implementation block
@property (nonatomic,retain) AXAccessQueue * servicesAccessQueue;                          //@synthesize servicesAccessQueue=_servicesAccessQueue - In the implementation block
@property (assign,nonatomic) unsigned long long lastUsedServiceIdentifier;                 //@synthesize lastUsedServiceIdentifier=_lastUsedServiceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowServicesToProcessMessages;                    //@synthesize shouldAllowServicesToProcessMessages=_shouldAllowServicesToProcessMessages - In the implementation block
@property (nonatomic,retain) AXUIDisplayManager * displayManager;                          //@synthesize displayManager=_displayManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactions;                           //@synthesize transactions=_transactions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServiceManager;
+(void)_releaseSharedServiceManager;
-(void)setTransactions:(NSMutableDictionary *)arg1 ;
-(id)_serviceContextForService:(id)arg1 ;
-(void)beginTransactionWithIdentifier:(id)arg1 forService:(id)arg2 ;
-(id)_clientMessengerWithIdentifier:(id)arg1 ;
-(id)_uniqueIdentifierForService:(id)arg1 ;
-(id)init;
-(AXUIMessageSender *)messageSender;
-(AXAccessQueue *)entitlementsCheckersAccessQueue;
-(NSMutableDictionary *)transactions;
-(NSMutableArray *)pausedConnections;
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3 ;
-(void)setPausedConnections:(NSMutableArray *)arg1 ;
-(id)_sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 error:(id*)arg4 ;
-(BOOL)_start;
-(void)setMessageSender:(AXUIMessageSender *)arg1 ;
-(void)setLastUsedServiceIdentifier:(unsigned long long)arg1 ;
-(void)setServicesAccessQueue:(AXAccessQueue *)arg1 ;
-(void)_applicationDidFinishLaunching;
-(id)_serviceContextForClientWithIdentifier:(id)arg1 ;
-(void)setShouldAllowServicesToProcessMessages:(BOOL)arg1 ;
-(BOOL)_serviceWithClass:(Class)arg1 canProcessMessageWithIdentifier:(unsigned long long)arg2 fromClientWithConnection:(id)arg3 possibleRequiredEntitlements:(id*)arg4 ;
-(id)_servicesForUniqueIdentifiers:(id)arg1 ;
-(void)_registerForSystemAppDeath;
-(BOOL)_registerClientWithIdentifier:(id)arg1 connection:(id)arg2 serviceBundleName:(id)arg3 initiatingMessageIdentifier:(unsigned long long)arg4 error:(id*)arg5 ;
-(AXUIDisplayManager *)displayManager;
-(void)_sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 toClientWithMessenger:(id)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)setDisplayManager:(AXUIDisplayManager *)arg1 ;
-(void)endTransactionWithIdentifier:(id)arg1 forService:(id)arg2 ;
-(void)setServiceContexts:(NSMutableArray *)arg1 ;
-(void)_handleConnection:(id)arg1 ;
-(AXAccessQueue *)servicesAccessQueue;
-(void)setEntitlementsCheckers:(NSMutableDictionary *)arg1 ;
-(void)setResumingConnectionsQueue:(AXAccessQueue *)arg1 ;
-(unsigned long long)lastUsedServiceIdentifier;
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(AXAccessQueue *)resumingConnectionsQueue;
-(void)setEntitlementsCheckersAccessQueue:(AXAccessQueue *)arg1 ;
-(void)_unregisterAllClientsWithConnection:(id)arg1 ;
-(NSMutableArray *)serviceContexts;
-(NSMutableDictionary *)entitlementsCheckers;
-(void)dealloc;
-(BOOL)shouldAllowServicesToProcessMessages;
@end

