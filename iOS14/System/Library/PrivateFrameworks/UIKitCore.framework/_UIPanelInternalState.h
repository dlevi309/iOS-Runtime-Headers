/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIPanelControllerDelegate;
@class UIViewController, UISlidingBarConfiguration, UISlidingBarStateRequest, _UIPanelAnimationState;

@interface _UIPanelInternalState : NSObject <NSCopying> {

	UIViewController* _mainViewController;
	UIViewController* _leadingViewController;
	UIViewController* _supplementaryViewController;
	UIViewController* _trailingViewController;
	UIViewController* _collapsedViewController;
	UIViewController* _preservedDetailController;
	id<UIPanelControllerDelegate> _delegate;
	UISlidingBarConfiguration* _configuration;
	UISlidingBarStateRequest* _stateRequest;
	UISlidingBarStateRequest* _externallyAnimatingStateRequest;
	long long _externallyAnimatingAffectedSides;
	_UIPanelAnimationState* _animationState;
	UISlidingBarStateRequest* _interactiveStateRequest;
	long long _collapsedState;
	double _keyboardAdjustment;

}

@property (nonatomic,retain) UIViewController * mainViewController;                                 //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) UIViewController * leadingViewController;                              //@synthesize leadingViewController=_leadingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * supplementaryViewController;                        //@synthesize supplementaryViewController=_supplementaryViewController - In the implementation block
@property (nonatomic,retain) UIViewController * trailingViewController;                             //@synthesize trailingViewController=_trailingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * collapsedViewController;                            //@synthesize collapsedViewController=_collapsedViewController - In the implementation block
@property (nonatomic,retain) UIViewController * preservedDetailController;                          //@synthesize preservedDetailController=_preservedDetailController - In the implementation block
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UISlidingBarConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest;                                 //@synthesize stateRequest=_stateRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * externallyAnimatingStateRequest;              //@synthesize externallyAnimatingStateRequest=_externallyAnimatingStateRequest - In the implementation block
@property (assign,nonatomic) long long externallyAnimatingAffectedSides;                            //@synthesize externallyAnimatingAffectedSides=_externallyAnimatingAffectedSides - In the implementation block
@property (nonatomic,retain) _UIPanelAnimationState * animationState;                               //@synthesize animationState=_animationState - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * interactiveStateRequest;                      //@synthesize interactiveStateRequest=_interactiveStateRequest - In the implementation block
@property (assign,nonatomic) long long collapsedState;                                              //@synthesize collapsedState=_collapsedState - In the implementation block
@property (assign,nonatomic) double keyboardAdjustment;                                             //@synthesize keyboardAdjustment=_keyboardAdjustment - In the implementation block
-(void)setAnimationState:(_UIPanelAnimationState *)arg1 ;
-(_UIPanelAnimationState *)animationState;
-(void)setExternallyAnimatingStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setKeyboardAdjustment:(double)arg1 ;
-(UIViewController *)mainViewController;
-(id<UIPanelControllerDelegate>)delegate;
-(void)setExternallyAnimatingAffectedSides:(long long)arg1 ;
-(long long)collapsedState;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(id)_allowedLeadingWidthsForParentWidth:(double)arg1 ;
-(void)setCollapsedViewController:(UIViewController *)arg1 ;
-(id)_allowedSupplementaryWidthsForParentWidth:(double)arg1 ;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)setInteractiveStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3 ;
-(id)computePossibleStatesGivenParentView:(id)arg1 withSize:(CGSize)arg2 forceOverlay:(BOOL)arg3 ;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(id)description;
-(void)setPreservedDetailController:(UIViewController *)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(UIViewController *)collapsedViewController;
-(long long)externallyAnimatingAffectedSides;
-(UIViewController *)trailingViewController;
-(void)setCollapsedState:(long long)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(UISlidingBarStateRequest *)externallyAnimatingStateRequest;
-(UISlidingBarStateRequest *)interactiveStateRequest;
-(UIViewController *)preservedDetailController;
-(double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(double)keyboardAdjustment;
-(UIViewController *)leadingViewController;
-(id)_allowedTrailingWidthsForParentWidth:(double)arg1 ;
-(void)setSupplementaryViewController:(UIViewController *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIViewController *)supplementaryViewController;
-(id)computePossibleStatesGivenParentView:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
@end

