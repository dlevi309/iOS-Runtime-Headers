/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFMediaRoutePickerObserver.h>

@class WFMediaRoutePicker, WFMediaRouteDescriptor, WFDispatchSourceTimer;

@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver> {

	WFMediaRoutePicker* _picker;
	/*^block*/id _completionHandler;
	WFMediaRouteDescriptor* _routeDescriptor;
	double _timeout;
	WFDispatchSourceTimer* _timer;

}

@property (nonatomic,readonly) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) WFMediaRouteDescriptor * routeDescriptor;              //@synthesize routeDescriptor=_routeDescriptor - In the implementation block
@property (nonatomic,readonly) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) WFDispatchSourceTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,__weak,readonly) WFMediaRoutePicker * picker;                    //@synthesize picker=_picker - In the implementation block
-(void)start;
-(WFDispatchSourceTimer *)timer;
-(double)timeout;
-(id)completionHandler;
-(WFMediaRoutePicker *)picker;
-(WFMediaRouteDescriptor *)routeDescriptor;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

