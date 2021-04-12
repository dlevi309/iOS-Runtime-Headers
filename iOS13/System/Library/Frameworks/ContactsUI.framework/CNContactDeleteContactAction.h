/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNUIExternalComponentsFactory, CNUICoreRecentsManager;

@interface CNContactDeleteContactAction : CNContactAction {

	CNUIExternalComponentsFactory* _componentsFactory;
	CNUICoreRecentsManager* _recentsManager;

}

@property (nonatomic,readonly) CNUIExternalComponentsFactory * componentsFactory;              //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * recentsManager;                        //@synthesize recentsManager=_recentsManager - In the implementation block
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3 ;
-(BOOL)deleteContact;
-(void)showDeleteFailureAlert;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(CNUICoreRecentsManager *)recentsManager;
@end

