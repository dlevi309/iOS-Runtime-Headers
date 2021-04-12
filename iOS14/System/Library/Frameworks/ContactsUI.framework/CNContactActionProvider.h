/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNContactAction, CNContact, CNContainer, CNContactStore;

@interface CNContactActionProvider : NSObject {

	CNContactAction* _shareWithFamilyAction;
	CNContactAction* _stopSharingWithFamilyAction;
	CNContactAction* _enableGuardianRestrictionsAction;
	CNContactAction* _disableGuardianRestrictionsAction;
	CNContact* _contact;
	CNContainer* _container;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContact * contact;                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContainer * container;                                          //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNContactAction * shareWithFamilyAction;                          //@synthesize shareWithFamilyAction=_shareWithFamilyAction - In the implementation block
@property (nonatomic,readonly) CNContactAction * stopSharingWithFamilyAction;                    //@synthesize stopSharingWithFamilyAction=_stopSharingWithFamilyAction - In the implementation block
@property (nonatomic,readonly) CNContactAction * enableGuardianRestrictionsAction;               //@synthesize enableGuardianRestrictionsAction=_enableGuardianRestrictionsAction - In the implementation block
@property (nonatomic,readonly) CNContactAction * disableGuardianRestrictionsAction;              //@synthesize disableGuardianRestrictionsAction=_disableGuardianRestrictionsAction - In the implementation block
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(CNContactAction *)stopSharingWithFamilyAction;
-(CNContactAction *)shareWithFamilyAction;
-(id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3 ;
-(CNContactAction *)enableGuardianRestrictionsAction;
-(CNContactAction *)disableGuardianRestrictionsAction;
-(CNContainer *)container;
@end

