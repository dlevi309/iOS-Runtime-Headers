/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UITableViewController.h>

@protocol SLFacebookLoginInfoViewControllerDelegate;
@class SLFacebookLoginInfoFooter;

@interface SLFacebookLoginInfoViewController : UITableViewController {

	SLFacebookLoginInfoFooter* _footerView;
	id<SLFacebookLoginInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookLoginInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SLFacebookLoginInfoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookLoginInfoViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancelTapped:(id)arg1 ;
-(void)_signInTapped:(id)arg1 ;
@end

