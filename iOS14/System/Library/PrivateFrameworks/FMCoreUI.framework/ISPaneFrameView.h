/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIView.h>

@class FMSlidingPaneViewController;

@interface ISPaneFrameView : UIView {

	FMSlidingPaneViewController* _owningViewController;

}

@property (assign,nonatomic,__weak) FMSlidingPaneViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
-(FMSlidingPaneViewController *)owningViewController;
-(void)layoutSubviews;
-(void)setOwningViewController:(FMSlidingPaneViewController *)arg1 ;
@end

