/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@protocol OS_dispatch_queue, EFCancelable, EMVIPManager, NSXPCProxyCreating;
@class NSObject, NSHashTable, EMMessageRepository, EMOutgoingMessageRepository, EMMailboxRepository, EMAccountRepository, EMFetchController, EMClientState, EMInteractionLogger, EMDonationController, EMActivityRegistry, EMBlockedSenderManager, EMSearchableIndex, NSString;

@interface EMDaemonInterface : NSObject <EFLoggable> {

	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _connections;
	long long _connectionState;
	id<EFCancelable> _daemonLaunchToken;
	BOOL _allowsBackgroundResume;
	os_unfair_lock_s _lock;
	EMMessageRepository* _messageRepository;
	EMOutgoingMessageRepository* _outgoingMessageRepository;
	EMMailboxRepository* _mailboxRepository;
	EMAccountRepository* _accountRepository;
	EMFetchController* _fetchController;
	EMClientState* _clientState;
	EMInteractionLogger* _interactionLogger;
	EMDonationController* _donationController;
	EMActivityRegistry* _activityRegistry;
	id<EMVIPManager> _vipManager;
	EMBlockedSenderManager* _blockedSenderManager;
	EMSearchableIndex* _searchableIndex;
	id<NSXPCProxyCreating> _proxyCreator;

}

@property (readonly) EMSearchableIndex * searchableIndex;                                  //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (readonly) id<NSXPCProxyCreating> proxyCreator;                                  //@synthesize proxyCreator=_proxyCreator - In the implementation block
@property (readonly) EMMessageRepository * messageRepository;                              //@synthesize messageRepository=_messageRepository - In the implementation block
@property (readonly) EMOutgoingMessageRepository * outgoingMessageRepository;              //@synthesize outgoingMessageRepository=_outgoingMessageRepository - In the implementation block
@property (readonly) EMMailboxRepository * mailboxRepository;                              //@synthesize mailboxRepository=_mailboxRepository - In the implementation block
@property (readonly) EMAccountRepository * accountRepository;                              //@synthesize accountRepository=_accountRepository - In the implementation block
@property (readonly) EMFetchController * fetchController;                                  //@synthesize fetchController=_fetchController - In the implementation block
@property (readonly) EMClientState * clientState;                                          //@synthesize clientState=_clientState - In the implementation block
@property (readonly) EMInteractionLogger * interactionLogger;                              //@synthesize interactionLogger=_interactionLogger - In the implementation block
@property (readonly) EMDonationController * donationController;                            //@synthesize donationController=_donationController - In the implementation block
@property (readonly) EMActivityRegistry * activityRegistry;                                //@synthesize activityRegistry=_activityRegistry - In the implementation block
@property (readonly) id<EMVIPManager> vipManager;                                          //@synthesize vipManager=_vipManager - In the implementation block
@property (readonly) EMBlockedSenderManager * blockedSenderManager;                        //@synthesize blockedSenderManager=_blockedSenderManager - In the implementation block
@property (assign) BOOL allowsBackgroundResume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteObjectInterface;
+(id)log;
+(id)_remoteConnection;
+(id)_mailUninstalledFile;
+(BOOL)cachedMailAppIsInstalled;
+(void)setCachedMailAppIsInstalled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(EMSearchableIndex *)searchableIndex;
-(EMClientState *)clientState;
-(id<EMVIPManager>)vipManager;
-(EMBlockedSenderManager *)blockedSenderManager;
-(id)initForTesting;
-(void)test_tearDown;
-(id)initWithProxyCreator:(id)arg1 ;
-(id<NSXPCProxyCreating>)proxyCreator;
-(void)resetProtocolConnections;
-(void)handleDaemonAvailability;
-(id)connectionForProtocol:(id)arg1 ;
-(void)setAllowsBackgroundResume:(BOOL)arg1 ;
-(id)_connectionForProtocol:(id)arg1 error:(id*)arg2 ;
-(void)launchDaemon;
-(BOOL)allowsBackgroundResume;
-(EMMessageRepository *)messageRepository;
-(EMOutgoingMessageRepository *)outgoingMessageRepository;
-(EMMailboxRepository *)mailboxRepository;
-(EMAccountRepository *)accountRepository;
-(EMFetchController *)fetchController;
-(EMInteractionLogger *)interactionLogger;
-(EMDonationController *)donationController;
-(EMActivityRegistry *)activityRegistry;
@end

