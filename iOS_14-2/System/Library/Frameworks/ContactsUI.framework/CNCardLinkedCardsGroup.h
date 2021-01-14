/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNCardGroup.h>

@class NSArray;

@interface CNCardLinkedCardsGroup : CNCardGroup {

	NSArray* _linkedContacts;

}

@property (nonatomic,retain) NSArray * linkedContacts;              //@synthesize linkedContacts=_linkedContacts - In the implementation block
-(id)editingItems;
-(NSArray *)linkedContacts;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(id)displayItems;
-(id)title;
@end

