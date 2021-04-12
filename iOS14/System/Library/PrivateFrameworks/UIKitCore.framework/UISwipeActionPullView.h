/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UISwipeActionPullViewDelegate;
@class UIView, NSMutableArray, NSArray, UISwipeActionButton, UIColor, UIContextualAction;

@interface UISwipeActionPullView : UIView {

	UIView* _clippingView;
	NSMutableArray* _buttons;
	NSArray* _actions;
	UISwipeActionButton* _pressedButton;
	BOOL _swipeActionsDidChange;
	BOOL _isTentative;
	double _openThreshold;
	double _confirmationThreshold;
	double _minimumOffset;
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

@property (assign,nonatomic,__weak) id<UISwipeActionPullViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long cellEdge;                                  //@synthesize cellEdge=_cellEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) UIColor * backgroundPullColor;                                    //@synthesize backgroundPullColor=_backgroundPullColor - In the implementation block
@property (nonatomic,readonly) UIContextualAction * primarySwipeAction; 
@property (nonatomic,readonly) double currentOffset;                                         //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) double openThreshold; 
@property (nonatomic,readonly) double confirmationThreshold; 
@property (nonatomic,readonly) UIColor * primaryActionColor; 
@property (nonatomic,readonly) BOOL primaryActionIsDestructive; 
@property (nonatomic,readonly) BOOL hasActions; 
@property (assign,nonatomic) BOOL buttonsUnderlapSwipedView;                                 //@synthesize buttonsUnderlapSwipedView=_buttonsUnderlapSwipedView - In the implementation block
@property (assign,nonatomic) BOOL autosizesButtons;                                          //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
-(void)freeze;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5 ;
-(id<UISwipeActionPullViewDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(BOOL)hasActions;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(unsigned long long)cellEdge;
-(void)setDelegate:(id<UISwipeActionPullViewDelegate>)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)_setWidth:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)resetView;
-(void)setState:(unsigned long long)arg1 ;
-(double)currentOffset;
-(unsigned long long)state;
-(UIContextualAction *)primarySwipeAction;
-(void)setAutosizesButtons:(BOOL)arg1 ;
-(double)openThreshold;
-(void)configureWithSwipeActions:(id)arg1 ;
-(double)confirmationThreshold;
-(id)sourceViewForAction:(id)arg1 ;
-(BOOL)buttonsUnderlapSwipedView;
-(void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3 ;
-(void)setBackgroundPullColor:(UIColor *)arg1 ;
-(void)setButtonsUnderlapSwipedView:(BOOL)arg1 ;
-(BOOL)primaryActionIsDestructive;
-(Class)_buttonClass;
-(unsigned long long)_swipeActionCount;
-(double)_paddingToSwipedView;
-(double)_totalInterButtonPadding;
-(double)_directionalMultiplier;
-(double)_interButtonPadding;
-(void)_setupClippingViewIfNeeded;
-(void)_tappedButton:(id)arg1 ;
-(void)_pressedButton:(id)arg1 ;
-(void)_unpressedButton:(id)arg1 ;
-(BOOL)autosizesButtons;
-(void)_rebuildButtons;
-(void)_layoutClippingLayer;
-(void)_setLayerBounds:(CGRect)arg1 ;
-(UIColor *)primaryActionColor;
-(UIColor *)backgroundPullColor;
@end

