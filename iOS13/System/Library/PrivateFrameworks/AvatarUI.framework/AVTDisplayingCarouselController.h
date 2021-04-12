/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class AVTView;


@protocol AVTDisplayingCarouselController <AVTCarouselController>
@property (assign,nonatomic,__weak) id<AVTDisplayingCarouselControllerDelegate> displayingDelegate; 
@property (nonatomic,readonly) AVTView * focusedDisplayView; 
@required
-(id<AVTDisplayingCarouselControllerDelegate>)displayingDelegate;
-(void)setDisplayingDelegate:(id)arg1;
-(AVTView *)focusedDisplayView;

@end

