/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>
#import <AVFCore/AVDestinationChangeResultSource.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, NSObject, AVOutputContextDestinationChange, NSString;

@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {

	AVWeakReference* _weakObserver;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _routeChangeID;
	/*^block*/id _routeChangeBlock;
	NSObject*<OS_dispatch_queue> _routeChangeIvarAccessQueue;
	AVOutputContextDestinationChange* _result;

}

@property (nonatomic,readonly) AVOutputContextDestinationChange * result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 routeChangeID:(CFStringRef)arg2 routeChangeBlock:(/*^block*/id)arg3 ;
-(void)_setResultIfNotAlreadySet:(id)arg1 ;
-(void)_routeConfigUpdateWithID:(CFStringRef)arg1 endedWithReason:(CFStringRef)arg2 ;
-(AVOutputContextDestinationChange *)result;
-(void)dealloc;
@end

