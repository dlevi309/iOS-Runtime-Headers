/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	UIViewPropertyAnimator* _ascentDescentAnimator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * ascentDescentAnimator;              //@synthesize ascentDescentAnimator=_ascentDescentAnimator - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                         //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)ascentDescentAnimator;
-(id)initWithDirection:(BOOL)arg1 ;
-(void)setAscentDescentAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

