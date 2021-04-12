/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@interface SCNAnimationEvent : NSObject {

	double _eventTime;
	/*^block*/id _eventBlock;

}
+(id)animationEventWithKeyTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)init;
-(/*^block*/id)eventBlock;
-(void)setEventBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

