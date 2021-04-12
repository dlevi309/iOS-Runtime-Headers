/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNContainer, CNContactStore;

@interface CNContactDisableGuardianRestrictionsAction : CNContactAction {

	CNContainer* _container;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(BOOL)isDestructive;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3 ;
-(CNContainer *)container;
-(id)title;
@end

