/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLCommandQueue, ARCoachingUpdateManagerDelegate;
@class CAMetalLayer, CADisplayLink;

@interface ARCoachingUpdateManager : NSObject {

	CAMetalLayer* _metalLayer;
	id<MTLCommandQueue> _commandQueue;
	CADisplayLink* _displayLink;
	double _lastUpdateTime;
	id<ARCoachingUpdateManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARCoachingUpdateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ARCoachingUpdateManagerDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<ARCoachingUpdateManagerDelegate>)arg1 ;
-(void)update;
-(void)dealloc;
-(void)drawWithTimeDelta:(double)arg1 ;
-(id)init:(id)arg1 metalLayer:(id)arg2 ;
@end

