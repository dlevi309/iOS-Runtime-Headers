/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNUICoreRecentsManager *)recentsManager;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(void)showDeleteFailureAlert;
-(BOOL)deleteContact;
-(id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3 ;
@end

