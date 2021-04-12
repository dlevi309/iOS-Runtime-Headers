/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WFMediaRoutePicker *)picker;
-(WFDispatchSourceTimer *)timer;
-(void)start;
-(WFMediaRouteDescriptor *)routeDescriptor;
-(double)timeout;
-(id)completionHandler;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg1 ;
-(id)initWithPicker:(id)arg1 routeDescriptor:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWithMatchingRoute:(id)arg1 error:(id)arg2 ;
@end

