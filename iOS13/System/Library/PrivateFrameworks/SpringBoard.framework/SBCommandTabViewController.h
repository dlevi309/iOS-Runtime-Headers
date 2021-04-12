/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>

@protocol SBCommandTabViewControllerDelegate;
@class NSMutableOrderedSet, SBIconController, SBIconModel, NSMutableArray, MTMaterialShadowView, UIView, SBIconView, UILabel, NSLayoutConstraint, UIStackView, UIPanGestureRecognizer, UIHoverGestureRecognizer, NSString;

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
-(id)init;
-(void)dealloc;
-(id<SBCommandTabViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBCommandTabViewControllerDelegate>)arg1 ;
-(void)next;
-(void)previous;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)canBecomeFirstResponder;
-(BOOL)iconViewDisplaysBadges:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(void)iconTapped:(id)arg1 ;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2 ;
-(void)_handleCommandTab:(id)arg1 ;
-(void)_handleShiftCommandTab:(id)arg1 ;
-(void)removeDisplayItem:(id)arg1 ;
-(id)selectedApplicationDisplayItem;
-(unsigned long long)indexOfDisplayItem:(id)arg1 ;
-(void)showCommandTabBar;
-(id)initWithRecentDisplayItems:(id)arg1 ;
-(void)iconModelDidChange:(id)arg1 ;
-(void)_handleUIGesture:(id)arg1 ;
-(void)_updateForUserInterfaceStyle;
-(void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1 ;
-(void)_updateIconSelectionPositionAndLabelText;
@end

