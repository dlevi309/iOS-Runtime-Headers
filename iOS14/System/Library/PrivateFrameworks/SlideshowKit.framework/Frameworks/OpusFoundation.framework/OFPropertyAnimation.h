/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, OFPropertyAnimationLayer, CAPropertyAnimation, NSTimer;

@interface OFPropertyAnimation : NSObject <CAAnimationDelegate> {

	NSString* _animationKey;
	OFPropertyAnimationLayer* _layer;
	CAPropertyAnimation* _propertyAnimation;
	NSTimer* _timer;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animateWithDuration:(double)arg1 rootLayer:(id)arg2 animation:(/*^block*/id)arg3 progress:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
+(id)interpolateValueForKey:(id)arg1 animation:(/*^block*/id)arg2 progress:(double)arg3 ;
-(void)_cleanup;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)init;
-(void)animationDidStart:(id)arg1 ;
-(void)handleTimer:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(CGPoint)animatedPoint;
-(void)setDestinationAnimatedPoint:(CGPoint)arg1 ;
-(double)animatedFloat;
-(void)setDestinationAnimatedFloat:(double)arg1 ;
@end

