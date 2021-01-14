/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView {

	double _timeInterval;
	double _duration;
	double _previousPauseTimeInterval;
	double _previousPauseDuration;
	double _accessibilityFrameAdditionalHeight;

}

@property (assign,nonatomic) double timeInterval;                                    //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double previousPauseTimeInterval;                       //@synthesize previousPauseTimeInterval=_previousPauseTimeInterval - In the implementation block
@property (assign,nonatomic) double previousPauseDuration;                           //@synthesize previousPauseDuration=_previousPauseDuration - In the implementation block
@property (assign,nonatomic) double accessibilityFrameAdditionalHeight;              //@synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight - In the implementation block
-(id)accessibilityLabel;
-(void)setTimeInterval:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(BOOL)isAccessibilityElement;
-(double)timeInterval;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(double)duration;
-(void)setPreviousPauseTimeInterval:(double)arg1 ;
-(void)setPreviousPauseDuration:(double)arg1 ;
-(void)setAccessibilityFrameAdditionalHeight:(double)arg1 ;
-(double)previousPauseTimeInterval;
-(double)previousPauseDuration;
-(double)accessibilityFrameAdditionalHeight;
@end

