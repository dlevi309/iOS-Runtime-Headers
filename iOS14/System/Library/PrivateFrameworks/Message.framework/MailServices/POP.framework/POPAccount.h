/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
*/

#import <Message/MailAccount.h>

@class MFActivityMonitor, MFPOP3Connection, NSConditionLock, NSArray, MFLock, NSString;

@interface POPAccount : MailAccount {

	MFActivityMonitor* _fetchMonitor;
	MFPOP3Connection* _connection;
	NSConditionLock* _sharedConnectionCondition;
	unsigned long long _connectionsInUse;
	NSArray* _currentUIDs;
	MFLock* _connectionActivityLock;
	float _connectionTimeout;
	BOOL _fetcherNeedsReset;
	BOOL _hasDoneBackgroundSynchronization;
	BOOL _shouldAttemptAPOP;
	NSString* _oldestMessageUID;
	NSString* _newestMessageUID;
	long long _numberOfKnownUIDs;

}
+(void)initialize;
+(id)accountTypeString;
+(id)accountTypeIdentifier;
+(void*)legacyKeychainProtocol;
+(id)saslProfileName;
+(unsigned)defaultPortNumber;
+(id)csAccountTypeString;
+(unsigned)defaultSecurePortNumber;
-(BOOL)requiresAuthentication;
-(BOOL)canCreateNewMailboxes;
-(BOOL)canMailboxBeRenamed:(id)arg1 ;
-(BOOL)supportsSyncingReadState;
-(BOOL)shouldFetchBodiesWhenMovingToTrash;
-(void)releaseAllConnections;
-(id)authenticatedConnection;
-(Class)connectionClass;
-(id)certUIService;
-(id)secureServiceName;
-(id)statisticsKind;
-(BOOL)canGoOffline;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)serviceName;
-(id)mailboxUidOfType:(int)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(id)_URLScheme;
-(Class)storeClass;
-(id)mailboxPathExtension;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)supportsPurge;
-(Class)storeClassForMailbox:(id)arg1 ;
-(void)_deleteHook;
-(void)checkInConnection:(id)arg1 currentUIDs:(id)arg2 ;
-(long long)fetchNumNewMessages:(unsigned long long)arg1 oldMessages:(unsigned long long)arg2 preservingUID:(id)arg3 withStore:(id)arg4 ;
-(long long)numberOfKnownUIDs;
-(void)setNumberOfKnownUIDs:(long long)arg1 ;
-(id)oldestKnownMessageUID;
-(void)setOldestKnownMessageUID:(id)arg1 ;
-(id)newestKnownMessageUID;
-(void)setNewestKnownMessageUID:(id)arg1 ;
-(int)messageDeletionPolicy;
-(unsigned)delayedMessageDeletionInterval;
-(BOOL)shouldAttemptAPOP;
-(void)setShouldAttemptAPOP:(BOOL)arg1 ;
-(void)closeCachedConnection;
-(void)closeCachedConnectionForcedOnly:(id)arg1 ;
-(id)_getCachedConnection;
-(id)_createNewConnection;
-(void)scheduleDisconnect;
-(void)closeConnection:(id)arg1 andSaveUIDs:(id)arg2 ;
-(void)setMessageDeletionPolicy:(int)arg1 ;
-(void)setDelayedMessageDeletionInterval:(unsigned)arg1 ;
-(unsigned long long)connectionsInUse;
@end

