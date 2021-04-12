/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVDestinationChangeResultSource.h>

@protocol OS_dispatch_queue;
@class AVOutputContextDestinationChange, AVWeakReference, NSObject, NSString;

@interface AVFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {

	AVWeakReference* _weakObserver;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _successNotification;
	/*^block*/id _routeChangeBlock;
	NSObject*<OS_dispatch_queue> _notificationManagementQueue;
	BOOL _actOnRouteChangeNotifications;
	CFNumberRef _routeChangeID;
	AVOutputContextDestinationChange* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVOutputContextDestinationChange * result; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(AVOutputContextDestinationChange *)result;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 successNotification:(CFStringRef)arg2 routeChangeBlock:(/*^block*/id)arg3 ;
-(void)_setResultIfNotAlreadySet:(id)arg1 ;
-(void)_routeChangeStartedWithID:(CFNumberRef)arg1 ;
-(void)_routeChangeWithID:(CFNumberRef)arg1 endedWithReason:(CFStringRef)arg2 ;
-(void)_routeChangeComplete;
@end

