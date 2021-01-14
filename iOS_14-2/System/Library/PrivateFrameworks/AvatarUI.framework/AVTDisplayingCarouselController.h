/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class AVTView;


@protocol AVTDisplayingCarouselController <AVTCarouselController>
@property (assign,nonatomic,__weak) id<AVTDisplayingCarouselControllerDelegate> displayingDelegate; 
@property (nonatomic,readonly) AVTView * focusedDisplayView; 
@required
-(id<AVTDisplayingCarouselControllerDelegate>)displayingDelegate;
-(AVTView *)focusedDisplayView;
-(void)setDisplayingDelegate:(id)arg1;

@end

