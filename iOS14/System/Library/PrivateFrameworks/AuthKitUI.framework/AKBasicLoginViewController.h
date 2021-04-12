/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AKBasicLoginPasswordFieldProtocol.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol AKBasicLoginControllerDelegate;
@class AKBasicLoginActions, AKAppleIDAuthenticationInAppContext, NSLayoutConstraint, UITableView, AKBasicLoginTableViewCell, UIView, AKBasicLoginOptionsViewController, NSString;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol> {

	AKBasicLoginActions* _loginActions;
	id<AKBasicLoginControllerDelegate> _delegate;
	AKAppleIDAuthenticationInAppContext* _context;
	NSLayoutConstraint* _heightAnchor;
	UITableView* _tableView;
	AKBasicLoginTableViewCell* _usernameCell;
	AKBasicLoginTableViewCell* _passwordCell;
	UIView* _loginOptions;
	AKBasicLoginOptionsViewController* _loginOptionsViewController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightAnchor;                                           //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) AKBasicLoginTableViewCell * usernameCell;                                    //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) AKBasicLoginTableViewCell * passwordCell;                                    //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIView * loginOptions;                                                       //@synthesize loginOptions=_loginOptions - In the implementation block
@property (nonatomic,retain) AKBasicLoginOptionsViewController * loginOptionsViewController;              //@synthesize loginOptionsViewController=_loginOptionsViewController - In the implementation block
@property (nonatomic,copy) AKBasicLoginActions * loginActions;                                            //@synthesize loginActions=_loginActions - In the implementation block
@property (assign,nonatomic,__weak) id<AKBasicLoginControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_title;
-(id)_passwordCell;
-(id)_usernameCell;
-(BOOL)isPresentedModally;
-(id<AKBasicLoginControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setDelegate:(id<AKBasicLoginControllerDelegate>)arg1 ;
-(void)setHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_setContentInset:(double)arg1 ;
-(id)_cancelBarButtonItem;
-(void)startAnimating;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSLayoutConstraint *)heightAnchor;
-(void)setTableView:(UITableView *)arg1 ;
-(id)_tableView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)stopAnimating;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)_cancelPressed:(id)arg1 ;
-(void)_updatePlaceholderIfNeeded;
-(id)_signInBarButtonItem;
-(id)_loginOptions;
-(BOOL)_shouldShowUserName;
-(AKBasicLoginActions *)loginActions;
-(void)_signInPressed:(id)arg1 ;
-(void)setLoginOptionsViewController:(AKBasicLoginOptionsViewController *)arg1 ;
-(AKBasicLoginOptionsViewController *)loginOptionsViewController;
-(AKBasicLoginTableViewCell *)usernameCell;
-(void)clearPasswordField;
-(void)setLoginActions:(AKBasicLoginActions *)arg1 ;
-(void)setUsernameCell:(AKBasicLoginTableViewCell *)arg1 ;
-(AKBasicLoginTableViewCell *)passwordCell;
-(void)setPasswordCell:(AKBasicLoginTableViewCell *)arg1 ;
-(UIView *)loginOptions;
-(void)setLoginOptions:(UIView *)arg1 ;
@end

