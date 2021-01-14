/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator {

	long long _timerDuration;

}

@property (assign,nonatomic) long long timerDuration;              //@synthesize timerDuration=_timerDuration - In the implementation block
-(void)setTimerDuration:(long long)arg1 ;
-(long long)timerDuration;
-(id)imageNameForCurrentState;
-(id)valueText;
-(BOOL)canShowValue;
@end

