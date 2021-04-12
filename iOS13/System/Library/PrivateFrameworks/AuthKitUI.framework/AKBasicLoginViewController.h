/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKBasicLoginPasswordFieldProtocol.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol AKBasicLoginControllerDelegate;
@class AKBasicLoginActions, AKAppleIDAuthenticationInAppContext, NSLayoutConstraint, UITableView, UITableViewCell, UIView, AKBasicLoginOptionsViewController, NSString;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol> {

	AKBasicLoginActions* _loginActions;
	id<AKBasicLoginControllerDelegate> _delegate;
	AKAppleIDAuthenticationInAppContext* _context;
	NSLayoutConstraint* _heightAnchor;
	UITableView* _tableView;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UIView* _loginOptions;
	AKBasicLoginOptionsViewController* _loginOptionsViewController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                           //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UITableViewCell * usernameCell;                                              //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * passwordCell;                                              //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIView * loginOptions;                                                       //@synthesize loginOptions=_loginOptions - In the implementation block
@property (nonatomic,retain) AKBasicLoginOptionsViewController * loginOptionsViewController;              //@synthesize loginOptionsViewController=_loginOptionsViewController - In the implementation block
@property (nonatomic,copy) AKBasicLoginActions * loginActions;                                            //@synthesize loginActions=_loginActions - In the implementation block
@property (assign,nonatomic,__weak) id<AKBasicLoginControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKBasicLoginControllerDelegate>)delegate;
-(void)setDelegate:(id<AKBasicLoginControllerDelegate>)arg1 ;
-(NSLayoutConstraint *)heightAnchor;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)_title;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_cancelBarButtonItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)_setContentInset:(double)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)isPresentedModally;
-(void)_updatePlaceholderIfNeeded;
-(id)_interpolatedReasonString;
-(id)_signInBarButtonItem;
-(id)_loginOptions;
-(BOOL)_shouldShowUserName;
-(AKBasicLoginActions *)loginActions;
-(id)_usernameCell;
-(id)_passwordCell;
-(void)_signInPressed:(id)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setLoginOptionsViewController:(AKBasicLoginOptionsViewController *)arg1 ;
-(AKBasicLoginOptionsViewController *)loginOptionsViewController;
-(UITableViewCell *)usernameCell;
-(void)_cancelPressed:(id)arg1 ;
-(void)clearPasswordField;
-(void)setLoginActions:(AKBasicLoginActions *)arg1 ;
-(void)setUsernameCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)passwordCell;
-(void)setPasswordCell:(UITableViewCell *)arg1 ;
-(UIView *)loginOptions;
-(void)setLoginOptions:(UIView *)arg1 ;
@end

