/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroup.h>

@class NSArray;

@interface CNCardLinkedCardsGroup : CNCardGroup {

	NSArray* _linkedContacts;

}

@property (nonatomic,retain) NSArray * linkedContacts;              //@synthesize linkedContacts=_linkedContacts - In the implementation block
-(id)title;
-(id)displayItems;
-(NSArray *)linkedContacts;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(id)editingItems;
@end

