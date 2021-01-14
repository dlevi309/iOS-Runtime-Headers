/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNUICoreContactScratchpad, NSArray;

@interface CNUICoreContactEditingSession : NSObject {

	CNUICoreContactScratchpad* _contactsAdded;
	CNUICoreContactScratchpad* _contactsUpdated;
	CNUICoreContactScratchpad* _contactsRemoved;

}

@property (nonatomic,retain) CNUICoreContactScratchpad * contactsAdded;                //@synthesize contactsAdded=_contactsAdded - In the implementation block
@property (nonatomic,retain) CNUICoreContactScratchpad * contactsUpdated;              //@synthesize contactsUpdated=_contactsUpdated - In the implementation block
@property (nonatomic,retain) CNUICoreContactScratchpad * contactsRemoved;              //@synthesize contactsRemoved=_contactsRemoved - In the implementation block
@property (nonatomic,readonly) NSArray * addedContacts; 
@property (nonatomic,readonly) NSArray * updatedContacts; 
@property (nonatomic,readonly) NSArray * removedContacts; 
@property (nonatomic,readonly) BOOL inProgress; 
+(BOOL)isEdiingStateOfContactValid:(long long)arg1 ;
-(void)addContacts:(id)arg1 ;
-(id)init;
-(id)updatedContactsMatchingContacts:(id)arg1 ;
-(NSArray *)updatedContacts;
-(BOOL)containsUpdatedContactMatchingContact:(id)arg1 ;
-(id)description;
-(BOOL)inProgress;
-(void)updateContacts:(id)arg1 ;
-(NSArray *)addedContacts;
-(NSArray *)removedContacts;
-(void)removeContacts:(id)arg1 ;
-(CNUICoreContactScratchpad *)contactsAdded;
-(CNUICoreContactScratchpad *)contactsUpdated;
-(CNUICoreContactScratchpad *)contactsRemoved;
-(long long)editingStateOfContact:(id)arg1 ;
-(void)setContactsAdded:(CNUICoreContactScratchpad *)arg1 ;
-(void)setContactsUpdated:(CNUICoreContactScratchpad *)arg1 ;
-(void)setContactsRemoved:(CNUICoreContactScratchpad *)arg1 ;
-(void)verifyConsistencyOfEditingSessionForContact:(id)arg1 ;
-(BOOL)isContactUnseen:(id)arg1 ;
-(BOOL)wasContactAdded:(id)arg1 ;
-(BOOL)wasContactUpdated:(id)arg1 ;
-(BOOL)wasContactRemoved:(id)arg1 ;
-(BOOL)containsAddedContactMatchingContact:(id)arg1 ;
-(BOOL)containsRemovedContactMatchingContact:(id)arg1 ;
-(id)addedContactsMatchingContacts:(id)arg1 ;
-(id)removedContactsMatchingContacts:(id)arg1 ;
-(id)generateSaveRequest;
-(id)applyChangesToContacts:(id)arg1 ;
@end

