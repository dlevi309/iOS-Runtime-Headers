/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

