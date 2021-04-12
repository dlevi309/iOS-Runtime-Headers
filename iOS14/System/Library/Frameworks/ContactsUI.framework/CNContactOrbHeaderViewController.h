/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>

@class NSArray;

@interface CNContactOrbHeaderViewController : UIViewController {

	NSArray* _contacts;

}

@property (nonatomic,retain) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)initWithContacts:(id)arg1 ;
-(double)suggestedHeaderWidth;
-(void)viewDidLoad;
@end

