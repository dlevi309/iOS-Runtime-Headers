/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SBCommandTabViewControllerDelegate;
@class NSMutableOrderedSet, SBIconController, SBIconModel, NSMutableArray, MTMaterialShadowView, UIView, SBIconView, UILabel, NSLayoutConstraint, UIStackView, UIPanGestureRecognizer, UITapGestureRecognizer, UIHoverGestureRecognizer, NSString;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate> {

	NSMutableOrderedSet* _recentDisplayItems;
	unsigned long long _selectedIndex;
	SBIconController* _iconController;
	SBIconModel* _iconModel;
	NSMutableArray* _iconViews;
	MTMaterialShadowView* _backgroundMaterialView;
	UIView* _blurredBackgroundView;
	UIView* _selectionSquareView;
	SBIconView* _selectedIconView;
	UILabel* _selectedIconLabel;
	NSLayoutConstraint* _selectionXLayoutConstraint;
	NSLayoutConstraint* _selectedLabelXConstraint;
	NSLayoutConstraint* _selectedLabelBottomConstraint;
	UIStackView* _stackView;
	SBIconView* _homeIconView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapDismissGestureRecognizer;
	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	CGPoint _lastHoverLocation;
	BOOL _isTouchDown;
	BOOL _isIconSelected;
	id<SBCommandTabViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBCommandTabViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canActivateWithRecentDisplayItems:(id)arg1 ;
-(void)next;
-(void)previous;
-(id)init;
-(id<SBCommandTabViewControllerDelegate>)delegate;
-(void)iconTapped:(id)arg1 ;
-(void)_handleCommandTab:(id)arg1 ;
-(void)_handleShiftCommandTab:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SBCommandTabViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2 ;
-(BOOL)iconViewDisplaysBadges:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(void)dealloc;
-(void)removeDisplayItem:(id)arg1 ;
-(id)selectedApplicationDisplayItem;
-(unsigned long long)indexOfDisplayItem:(id)arg1 ;
-(void)showCommandTabBar;
-(id)initWithRecentDisplayItems:(id)arg1 ;
-(void)iconModelDidChange:(id)arg1 ;
-(void)_handleUIGesture:(id)arg1 ;
-(void)_handleTapDismissGesture:(id)arg1 ;
-(void)_updateForUserInterfaceStyle;
-(void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1 ;
-(void)_updateIconSelectionPositionAndLabelText;
@end

