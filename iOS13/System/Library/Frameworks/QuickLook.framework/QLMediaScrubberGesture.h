/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(float)minimumValue;
-(float)maximumValue;
-(id)initWithPlayer:(id)arg1 ;
-(float)nominalFrameRate;
-(float)clampedEstimatedFrameRate;
-(void)setScrubberDelegate:(id<QLMediaScrubberGestureDelegate>)arg1 ;
-(void)scrubbGestureDidChange:(id)arg1 ;
-(id<QLMediaScrubberGestureDelegate>)scrubberDelegate;
@end

