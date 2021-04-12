/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIPanelControllerDelegate;
@class UIViewController, UISlidingBarConfiguration, UISlidingBarStateRequest, _UIPanelAnimationState;

@interface _UIPanelInternalState : NSObject <NSCopying> {

	UIViewController* _mainViewController;
	UIViewController* _leadingViewController;
	UIViewController* _trailingViewController;
	UIViewController* _collapsedViewController;
	UIViewController* _preservedDetailController;
	id<UIPanelControllerDelegate> _delegate;
	UISlidingBarConfiguration* _configuration;
	UISlidingBarStateRequest* _stateRequest;
	UISlidingBarStateRequest* _externallyAnimatingStateRequest;
	long long _externallyAnimatingAffectedSides;
	_UIPanelAnimationState* _animationState;
	long long _collapsedState;
	double _keyboardAdjustment;

}

@property (nonatomic,retain) UIViewController * mainViewController;                                 //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) UIViewController * leadingViewController;                              //@synthesize leadingViewController=_leadingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * trailingViewController;                             //@synthesize trailingViewController=_trailingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * collapsedViewController;                            //@synthesize collapsedViewController=_collapsedViewController - In the implementation block
@property (nonatomic,retain) UIViewController * preservedDetailController;                          //@synthesize preservedDetailController=_preservedDetailController - In the implementation block
@property (assign,nonatomic,__weak) id<UIPanelControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UISlidingBarConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest;                                 //@synthesize stateRequest=_stateRequest - In the implementation block
@property (nonatomic,copy) UISlidingBarStateRequest * externallyAnimatingStateRequest;              //@synthesize externallyAnimatingStateRequest=_externallyAnimatingStateRequest - In the implementation block
@property (assign,nonatomic) long long externallyAnimatingAffectedSides;                            //@synthesize externallyAnimatingAffectedSides=_externallyAnimatingAffectedSides - In the implementation block
@property (nonatomic,retain) _UIPanelAnimationState * animationState;                               //@synthesize animationState=_animationState - In the implementation block
@property (assign,nonatomic) long long collapsedState;                                              //@synthesize collapsedState=_collapsedState - In the implementation block
@property (assign,nonatomic) double keyboardAdjustment;                                             //@synthesize keyboardAdjustment=_keyboardAdjustment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIPanelControllerDelegate>)delegate;
-(void)setDelegate:(id<UIPanelControllerDelegate>)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(UIViewController *)leadingViewController;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)trailingViewController;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(UIViewController *)collapsedViewController;
-(void)setCollapsedViewController:(UIViewController *)arg1 ;
-(UIViewController *)preservedDetailController;
-(void)setPreservedDetailController:(UIViewController *)arg1 ;
-(UISlidingBarStateRequest *)externallyAnimatingStateRequest;
-(void)setExternallyAnimatingStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(long long)externallyAnimatingAffectedSides;
-(void)setExternallyAnimatingAffectedSides:(long long)arg1 ;
-(_UIPanelAnimationState *)animationState;
-(void)setAnimationState:(_UIPanelAnimationState *)arg1 ;
-(long long)collapsedState;
-(void)setCollapsedState:(long long)arg1 ;
-(double)keyboardAdjustment;
-(void)setKeyboardAdjustment:(double)arg1 ;
-(double)_defaultWidthForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(id)_allowedWidthsForViewController:(id)arg1 parentWidth:(double)arg2 ;
-(id)_allowedLeadingWidthsForParentWidth:(double)arg1 ;
-(id)_allowedTrailingWidthsForParentWidth:(double)arg1 ;
-(id)computePossibleStatesGivenParentView:(id)arg1 withSize:(CGSize)arg2 ;
-(id)_stateForInteractiveRequest:(id)arg1 withAffectedSides:(long long)arg2 inPossibleStates:(id)arg3 ;
@end

