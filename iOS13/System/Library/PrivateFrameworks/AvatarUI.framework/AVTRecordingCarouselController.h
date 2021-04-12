/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class AVTRecordView;


@protocol AVTRecordingCarouselController <AVTCarouselController>
@property (assign,nonatomic,__weak) id<AVTRecordingCarouselControllerDelegate> recordingDelegate; 
@property (nonatomic,readonly) AVTRecordView * focusedRecordingView; 
@required
-(id<AVTRecordingCarouselControllerDelegate>)recordingDelegate;
-(void)setRecordingDelegate:(id)arg1;
-(AVTRecordView *)focusedRecordingView;

@end

