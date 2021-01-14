/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLClickPresentationTransition.h>

@interface PLClickPresentationPresentationTransition : PLClickPresentationTransition

@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(CGAffineTransform)targetTransform;
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(void)updateBackgroundViewForTransition;
-(id)_newAnimator;
@end

