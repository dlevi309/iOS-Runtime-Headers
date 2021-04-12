/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer : ISObservable {

	CADisplayLink* _displayLink;
	_ISAnimatedImageTimerForwardingProxy* _displayLinkProxy;
	double _timestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)sharedTimer;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(void)_setTimestamp:(double)arg1 ;
-(void)_updateDisplayLink;
-(id)mutableChangeObject;
-(void)hasObserversDidChange;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_iosInitialization;
-(void)_iosUpdateDisplayLink;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(void)_iosDealloc;
@end

