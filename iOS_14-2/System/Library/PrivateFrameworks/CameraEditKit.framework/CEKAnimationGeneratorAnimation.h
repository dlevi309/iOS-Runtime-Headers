/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/


@interface CEKAnimationGeneratorAnimation : NSObject {

	double _startTime;
	double _duration;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)updateHandler;
-(id)completionHandler;
-(double)duration;
-(double)startTime;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

