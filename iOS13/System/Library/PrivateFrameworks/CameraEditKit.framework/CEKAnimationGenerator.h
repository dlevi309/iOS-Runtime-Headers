/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@class NSMutableDictionary, CADisplayLink;

@interface CEKAnimationGenerator : NSObject {

	NSMutableDictionary* __animations;
	CADisplayLink* __displayLink;

}

@property (nonatomic,retain) NSMutableDictionary * _animations;              //@synthesize _animations=__animations - In the implementation block
@property (nonatomic,retain) CADisplayLink * _displayLink;                   //@synthesize _displayLink=__displayLink - In the implementation block
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)_animations;
-(CADisplayLink *)_displayLink;
-(BOOL)isAnimatingForIdentifier:(id)arg1 ;
-(void)startAnimationForIdentifier:(id)arg1 duration:(double)arg2 updateHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopAnimationForIdentifier:(id)arg1 ;
-(void)stopAllAnimations;
-(void)_handleDisplayLinkFired:(id)arg1 ;
-(void)_stopAnimationForIdentifier:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)_updateAnimationForIdentifer:(id)arg1 timestamp:(double)arg2 ;
-(void)set_animations:(NSMutableDictionary *)arg1 ;
-(void)set_displayLink:(CADisplayLink *)arg1 ;
@end

