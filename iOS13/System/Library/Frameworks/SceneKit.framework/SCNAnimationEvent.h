/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@interface SCNAnimationEvent : NSObject {

	double _eventTime;
	/*^block*/id _eventBlock;

}
+(id)animationEventWithKeyTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(double)time;
-(void)setTime:(double)arg1 ;
-(/*^block*/id)eventBlock;
-(void)setEventBlock:(/*^block*/id)arg1 ;
@end

