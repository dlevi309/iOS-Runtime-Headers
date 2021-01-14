/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UIStackView, UIButton, SFDialogTextField, SFDialogTextView, NSLayoutConstraint, UITableView, _SFDialogView, NSString;

@interface SFDialogContentView : UIView <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	UIButton* _closeButton;
	unsigned long long _actionIndexTriggeredByOptionReturnKey;
	unsigned long long _actionIndexTriggeredByEscapeKey;
	unsigned long long _actionIndexTriggeredByReturnKey;
	BOOL _hasAttemptedHardwareKeyboardFocus;
	SFDialogTextField* _inputTextField;
	NSArray* _layoutConstraintsWhenInputIsVisible;
	NSArray* _layoutConstraintsWhenPasswordIsVisible;
	NSArray* _layoutConstraintsWhenInputAndPasswordAreVisible;
	SFDialogTextView* _messageTextView;
	SFDialogTextField* _passwordTextField;
	NSLayoutConstraint* _actionButtonsLeadingConstraintForHorizontalStackAlignment;
	NSLayoutConstraint* _actionButtonsLeadingConstraintForVerticalStackAlignment;
	UITableView* _tableView;
	NSArray* _tableData;
	/*^block*/id _tableDidSelectRowAction;
	long long _selectedRow;
	NSArray* _layoutConstraintsWhenTableViewIsVisible;
	NSLayoutConstraint* _tableViewHeightConstraint;
	_SFDialogView* _dialogView;
	NSArray* _actions;

}

@property (assign,nonatomic,__weak) _SFDialogView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didAppear;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)keyCommands;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)actions;
-(void)_actionTriggered:(id)arg1 ;
-(void)setInputText:(id)arg1 placeholder:(id)arg2 ;
-(void)setPasswordText:(id)arg1 placeholder:(id)arg2 ;
-(void)setTableViewRows:(id)arg1 didSelectRowAction:(/*^block*/id)arg2 ;
-(void)_returnAction:(id)arg1 ;
-(void)_optionReturnAction:(id)arg1 ;
-(void)_escapeAction:(id)arg1 ;
-(void)_focusInputTextField:(id)arg1 ;
-(double)_desiredButtonsWidth;
-(void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3 ;
-(BOOL)_usesLoginFormAppearance;
-(void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1 ;
-(void)setDialogView:(_SFDialogView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setTitleText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)_updateActionButtons;
-(void)endEditing;
-(_SFDialogView *)dialogView;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setMessageText:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

