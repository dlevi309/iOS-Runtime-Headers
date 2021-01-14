/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(long long)swipeDirection;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

