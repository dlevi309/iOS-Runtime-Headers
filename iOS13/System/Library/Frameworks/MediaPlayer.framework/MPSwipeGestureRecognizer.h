/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {

	CGPoint _startLocation;
	double _startTime;
	UITouch* _trackingTouch;
	long long _swipeDirection;

}

@property (nonatomic,readonly) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)swipeDirection;
@end

