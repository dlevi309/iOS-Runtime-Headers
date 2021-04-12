/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@class NSMutableDictionary, CADisplayLink;

@interface CEKAnimationGenerator : NSObject {

	NSMutableDictionary* __animations;
	CADisplayLink* __displayLink;

}

@property (nonatomic,retain) NSMutableDictionary * _animations;              //@synthesize _animations=__animations - In the implementation block
@property (nonatomic,retain) CADisplayLink * _displayLink;                   //@synthesize _displayLink=__displayLink - In the implementation block
-(NSMutableDictionary *)_animations;
-(id)init;
-(CADisplayLink *)_displayLink;
-(void)dealloc;
-(void)_handleDisplayLinkFired:(id)arg1 ;
-(void)set_displayLink:(CADisplayLink *)arg1 ;
-(BOOL)isAnimatingForIdentifier:(id)arg1 ;
-(void)startAnimationForIdentifier:(id)arg1 duration:(double)arg2 updateHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopAnimationForIdentifier:(id)arg1 ;
-(void)stopAllAnimations;
-(void)_stopAnimationForIdentifier:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_updateAnimationForIdentifer:(id)arg1 timestamp:(double)arg2 ;
-(void)set_animations:(NSMutableDictionary *)arg1 ;
@end

