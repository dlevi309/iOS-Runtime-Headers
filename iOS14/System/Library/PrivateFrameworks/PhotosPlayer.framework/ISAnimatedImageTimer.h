/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)timestamp;
-(void)hasObserversDidChange;
-(void)_setTimestamp:(double)arg1 ;
-(id)mutableChangeObject;
-(void)_updateDisplayLink;
-(void)dealloc;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_iosInitialization;
-(void)_iosUpdateDisplayLink;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(void)_iosDealloc;
@end

