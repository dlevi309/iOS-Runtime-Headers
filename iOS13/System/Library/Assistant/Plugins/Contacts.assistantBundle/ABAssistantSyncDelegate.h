/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

@class CNContactStore;


@protocol ABAssistantSyncDelegate <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@required
-(CNContactStore *)contactStore;
-(void)setChangeHistoryClientIdentifier:(id)arg1;
-(id)newSADomainObjectFromCNContact:(id)arg1;
-(void)setCurrentSyncSnapshotAnchorString:(id)arg1;
-(id)copyChangeHistoryAfterSyncAnchor:(id)arg1;
-(id)expectedSyncKeyPrefix;
-(id)fullSyncSnapshotProperty;
-(BOOL)hasContactsForFullSync;
-(id)contactsForFullSync;
-(id)getLastClearedSyncAnchor;
-(BOOL)verifyChangeHistory;
-(void)clearChangeHistoryToSyncAnchor:(id)arg1;
-(id)newSADomainObjectFromCNContactWithIdentifier:(id)arg1;
-(id)newSADomainObjectFromDeletedContactIdentifier:(id)arg1;
-(void)resetCurrentSyncSnapshot;
-(id)currentSyncSnapshotAnchorString;
-(long long)currentSyncSnapshotCount;

@end

