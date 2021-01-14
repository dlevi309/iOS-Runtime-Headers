/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNChangeHistoryEventFactory : NSObject
-(id)deleteGroupEventWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
-(id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
-(id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)updateGroupEventWithGroup:(id)arg1 ;
-(id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)differentMeCardEventWithContactIdentifier:(id)arg1 ;
-(id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)updateContactEventWithContact:(id)arg1 ;
-(id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg1 ;
-(id)unlinkContactEventWithContact:(id)arg1 ;
-(id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)dropEverythingEvent;
-(id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg1 ;
@end

