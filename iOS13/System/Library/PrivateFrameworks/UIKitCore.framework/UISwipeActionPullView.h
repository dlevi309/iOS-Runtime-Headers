/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwipeActionPullViewDelegate;
@class NSMutableArray, NSArray, UISwipeActionButton, UIColor, UIContextualAction;

@interface UISwipeActionPullView : UIView {

	NSMutableArray* _buttons;
	NSArray* _actions;
	UISwipeActionButton* _pressedButton;
	BOOL _swipeActionsDidChange;
	BOOL _isCollapsed;
	double _openThreshold;
	double _confirmationThreshold;
	double _minimumOffset;
	double _currentExtraOffset;
	unsigned long long _style;
	BOOL _buttonsUnderlapSwipedView;
	BOOL _autosizesButtons;
	unsigned long long _cellEdge;
	double _currentOffset;
	id<UISwipeActionPullViewDelegate> _delegate;
	UIColor* _backgroundPullColor;
	unsigned long long _state;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) id<UISwipeActionPullViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long cellEdge;                           //@synthesize cellEdge=_cellEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) UIColor * backgroundPullColor;                             //@synthesize backgroundPullColor=_backgroundPullColor - In the implementation block
@property (nonatomic,readonly) UIContextualAction * primarySwipeAction; 
@property (nonatomic,readonly) double currentOffset;                                  //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) double openThreshold; 
@property (nonatomic,readonly) double confirmationThreshold; 
@property (nonatomic,readonly) UIColor * primaryActionColor; 
@property (nonatomic,readonly) BOOL primaryActionIsDestructive; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (assign,nonatomic) BOOL buttonsUnderlapSwipedView;                          //@synthesize buttonsUnderlapSwipedView=_buttonsUnderlapSwipedView - In the implementation block
@property (assign,nonatomic) BOOL autosizesButtons;                                   //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
-(id)description;
-(id<UISwipeActionPullViewDelegate>)delegate;
-(void)setDelegate:(id<UISwipeActionPullViewDelegate>)arg1 ;
-(void)freeze;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(double)currentOffset;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setAutosizesButtons:(BOOL)arg1 ;
-(void)configureWithSwipeActions:(id)arg1 ;
-(UIContextualAction *)primarySwipeAction;
-(double)openThreshold;
-(double)confirmationThreshold;
-(void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5 ;
-(void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3 ;
-(id)sourceViewForAction:(id)arg1 ;
-(BOOL)buttonsUnderlapSwipedView;
-(id)initWithFrame:(CGRect)arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(void)setBackgroundPullColor:(UIColor *)arg1 ;
-(void)setButtonsUnderlapSwipedView:(BOOL)arg1 ;
-(unsigned long long)cellEdge;
-(void)resetView;
-(BOOL)primaryActionIsDestructive;
-(unsigned long long)_swipeActionCount;
-(Class)_buttonClass;
-(BOOL)hasActions;
-(double)_directionalMultiplier;
-(void)_tappedButton:(id)arg1 ;
-(void)_pressedButton:(id)arg1 ;
-(void)_unpressedButton:(id)arg1 ;
-(BOOL)autosizesButtons;
-(void)_rebuildButtons;
-(id)_inferredAccessibilityIdentifierTemplate;
-(UIColor *)primaryActionColor;
-(UIColor *)backgroundPullColor;
@end

