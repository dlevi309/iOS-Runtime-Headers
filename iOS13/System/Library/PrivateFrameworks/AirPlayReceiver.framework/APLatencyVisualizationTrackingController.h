/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class APLatencyVisualizationLayer, NSObject;

@interface APLatencyVisualizationTrackingController : NSObject {

	APLatencyVisualizationLayer* _layer;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)layer;
-(id)init:(id)arg1 ;
-(void)draw;
@end

