/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UMUserSwitchManagement.h>
#import <libobjc.A.dylib/UMUserSwitchManagement_Private.h>

@class NSString, NSDictionary, NSData, NSMutableArray, NSXPCConnection, NSXPCListener;

@interface UMXPCServer : NSObject <NSXPCListenerDelegate, UMUserSwitchManagement, UMUserSwitchManagement_Private> {

	BOOL _currentlyBroadcastingWillSwitchToUser;
	BOOL _didRegisterStakeholder;
	BOOL _didBroadcastWillSwitchToUser;
	BOOL _didSendTasks;
	BOOL _didBroadcastUploadContent;
	BOOL _didRegisterPersonaCalbackStakeholder;
	unsigned _interruptionRetryCount;
	id _stakeholder;
	unsigned long long _stakeholderType;
	NSString* _machServiceName;
	unsigned long long _unregistrationStatus;
	NSString* _unregistrationReason;
	NSDictionary* _personaSpec;
	NSData* _passcodeData;
	NSData* _contextData;
	NSDictionary* _preferencesDict;
	NSDictionary* _personaProfileDict;
	NSDictionary* _provisionDict;
	/*^block*/id _provisionCompletionHandler;
	/*^block*/id _registrationCompletionHandler;
	/*^block*/id _switchCompletionHandler;
	/*^block*/id _suspendQuotasCompletionHandler;
	/*^block*/id _directSwitchCompletionHandler;
	/*^block*/id _logoutToLoginSessionCompletionHandler;
	/*^block*/id _loginUICheckinSessionCompletionHandler;
	/*^block*/id _uploadContentCompletionHandler;
	/*^block*/id _willSwitchCompletionHandler;
	NSMutableArray* _switchBlockingTasks;
	NSMutableArray* _syncTasks;
	/*^block*/id _bubblePopHandler;
	unsigned long long _willSwitchToUserAddedTaskCount;
	NSXPCConnection* _xpcConnection;
	NSXPCListener* _xpcListener;
	id _personaStakeholder;
	/*^block*/id _personaRegistrationCompletionHandler;
	id _personaUpdateCallbackStakeholder;

}

