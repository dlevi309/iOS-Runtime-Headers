/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

#import <libobjc.A.dylib/ABAssistantSyncHandler.h>
@class CNContactStore;


@protocol ABAssistantSyncHandler <AFSyncHandler,NSObject>
@property (nonatomic,retain) CNContactStore * contactStore; 
@required
-(CNContactStore *)contactStore;
-(void)setContactStore:(id)arg1;

@end


@class CNContactStore, ABAssistantSyncWorker, NSString;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler> {

	CNContactStore* _contactStore;
	ABAssistantSyncWorker* _syncWorker;
	NSString* _changeHistoryClientIdentifier;

}

@property (nonatomic,retain) ABAssistantSyncWorker * syncWorker;                    //@synthesize syncWorker=_syncWorker - In the implementation block
@property (nonatomic,retain) NSString * changeHistoryClientIdentifier;              //@synthesize changeHistoryClientIdentifier=_changeHistoryClientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CNContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSString *)changeHistoryClientIdentifier;
-(void)setChangeHistoryClientIdentifier:(NSString *)arg1 ;
-(void)setSyncWorker:(ABAssistantSyncWorker *)arg1 ;
-(ABAssistantSyncWorker *)syncWorker;
-(id)syncSnapshotForKey:(id)arg1 ;
-(id)syncVerificationKeyForKey:(id)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
@end

