/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class CNContactRecentsReference, CNUICoreRecentsManager;

@interface CNContactClearRecentsDataAction : CNContactAction {

	CNContactRecentsReference* _recentsData;
	CNUICoreRecentsManager* _coreRecentsManager;

}

@property (nonatomic,readonly) CNContactRecentsReference * recentsData;                  //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) CNUICoreRecentsManager * coreRecentsManager;              //@synthesize coreRecentsManager=_coreRecentsManager - In the implementation block
-(id)title;
-(BOOL)isDestructive;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2 ;
-(CNContactRecentsReference *)recentsData;
-(CNUICoreRecentsManager *)coreRecentsManager;
@end