@property (assign,nonatomic,__weak) id stakeholder;                                          //@synthesize stakeholder=_stakeholder - In the implementation block
@property (assign,nonatomic) unsigned long long stakeholderType;                             //@synthesize stakeholderType=_stakeholderType - In the implementation block
@property (nonatomic,retain) NSString * machServiceName;                                     //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) unsigned long long unregistrationStatus;                        //@synthesize unregistrationStatus=_unregistrationStatus - In the implementation block
@property (nonatomic,retain) NSString * unregistrationReason;                                //@synthesize unregistrationReason=_unregistrationReason - In the implementation block
@property (nonatomic,retain) NSDictionary * personaSpec;                                     //@synthesize personaSpec=_personaSpec - In the implementation block
@property (nonatomic,retain) NSData * passcodeData;                                          //@synthesize passcodeData=_passcodeData - In the implementation block
@property (nonatomic,retain) NSData * contextData;                                           //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,retain) NSDictionary * preferencesDict;                                 //@synthesize preferencesDict=_preferencesDict - In the implementation block
@property (nonatomic,retain) NSDictionary * personaProfileDict;                              //@synthesize personaProfileDict=_personaProfileDict - In the implementation block
@property (nonatomic,retain) NSDictionary * provisionDict;                                   //@synthesize provisionDict=_provisionDict - In the implementation block
@property (nonatomic,copy) id provisionCompletionHandler;                                    //@synthesize provisionCompletionHandler=_provisionCompletionHandler - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                                 //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (nonatomic,copy) id switchCompletionHandler;                                       //@synthesize switchCompletionHandler=_switchCompletionHandler - In the implementation block
@property (nonatomic,copy) id suspendQuotasCompletionHandler;                                //@synthesize suspendQuotasCompletionHandler=_suspendQuotasCompletionHandler - In the implementation block
@property (nonatomic,copy) id directSwitchCompletionHandler;                                 //@synthesize directSwitchCompletionHandler=_directSwitchCompletionHandler - In the implementation block
@property (nonatomic,copy) id logoutToLoginSessionCompletionHandler;                         //@synthesize logoutToLoginSessionCompletionHandler=_logoutToLoginSessionCompletionHandler - In the implementation block
@property (nonatomic,copy) id loginUICheckinSessionCompletionHandler;                        //@synthesize loginUICheckinSessionCompletionHandler=_loginUICheckinSessionCompletionHandler - In the implementation block
@property (nonatomic,copy) id uploadContentCompletionHandler;                                //@synthesize uploadContentCompletionHandler=_uploadContentCompletionHandler - In the implementation block
@property (nonatomic,copy) id willSwitchCompletionHandler;                                   //@synthesize willSwitchCompletionHandler=_willSwitchCompletionHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * switchBlockingTasks;                           //@synthesize switchBlockingTasks=_switchBlockingTasks - In the implementation block
@property (nonatomic,retain) NSMutableArray * syncTasks;                                     //@synthesize syncTasks=_syncTasks - In the implementation block
@property (nonatomic,copy) id bubblePopHandler;                                              //@synthesize bubblePopHandler=_bubblePopHandler - In the implementation block
@property (assign,nonatomic) BOOL currentlyBroadcastingWillSwitchToUser;                     //@synthesize currentlyBroadcastingWillSwitchToUser=_currentlyBroadcastingWillSwitchToUser - In the implementation block
@property (assign,nonatomic) unsigned long long willSwitchToUserAddedTaskCount;              //@synthesize willSwitchToUserAddedTaskCount=_willSwitchToUserAddedTaskCount - In the implementation block
@property (assign,nonatomic) BOOL didRegisterStakeholder;                                    //@synthesize didRegisterStakeholder=_didRegisterStakeholder - In the implementation block
@property (assign,nonatomic) BOOL didBroadcastWillSwitchToUser;                              //@synthesize didBroadcastWillSwitchToUser=_didBroadcastWillSwitchToUser - In the implementation block
@property (assign,nonatomic) BOOL didSendTasks;                                              //@synthesize didSendTasks=_didSendTasks - In the implementation block
@property (assign,nonatomic) BOOL didBroadcastUploadContent;                                 //@synthesize didBroadcastUploadContent=_didBroadcastUploadContent - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                    //@synthesize xpcListener=_xpcListener - In the implementation block
@property (assign,nonatomic) unsigned interruptionRetryCount;                                //@synthesize interruptionRetryCount=_interruptionRetryCount - In the implementation block
@property (assign,nonatomic,__weak) id personaStakeholder;                                   //@synthesize personaStakeholder=_personaStakeholder - In the implementation block
@property (nonatomic,copy) id personaRegistrationCompletionHandler;                          //@synthesize personaRegistrationCompletionHandler=_personaRegistrationCompletionHandler - In the implementation block
@property (assign,nonatomic,__weak) id personaUpdateCallbackStakeholder;                     //@synthesize personaUpdateCallbackStakeholder=_personaUpdateCallbackStakeholder - In the implementation block
@property (assign,nonatomic) BOOL didRegisterPersonaCalbackStakeholder;                      //@synthesize didRegisterPersonaCalbackStakeholder=_didRegisterPersonaCalbackStakeholder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(void)addTask:(id)arg1 ;
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1 ;
-(id)provisionCompletionHandler;
-(void)userSwitchTaskListDidUpdate;
-(void)personaListDidUpdateCompletionHandler:(/*^block*/id)arg1 ;
-(void)deviceLoginSessionStateDidUpdate;
-(unsigned long long)unregistrationStatus;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)personaProfileDict;
-(NSDictionary *)preferencesDict;
-(void)fetchBundleIdentifierForPersona:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)contextData;
-(void)setDidBroadcastUploadContent:(BOOL)arg1 ;
-(void)resumeQuotas;
-(void)_registerStakeholder:(id)arg1 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)bubbleDidPop;
-(void)setStakeholder:(id)arg1 ;
-(void)disableUserPersona:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPersona:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)registrationCompletionHandler;
-(void)setSyncTasks:(NSMutableArray *)arg1 ;
-(id)stakeholder;
-(id)willSwitchCompletionHandler;
-(BOOL)didBroadcastUploadContent;
-(void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)loginUICheckinSessionCompletionHandler;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setLoginUICheckinSessionCompletionHandler:(id)arg1 ;
-(void)_resendXPCMessages;
-(id)switchCompletionHandler;
-(void)setWillSwitchToUserAddedTaskCount:(unsigned long long)arg1 ;
-(NSDictionary *)personaSpec;
-(BOOL)currentlyBroadcastingWillSwitchToUser;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSwitchCompletionHandler:(id)arg1 ;
-(void)setUnregistrationStatus:(unsigned long long)arg1 ;
-(BOOL)didBroadcastWillSwitchToUser;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(void)setDirectSwitchCompletionHandler:(id)arg1 ;
-(void)setLogoutToLoginSessionCompletionHandler:(id)arg1 ;
-(id)personaUpdateCallbackStakeholder;
-(NSMutableArray *)switchBlockingTasks;
-(void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 backingObject:(id)arg2 ;
-(id)suspendQuotasCompletionHandler;
-(NSString *)machServiceName;
-(void)setPasscodeData:(NSData *)arg1 ;
-(void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(/*^block*/id)arg1 ;
-(void)setBubblePopHandler:(id)arg1 ;
-(void)setDidRegisterPersonaCalbackStakeholder:(BOOL)arg1 ;
-(id)_syncServer;
-(void)fetchListOfAllUsersPersonasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)syncTasks;
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logoutToLoginSessionCompletionHandler;
-(void)setUnregistrationReason:(NSString *)arg1 ;
-(void)setSwitchBlockingTasks:(NSMutableArray *)arg1 ;
-(NSData *)passcodeData;
-(BOOL)didSendTasks;
-(id)personaRegistrationCompletionHandler;
-(id)uploadContentCompletionHandler;
-(void)launchPersonaCallback;
-(void)registerUserSwitchStakeHolder:(id)arg1 ;
-(void)_abortIfWeDoNotHaveASyncStakeholder;
-(void)setPreferencesDict:(NSDictionary *)arg1 ;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_createUMServerSyncConnection;
-(void)fetchListOfPersonasWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_broadcastReadyToSwitchToLoginSession:(id)arg1 ;
-(void)personaUpdateCallbackForMachServiceCompletionHandler:(/*^block*/id)arg1 ;
-(id)registerPersonaUpdateCallbackWithMachService:(id)arg1 ;
-(NSDictionary *)provisionDict;
-(void)setCurrentlyBroadcastingWillSwitchToUser:(BOOL)arg1 ;
-(void)setContextData:(NSData *)arg1 ;
-(void)_broadcastpersonaListDidUpdate;
-(void)fetchPersonaSynchronous:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2 ;
-(void)setWillSwitchCompletionHandler:(id)arg1 ;
-(void)setProvisionCompletionHandler:(id)arg1 ;
-(id)personaStakeholder;
-(int)personaSynchronousLoginWithODuuid:(id)arg1 withUid:(unsigned)arg2 ;
-(int)personaSynchronousLogoutWithODuuid:(id)arg1 withUid:(unsigned)arg2 ;
-(void)setDidBroadcastWillSwitchToUser:(BOOL)arg1 ;
-(void)setPersonaSpec:(NSDictionary *)arg1 ;
-(void)setSuspendQuotasCompletionHandler:(id)arg1 ;
-(void)_tearDownConnectionToUMServer;
-(void)_broadcastWillSwitchToUser:(id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setInterruptionRetryCount:(unsigned)arg1 ;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)setPersonaStakeholder:(id)arg1 ;
-(BOOL)didRegisterStakeholder;
-(void)setPersonaUpdateCallbackStakeholder:(id)arg1 ;
-(void)deleteUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_broadcastReadyToSwitchToUser:(id)arg1 ;
-(void)setBundlesIdentifiers:(id)arg1 forUniquePersona:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_server;
-(id)_registerPersonaListObserver:(id)arg1 withMachService:(id)arg2 ;
-(void)userInteractionIsEnabled;
-(void)removeTask:(id)arg1 ;
-(void)fetchAsidMapwithCompletionHandler:(/*^block*/id)arg1 ;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1 ;
-(unsigned)interruptionRetryCount;
-(void)setStakeholderType:(unsigned long long)arg1 ;
-(void)_abortIfWeDoNotHaveAStakeholder;
-(void)setProvisionDict:(NSDictionary *)arg1 ;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDidSendTasks:(BOOL)arg1 ;
-(void)fetchListOfPersonasSynchronousWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDidRegisterStakeholder:(BOOL)arg1 ;
-(void)resumeSync;
-(void)_sendXPCMessageToServerOfType:(unsigned long long)arg1 ;
-(void)_setUpXPCConnectionToUMServerIfNeeded;
-(NSString *)unregistrationReason;
-(void)setPersonaProfileDict:(NSDictionary *)arg1 ;
-(id)directSwitchCompletionHandler;
-(BOOL)didRegisterPersonaCalbackStakeholder;
-(unsigned long long)stakeholderType;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_pid;
-(void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bubblePopHandler;
-(void)setPersonaRegistrationCompletionHandler:(id)arg1 ;
-(void)setUploadContentCompletionHandler:(id)arg1 ;
-(unsigned long long)willSwitchToUserAddedTaskCount;
-(void)setupUMUserSessionProvisioning:(id)arg1 WithCompletionHandler:(/*^block*/id)arg2 ;
@end

