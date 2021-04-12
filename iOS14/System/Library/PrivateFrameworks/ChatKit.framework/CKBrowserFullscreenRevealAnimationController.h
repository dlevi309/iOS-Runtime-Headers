/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIViewPropertyAnimator *)ascentDescentAnimator;
-(id)initWithDirection:(BOOL)arg1 ;
-(void)setAscentDescentAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
@end

