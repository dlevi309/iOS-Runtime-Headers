/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <BannerKit/BNBannerAnimator.h>

@interface BNBannerTransitionAnimator : BNBannerAnimator {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
+(void)animateInteractive:(BOOL)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(id)initForPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)actionsForTransition:(id)arg1 ;
@end

