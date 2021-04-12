/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface CNContactOrbHeaderViewController : UIViewController {

	NSArray* _contacts;

}

@property (nonatomic,retain) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(NSArray *)contacts;
-(void)viewDidLoad;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(double)suggestedHeaderWidth;
@end

