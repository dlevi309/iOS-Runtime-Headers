/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol QLMediaScrubberGestureDelegate;
@class AVPlayer;

@interface QLMediaScrubberGesture : UIPanGestureRecognizer {

	CGPoint _previousTouchLocationInView;
	CGPoint _startTouchLocationInView;
	BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
	double _estimatedFrameRate;
	AVPlayer* _player;
	float _value;
	float _minimumValue;
	float _maximumValue;
	id<QLMediaScrubberGestureDelegate> _scrubberDelegate;

}

@property (assign,nonatomic,__weak) id<QLMediaScrubberGestureDelegate> scrubberDelegate;              //@synthesize scrubberDelegate=_scrubberDelegate - In the implementation block
@property (assign,nonatomic) float value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) float minimumValue;                                                      //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                                                      //@synthesize maximumValue=_maximumValue - In the implementation block
-(float)maximumValue;
-(float)nominalFrameRate;
-(float)clampedEstimatedFrameRate;
-(void)setMinimumValue:(float)arg1 ;
-(void)scrubbGestureDidChange:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(id<QLMediaScrubberGestureDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<QLMediaScrubberGestureDelegate>)arg1 ;
-(void)setValue:(float)arg1 ;
-(float)minimumValue;
-(void)setMaximumValue:(float)arg1 ;
-(float)value;
@end

