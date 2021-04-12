/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<ARCoachingUpdateManagerDelegate>)delegate;
-(void)setDelegate:(id<ARCoachingUpdateManagerDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(void)update;
-(void)drawWithTimeDelta:(double)arg1 ;
-(id)init:(id)arg1 metalLayer:(id)arg2 ;
@end

