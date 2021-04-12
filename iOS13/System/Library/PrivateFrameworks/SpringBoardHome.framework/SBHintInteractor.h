/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <libobjc.A.dylib/SBViewControllerInteractiveTransitioning.h>

@protocol SBViewControllerContextTransitioning;
@class UIInteractionProgress, NSString;

@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	SCD_Struct_SB5 _hintInterval;
	UIInteractionProgress* _interactionProgress;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) double maxHintProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(UIInteractionProgress *)interactionProgress;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)cancelTransition;
-(BOOL)supportsRestarting;
-(void)_updateInteractionPercentComplete:(double)arg1 ;
-(void)updateTransition:(double)arg1 ;
-(id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2 ;
-(double)maxHintProgress;
@end

