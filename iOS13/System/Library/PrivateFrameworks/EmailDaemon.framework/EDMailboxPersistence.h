/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EDMailboxProviderDelegate.h>
#import <libobjc.A.dylib/EMMailboxTypeResolver.h>

@protocol EDMailboxProvider;
@class NSMutableDictionary, NSString;

@interface EDMailboxPersistence : NSObject <EDMailboxProviderDelegate, EMMailboxTypeResolver> {

	os_unfair_lock_s _changeObserversByIdentifierLock;
	NSMutableDictionary* _changeObserversByIdentifier;
	id<EDMailboxProvider> _mailboxProvider;

}

@property (nonatomic,retain) NSMutableDictionary * changeObserversByIdentifier;              //@synthesize changeObserversByIdentifier=_changeObserversByIdentifier - In the implementation block
@property (nonatomic,retain) id<EDMailboxProvider> mailboxProvider;                          //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)deleteMailbox:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 ;
-(id)initWithMailboxProvider:(id)arg1 ;
-(id<EDMailboxProvider>)mailboxProvider;
-(id)legacyMailboxForObjectID:(id)arg1 ;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(BOOL)createMailbox:(id)arg1 parentMailboxID:(id)arg2 ;
-(BOOL)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2 ;
-(void)serverCountsForMailboxScope:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)mailboxListInvalidated;
-(id)allMailboxes;
-(id)mailboxObjectIDsForMailboxType:(long long)arg1 ;
-(long long)mailboxTypeForMailboxObjectID:(id)arg1 ;
-(void)setMailboxProvider:(id<EDMailboxProvider>)arg1 ;
-(id)legacyMailboxForMailboxURL:(id)arg1 ;
-(NSMutableDictionary *)changeObserversByIdentifier;
-(void)setChangeObserversByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)allMailboxesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)userCreatedMailboxObjectIDs;
-(void)fetchMailboxLists;
-(void)addChangeObserver:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeChangeObserverWithIdentifier:(id)arg1 ;
@end

