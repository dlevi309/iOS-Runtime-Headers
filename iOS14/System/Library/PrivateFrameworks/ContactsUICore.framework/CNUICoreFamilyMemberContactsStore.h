/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsUpdating.h>

@protocol CNUICoreContactStoreFacade, CNUICoreContactsSyncTrigger, CNSchedulerProvider;
@class FAFamilyMember;

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating> {

	id<CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
	FAFamilyMember* _familyMember;
	id<CNUICoreContactsSyncTrigger> _contactsSyncTrigger;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore;              //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) id<CNUICoreContactsSyncTrigger> contactsSyncTrigger;                        //@synthesize contactsSyncTrigger=_contactsSyncTrigger - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundOrImmediateScheduler; 
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)init;
-(FAFamilyMember *)familyMember;
-(id<CNUICoreContactStoreFacade>)familyMemberScopedContactStore;
-(id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNScheduler>)backgroundOrImmediateScheduler;
-(id)updateContactWhitelistByAddingContacts:(id)arg1 ;
-(id)updateContactListByUpdatingContacts:(id)arg1 ;
-(id)updateContactWhitelistByRemovingContacts:(id)arg1 ;
-(id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 contactsSyncTrigger:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)triggerContactsSyncRequest;
-(id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)arg2 ;
-(id<CNUICoreContactsSyncTrigger>)contactsSyncTrigger;
-(id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1 ;
-(id)updateContactListByAddingContacts:(id)arg1 ;
-(id)updateContactListByRemovingContacts:(id)arg1 ;
@end

