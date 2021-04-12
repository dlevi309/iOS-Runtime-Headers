/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UIInteractiveUndoHUDActionDelegate;
@class UIKBUndoControl, UIVisualEffectView, UIStackView, UIView, NSLayoutConstraint, UIDelayedAction, UIKBUndoStyling;

@interface UIKBUndoInteractionHUD : UIView {

	UIKBUndoControl* _leftButtonView;
	UIKBUndoControl* _rightButtonView;
	UIKBUndoControl* _aCutButtonView;
	UIKBUndoControl* _aCopyButtonView;
	UIKBUndoControl* _aPasteButtonView;
	double _optimizedHUDWidth;
	id<UIInteractiveUndoHUDActionDelegate> _actionDelegate;
	long long _mode;
	UIVisualEffectView* _backgroundEffectView;
	UIStackView* _undoItems;
	UIVisualEffectView* _shadowView;
	UIView* _containerView;
	UIView* _centerView;
	UIView* _grabber;
	NSLayoutConstraint* _grabberPositionConstraint;
	UIDelayedAction* _dismissGrabberTimer;
	long long _currentUndoElementIndex;
	UIKBUndoStyling* _style;
	double _grabberStartXLocation;
	long long _currentCheckpointCovered;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                 //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,retain) UIStackView * undoItems;                                                   //@synthesize undoItems=_undoItems - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * shadowView;                                           //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * centerView;                                                       //@synthesize centerView=_centerView - In the implementation block
@property (nonatomic,retain) UIView * grabber;                                                          //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * grabberPositionConstraint;                            //@synthesize grabberPositionConstraint=_grabberPositionConstraint - In the implementation block
@property (nonatomic,retain) UIDelayedAction * dismissGrabberTimer;                                     //@synthesize dismissGrabberTimer=_dismissGrabberTimer - In the implementation block
@property (assign,nonatomic) long long currentUndoElementIndex;                                         //@synthesize currentUndoElementIndex=_currentUndoElementIndex - In the implementation block
@property (nonatomic,retain) UIKBUndoStyling * style;                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double grabberStartXLocation;                                              //@synthesize grabberStartXLocation=_grabberStartXLocation - In the implementation block
@property (assign,nonatomic) long long currentCheckpointCovered;                                        //@synthesize currentCheckpointCovered=_currentCheckpointCovered - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * leftButtonView;                                          //@synthesize leftButtonView=_leftButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * rightButtonView;                                         //@synthesize rightButtonView=_rightButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aCutButtonView;                                          //@synthesize aCutButtonView=_aCutButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aCopyButtonView;                                         //@synthesize aCopyButtonView=_aCopyButtonView - In the implementation block
@property (nonatomic,retain) UIKBUndoControl * aPasteButtonView;                                        //@synthesize aPasteButtonView=_aPasteButtonView - In the implementation block
@property (assign,nonatomic) double optimizedHUDWidth;                                                  //@synthesize optimizedHUDWidth=_optimizedHUDWidth - In the implementation block
@property (assign,nonatomic,__weak) id<UIInteractiveUndoHUDActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) long long mode;                                                            //@synthesize mode=_mode - In the implementation block
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(UIKBUndoStyling *)style;
-(void)setStyle:(UIKBUndoStyling *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIVisualEffectView *)shadowView;
-(UIView *)grabber;
-(void)setShadowView:(UIVisualEffectView *)arg1 ;
-(void)setCenterView:(UIView *)arg1 ;
-(void)controlActionDown:(id)arg1 ;
-(void)controlActionUpInside:(id)arg1 ;
-(void)controlActionUpOutside:(id)arg1 ;
-(id)createSeparatorView;
-(id<UIInteractiveUndoHUDActionDelegate>)actionDelegate;
-(UIKBUndoControl *)leftButtonView;
-(BOOL)availableOfControl:(id)arg1 ;
-(UIKBUndoControl *)rightButtonView;
-(UIKBUndoControl *)aCutButtonView;
-(UIKBUndoControl *)aCopyButtonView;
-(UIKBUndoControl *)aPasteButtonView;
-(void)performDelegateUndoAndUpdateHUDIfNeeded;
-(void)performDelegateRedoAndUpdateHUDIfNeeded;
-(id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 mode:(long long)arg3 sceneBounds:(CGRect)arg4 ;
-(void)updateHUDControlState;
-(void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(BOOL)arg3 ;
-(void)setLeftButtonView:(UIKBUndoControl *)arg1 ;
-(void)setRightButtonView:(UIKBUndoControl *)arg1 ;
-(void)setACutButtonView:(UIKBUndoControl *)arg1 ;
-(void)setACopyButtonView:(UIKBUndoControl *)arg1 ;
-(void)setAPasteButtonView:(UIKBUndoControl *)arg1 ;
-(double)optimizedHUDWidth;
-(void)setOptimizedHUDWidth:(double)arg1 ;
-(void)setActionDelegate:(id<UIInteractiveUndoHUDActionDelegate>)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(UIStackView *)undoItems;
-(void)setUndoItems:(UIStackView *)arg1 ;
-(UIView *)centerView;
-(void)setGrabber:(UIView *)arg1 ;
-(NSLayoutConstraint *)grabberPositionConstraint;
-(void)setGrabberPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(UIDelayedAction *)dismissGrabberTimer;
-(void)setDismissGrabberTimer:(UIDelayedAction *)arg1 ;
-(long long)currentUndoElementIndex;
-(void)setCurrentUndoElementIndex:(long long)arg1 ;
-(double)grabberStartXLocation;
-(void)setGrabberStartXLocation:(double)arg1 ;
-(long long)currentCheckpointCovered;
-(void)setCurrentCheckpointCovered:(long long)arg1 ;
@end

