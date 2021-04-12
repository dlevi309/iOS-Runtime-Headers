/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIView.h>

@class FMSlidingPaneViewController;

@interface ISPaneFrameView : UIView {

	FMSlidingPaneViewController* _owningViewController;

}

@property (assign,nonatomic,__weak) FMSlidingPaneViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
-(void)layoutSubviews;
-(void)setOwningViewController:(FMSlidingPaneViewController *)arg1 ;
-(FMSlidingPaneViewController *)owningViewController;
@end

