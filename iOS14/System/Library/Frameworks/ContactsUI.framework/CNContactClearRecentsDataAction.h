/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isDestructive;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(CNContactRecentsReference *)recentsData;
-(CNUICoreRecentsManager *)coreRecentsManager;
-(id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2 ;
-(id)title;
@end

