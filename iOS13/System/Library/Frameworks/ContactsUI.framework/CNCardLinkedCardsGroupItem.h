/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithContact:(id)arg1 ;
@end

