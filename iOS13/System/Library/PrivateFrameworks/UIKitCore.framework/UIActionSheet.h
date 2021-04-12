/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIActionSheetDelegate;
@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	UIActionSheet* _retainedSelf;
	NSMutableArray* _actions;
	long long _cancelIndex;
	long long _firstOtherButtonIndex;
	long long _destructiveButtonIndex;
	long long _actionSheetStyle;
	BOOL _hasPreparedAlertActions;
	BOOL _isPresented;
	BOOL _alertControllerShouldDismiss;
	BOOL _handlingAlertActionShouldDismiss;
	BOOL _dismissingAlertController;
	id<UIActionSheetDelegate> _delegate;
	id _context;

}

@property (nonatomic,retain) id context;                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<UIActionSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long actionSheetStyle; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (assign,nonatomic) long long destructiveButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<UIActionSheetDelegate>)delegate;
-(void)setDelegate:(id<UIActionSheetDelegate>)arg1 ;
-(id)context;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)subtitle;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_titleLabel;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setDestructiveButtonIndex:(long long)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)_setFirstOtherButtonIndex:(long long)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)_setIsPresented:(BOOL)arg1 ;
-(void)_didPresent;
-(void)_showFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_dismissForTappedIndex:(long long)arg1 ;
-(BOOL)_prepareToDismissForTappedIndex:(long long)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)cancelButtonIndex;
-(void)_prepareAlertActions;
-(id)_alertController;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)setActionSheetStyle:(long long)arg1 ;
-(long long)actionSheetStyle;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(long long)destructiveButtonIndex;
-(void)showFromToolbar:(id)arg1 ;
-(void)showFromTabBar:(id)arg1 ;
-(void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(id)_preparedAlertActionAtIndex:(unsigned long long)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)setTaglineText:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(BOOL)arg6 ;
-(void)_setAttributedTitleString:(id)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
@end

