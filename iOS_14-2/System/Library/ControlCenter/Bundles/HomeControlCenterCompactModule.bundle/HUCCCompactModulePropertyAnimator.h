/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/

#import <UIKitCore/UIViewPropertyAnimator.h>

@protocol HUCCCompactModulePropertyAnimatorDelegate;
@interface HUCCCompactModulePropertyAnimator : UIViewPropertyAnimator {

	id<HUCCCompactModulePropertyAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCCCompactModulePropertyAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startAnimation;
-(id<HUCCCompactModulePropertyAnimatorDelegate>)delegate;
-(void)setDelegate:(id<HUCCCompactModulePropertyAnimatorDelegate>)arg1 ;
@end

