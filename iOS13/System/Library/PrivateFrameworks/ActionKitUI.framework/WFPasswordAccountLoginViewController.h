/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/WFAccountLoginViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSDictionary, UITextField, UIBarButtonItem, NSURL, NSString;

@interface WFPasswordAccountLoginViewController : WFAccountLoginViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSDictionary* _textFieldsByIndexPath;
	UITextField* _usernameField;
	UITextField* _passwordField;
	UIBarButtonItem* _loginItem;
	UIBarButtonItem* _loadingItem;

}

@property (nonatomic,__weak,readonly) UITextField * usernameField;              //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,__weak,readonly) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loginItem;                       //@synthesize loginItem=_loginItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loadingItem;                     //@synthesize loadingItem=_loadingItem - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSURL * loginURL; 
@property (nonatomic,copy) NSDictionary * textFieldsByIndexPath;                //@synthesize textFieldsByIndexPath=_textFieldsByIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
-(void)textFieldDidChange:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(NSURL *)loginURL;
-(UIBarButtonItem *)loginItem;
-(id)initWithAccountClass:(Class)arg1 ;
-(BOOL)usernameIsEmail;
-(void)loginWithUsername:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UITextField *)usernameField;
-(void)setLoginItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)loadingItem;
-(void)setLoadingItem:(UIBarButtonItem *)arg1 ;
-(void)configureTextField:(id)arg1 forKey:(id)arg2 ;
-(BOOL)canAttemptLogin;
-(void)setTextFieldsByIndexPath:(NSDictionary *)arg1 ;
-(void)loginPressed:(id)arg1 ;
-(NSDictionary *)textFieldsByIndexPath;
@end

