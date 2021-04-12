/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/IKEngineDelegate.h>

@protocol WFInstapaperLoginViewControllerDelegate;
@class IKEngine, UITextField, UIBarButtonItem, NSString;

@interface WFInstapaperLoginViewController : UITableViewController <UITextFieldDelegate, IKEngineDelegate> {

	id<WFInstapaperLoginViewControllerDelegate> _delegate;
	IKEngine* _engine;
	UITextField* _usernameField;
	UITextField* _passwordField;
	UIBarButtonItem* _loginItem;
	UIBarButtonItem* _loadingItem;

}

@property (nonatomic,retain) IKEngine * engine;                                                        //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic,__weak) UITextField * usernameField;                                       //@synthesize usernameField=_usernameField - In the implementation block
@property (assign,nonatomic,__weak) UITextField * passwordField;                                       //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loginItem;                                              //@synthesize loginItem=_loginItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loadingItem;                                            //@synthesize loadingItem=_loadingItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFInstapaperLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFInstapaperLoginViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFInstapaperLoginViewControllerDelegate>)arg1 ;
-(void)cancel;
-(IKEngine *)engine;
-(void)setEngine:(IKEngine *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setPasswordField:(UITextField *)arg1 ;
-(void)login;
-(void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3 ;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveAuthToken:(id)arg3 andTokenSecret:(id)arg4 ;
-(UIBarButtonItem *)loginItem;
-(void)updateLoginButton;
-(UITextField *)usernameField;
-(void)setUsernameField:(UITextField *)arg1 ;
-(void)setLoginItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)loadingItem;
-(void)setLoadingItem:(UIBarButtonItem *)arg1 ;
@end

