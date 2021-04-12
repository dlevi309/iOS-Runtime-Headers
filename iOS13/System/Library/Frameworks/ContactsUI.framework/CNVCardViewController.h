/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>

@protocol CNVCardViewControllerDelegate;
@class NSArray, CNContactNavigationController, NSString;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate> {

	id<CNVCardViewControllerDelegate> _delegate;
	NSArray* _contacts;

}

@property (nonatomic,retain) NSArray * contacts;                                                         //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic,__weak) id<CNVCardViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContactNavigationController * contactNavigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNVCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNVCardViewControllerDelegate>)arg1 ;
-(NSArray *)contacts;
-(void)viewDidLoad;
-(void)setContacts:(NSArray *)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3 ;
-(id)initWithVCardData:(id)arg1 ;
-(CNContactNavigationController *)contactNavigationController;
@end

