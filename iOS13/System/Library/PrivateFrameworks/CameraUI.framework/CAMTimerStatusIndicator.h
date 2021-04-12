/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator {

	long long _timerDuration;

}

@property (assign,nonatomic) long long timerDuration;              //@synthesize timerDuration=_timerDuration - In the implementation block
-(id)valueText;
-(long long)timerDuration;
-(id)imageNameForCurrentState;
-(BOOL)canShowValue;
-(void)setTimerDuration:(long long)arg1 ;
@end

