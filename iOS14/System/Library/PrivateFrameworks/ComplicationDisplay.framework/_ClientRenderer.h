/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay
*/


@protocol OS_dispatch_semaphore;
#import <ComplicationDisplay/ComplicationDisplay-Structs.h>
@class _TtC19ComplicationDisplay23ComplicationHostingView, NSObject;

@interface _ClientRenderer : NSObject {

	_TtC19ComplicationDisplay23ComplicationHostingView* _host;
	double _renderTime;
	double _renderCost;
	NSObject*<OS_dispatch_semaphore> _sema;
	os_unfair_lock_s _lock;

}
-(id)init;
-(void)renderWithViewData:(id)arg1 scale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleRenderStatsTime:(double)arg1 cost:(double)arg2 ;
@end

