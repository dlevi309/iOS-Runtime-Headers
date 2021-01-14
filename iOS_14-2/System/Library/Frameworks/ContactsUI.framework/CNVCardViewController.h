/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id<CNVCardViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNVCardViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(id)initWithVCardData:(id)arg1 ;
-(CNContactNavigationController *)contactNavigationController;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3 ;
@end

