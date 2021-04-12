/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/ACMSignInWidgetProtocol.h>

@protocol ACMSignInWidgetDelegate;
@class UIView, UITextField, NSString, UIColor, NSDictionary, UITableView, UITableViewCell, UILabel;

@interface ACMSignInWidget : NSObject <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, ACMSignInWidgetProtocol> {

	id<ACMSignInWidgetDelegate> _delegate;
	UITableView* _table;
	UITableViewCell* _accountEditCell;
	UITableViewCell* _passwordEditCell;
	UITextField* _accountField;
	UITextField* _passwordField;
	UILabel* _accountLabel;
	BOOL _shouldAuthenticateOnUserInput;
	UIColor* _backgroundColor;
	NSDictionary* _placeholderAttributes;

}

@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput;                       //@synthesize shouldAuthenticateOnUserInput=_shouldAuthenticateOnUserInput - In the implementation block
@property (nonatomic,retain,readonly) UITableView * table; 
@property (nonatomic,retain,readonly) UITableViewCell * accountEditCell; 
@property (nonatomic,retain,readonly) UITableViewCell * passwordEditCell; 
@property (nonatomic,retain,readonly) UILabel * accountLabel; 
@property (nonatomic,retain,readonly) UILabel * passwordLabel; 
@property (nonatomic,retain) UITextField * accountField; 
@property (nonatomic,retain) UITextField * passwordField; 
@property (assign,nonatomic) CGPoint position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSString * accountLabelText; 
@property (nonatomic,retain) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSDictionary * placeholderAttributes;                     //@synthesize placeholderAttributes=_placeholderAttributes - In the implementation block
-(void)dealloc;
-(id<ACMSignInWidgetDelegate>)delegate;
-(void)setDelegate:(id<ACMSignInWidgetDelegate>)arg1 ;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(UITableView *)table;
-(UIView *)view;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UITextField *)passwordField;
-(void)setPasswordField:(UITextField *)arg1 ;
-(UILabel *)accountLabel;
-(UILabel *)passwordLabel;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(NSString *)arg1 ;
-(void)setAccountField:(UITextField *)arg1 ;
-(UITableViewCell *)accountEditCell;
-(UITableViewCell *)passwordEditCell;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(NSDictionary *)placeholderAttributes;
-(void)disableControls:(BOOL)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)onSignIn:(id)arg1 ;
-(void)setPlaceholderAttributes:(NSDictionary *)arg1 ;
@end

