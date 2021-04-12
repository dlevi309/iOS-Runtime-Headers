/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

