/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <UIKitCore/UIViewPropertyAnimator.h>

@protocol HUCCSmartGridPropertyAnimatorDelegate;
@interface HUCCSmartGridPropertyAnimator : UIViewPropertyAnimator {

	id<HUCCSmartGridPropertyAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCCSmartGridPropertyAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startAnimation;
-(id<HUCCSmartGridPropertyAnimatorDelegate>)delegate;
-(void)setDelegate:(id<HUCCSmartGridPropertyAnimatorDelegate>)arg1 ;
@end

