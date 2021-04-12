/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface _UIProgressiveBlurPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alphaAnimationFactory;
+(id)transformAnimationFactory;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initForPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
@end

