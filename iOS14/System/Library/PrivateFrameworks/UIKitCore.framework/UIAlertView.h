/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString, UIViewController;

@interface UIAlertView : UIView {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	id _retainedSelf;
	NSMutableArray* _actions;
	long long _cancelIndex;
	long long _defaultButtonIndex;
	long long _firstOtherButtonIndex;
	NSString* _message;
	NSString* _subtitle;
	long long _alertViewStyle;
	BOOL _hasPreparedAlertActions;
	BOOL _isPresented;
	BOOL _alertControllerShouldDismiss;
	BOOL _handlingAlertActionShouldDismiss;
	BOOL _dismissingAlertController;
	id _delegate;
	id _context;
	UIViewController* _externalViewControllerForPresentation;

}

@property (nonatomic,retain) id context;                                                                                                                                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long defaultButtonIndex; 
@property (assign,nonatomic) long long numberOfRows; 
@property (nonatomic,retain) NSString * subtitle; 
@property (setter=_setExternalViewControllerForPresentation:,getter=_externalViewControllerForPresentation,nonatomic,retain) UIViewController * externalViewControllerForPresentation;              //@synthesize externalViewControllerForPresentation=_externalViewControllerForPresentation - In the implementation block
@property (nonatomic,retain) NSString * bodyText; 
@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic,__weak) id delegate;                                                                                                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
+(id)_remoteAlertViewWithBlock:(/*^block*/id)arg1 ;
+(id)_alertViewForSessionWithRemoteViewController:(id)arg1 ;
+(id)_alertViewForWindow:(id)arg1 ;
-(id)titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)_isAnimating;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(NSString *)message;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_alertController;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)bodyText;
-(id)delegate;
-(id)tableView;
-(id)textFieldAtIndex:(long long)arg1 ;
-(long long)_maximumNumberOfTextFieldsForCurrentStyle;
-(long long)numberOfRows;
-(NSString *)subtitle;
-(void)_setExternalViewControllerForPresentation:(id)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)show;
-(id)context;
-(id)_externalViewControllerForPresentation;
-(BOOL)_prepareToDismissForTappedIndex:(long long)arg1 ;
-(id)keyboard;
-(void)_updateFirstOtherButtonEnabledState;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(int)buttonCount;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_updateButtonTitle:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(void)setNumberOfRows:(long long)arg1 ;
-(id)_addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_setAccessoryView:(id)arg1 ;
-(BOOL)isVisible;
-(id)window;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(int)textFieldCount;
-(void)_showAnimated:(BOOL)arg1 ;
-(CGSize)backgroundSize;
-(id)_preparedAlertActionAtIndex:(unsigned long long)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(void)_updateMessageAndSubtitle;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_setIsPresented:(BOOL)arg1 ;
-(BOOL)groupsTextFields;
-(id)initWithCoder:(id)arg1 ;
-(void)_prepareAlertActions;
-(long long)firstOtherButtonIndex;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(long long)cancelButtonIndex;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(id)textField;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(void)_textDidChangeInTextField:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(void)setAlertViewStyle:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(id)_titleLabel;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_dismissForTappedIndex:(long long)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(void)layout;
-(void)dismiss;
-(void)setContext:(id)arg1 ;
@end

