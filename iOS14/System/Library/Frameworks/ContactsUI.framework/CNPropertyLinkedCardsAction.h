/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>

@protocol CNContactContentViewControllerDelegate;
@class CNContactContentViewController, CNMutableContact;

@interface CNPropertyLinkedCardsAction : CNPropertyAction {

	id<CNContactContentViewControllerDelegate> _contactDelegate;
	CNContactContentViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (retain) CNContactContentViewController * contactController;                      //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                                        //@synthesize linkedContact=_linkedContact - In the implementation block
@property (__weak) id<CNContactContentViewControllerDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setPreferredForImage;
-(void)setPreferredForName;
-(CNContactContentViewController *)contactController;
-(void)setContactController:(CNContactContentViewController *)arg1 ;
-(CNMutableContact *)linkedContact;
-(void)setLinkedContact:(CNMutableContact *)arg1 ;
-(id<CNContactContentViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<CNContactContentViewControllerDelegate>)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(void)dealloc;
@end

