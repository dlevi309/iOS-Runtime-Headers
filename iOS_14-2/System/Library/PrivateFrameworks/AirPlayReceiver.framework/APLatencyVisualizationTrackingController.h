/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class APLatencyVisualizationLayer, NSObject;

@interface APLatencyVisualizationTrackingController : NSObject {

	APLatencyVisualizationLayer* _layer;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)layer;
-(void)draw;
-(void)dealloc;
-(id)init:(id)arg1 ;
@end

