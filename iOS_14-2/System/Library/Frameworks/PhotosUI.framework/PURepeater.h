/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PURepeater : NSObject {

	/*^block*/id _block;
	double _timeInterval;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) double timeInterval;                             //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setTimeInterval:(double)arg1 ;
-(id)init;
-(void)start;
-(double)timeInterval;
-(void)stop;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_fire;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

