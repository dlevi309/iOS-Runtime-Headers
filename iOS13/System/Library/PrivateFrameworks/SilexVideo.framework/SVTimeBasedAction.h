/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@interface SVTimeBasedAction : NSObject {

	double _time;
	/*^block*/id _block;

}

@property (nonatomic,readonly) double time;              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) id block;                 //@synthesize block=_block - In the implementation block
-(id)block;
-(double)time;
-(id)initWithTime:(double)arg1 block:(/*^block*/id)arg2 ;
@end

