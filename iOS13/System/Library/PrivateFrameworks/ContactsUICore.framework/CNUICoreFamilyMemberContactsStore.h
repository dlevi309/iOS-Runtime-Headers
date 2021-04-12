/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsUpdating.h>

@protocol CNUICoreContactStoreFacade, CNSchedulerProvider;
@class FAFamilyMember;

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating> {

	id<CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
	FAFamilyMember* _familyMember;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore;              //@synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore - In the implementation block
@property (nonatomic,readonly) FAFamilyMember * familyMember;                                              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundOrImmediateScheduler; 
-(id)init;
-(id<CNSchedulerProvider>)schedulerProvider;
-(FAFamilyMember *)familyMember;
-(id<CNUICoreContactStoreFacade>)familyMemberScopedContactStore;
-(id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNScheduler>)backgroundOrImmediateScheduler;
-(id)updateContactWhitelistByAddingContacts:(id)arg1 ;
-(id)updateContactListByUpdatingContacts:(id)arg1 ;
-(id)updateContactWhitelistByRemovingContacts:(id)arg1 ;
-(id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)arg2 ;
-(id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1 ;
-(id)updateContactListByAddingContacts:(id)arg1 ;
-(id)updateContactListByRemovingContacts:(id)arg1 ;
@end

