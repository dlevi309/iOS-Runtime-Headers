/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contacts
*/

#import <Contacts/ABAssistantSyncHandler.h>
#import <libobjc.A.dylib/ABAssistantSyncDelegate.h>

@class CNContactStore, NSString;

@interface ABAssistantSyncPeople : ABAssistantSyncHandler <ABAssistantSyncDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
-(id)init;
-(id)newSADomainObjectFromCNContact:(id)arg1 ;
-(id)_currentSyncSnapshotProperty;
-(void)setCurrentSyncSnapshotAnchorString:(id)arg1 ;
-(id)copyChangeHistoryAfterSyncAnchor:(id)arg1 ;
-(id)expectedSyncKeyPrefix;
-(id)fullSyncSnapshotProperty;
-(BOOL)hasContactsForFullSync;
-(id)contactsForFullSync;
-(id)getLastClearedSyncAnchor;
-(BOOL)verifyChangeHistory;
-(void)clearChangeHistoryToSyncAnchor:(id)arg1 ;
-(id)newSADomainObjectFromCNContactWithIdentifier:(id)arg1 ;
-(id)newSADomainObjectFromDeletedContactIdentifier:(id)arg1 ;
-(void)resetCurrentSyncSnapshot;
-(id)currentSyncSnapshotAnchorString;
-(long long)currentSyncSnapshotCount;
@end

