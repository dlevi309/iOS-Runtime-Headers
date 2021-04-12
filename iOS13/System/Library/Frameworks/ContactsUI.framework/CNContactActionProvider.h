/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CNContainer *)container;
-(CNContact *)contact;
-(CNContactStore *)contactStore;
-(CNContactAction *)stopSharingWithFamilyAction;
-(id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3 ;
-(CNContactAction *)shareWithFamilyAction;
-(CNContactAction *)enableGuardianRestrictionsAction;
-(CNContactAction *)disableGuardianRestrictionsAction;
@end

