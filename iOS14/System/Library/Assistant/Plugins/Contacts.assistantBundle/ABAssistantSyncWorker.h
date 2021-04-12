/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@protocol ABAssistantSyncDelegate;
@class NSArray, NSString;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {

	BOOL _syncAvailable;
	id<ABAssistantSyncDelegate> _delegate;
	NSArray* _allContacts;
	NSArray* _contactsChanges;
	long long _syncIndex;
	long long _syncCount;

}

@property (__weak) id<ABAssistantSyncDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * allContacts;                             //@synthesize allContacts=_allContacts - In the implementation block
@property (retain) NSArray * contactsChanges;                         //@synthesize contactsChanges=_contactsChanges - In the implementation block
@property (assign) long long syncIndex;                               //@synthesize syncIndex=_syncIndex - In the implementation block
@property (assign) long long syncCount;                               //@synthesize syncCount=_syncCount - In the implementation block
@property (assign) BOOL syncAvailable;                                //@synthesize syncAvailable=_syncAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ABAssistantSyncDelegate>)delegate;
-(NSArray *)allContacts;
-(void)setAllContacts:(NSArray *)arg1 ;
-(void)setDelegate:(id<ABAssistantSyncDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(id)syncSnapshotForKey:(id)arg1 ;
-(id)syncVerificationKeyForKey:(id)arg1 ;
-(void)setSyncAvailable:(BOOL)arg1 ;
-(BOOL)validateKey:(id)arg1 ;
-(void)registerChangeHistoryClientIdentifier:(id)arg1 ;
-(id)getCurrentValidity;
-(void)unregisterChangeHistoryClientIdentifier:(id)arg1 ;
-(void)clearSyncCache;
-(void)setSyncIndex:(long long)arg1 ;
-(void)setSyncCount:(long long)arg1 ;
-(long long)syncCount;
-(long long)syncIndex;
-(void)setContactsChanges:(NSArray *)arg1 ;
-(NSArray *)contactsChanges;
-(BOOL)syncAvailable;
-(id)_saDomainObjectWithReadactMeCard:(id)arg1 ;
@end

