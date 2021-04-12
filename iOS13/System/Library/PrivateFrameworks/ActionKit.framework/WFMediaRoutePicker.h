/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class MPAVRoutingController, NSMutableArray, NSObject, NSArray, NSString;

@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate> {

	long long _routeType;
	MPAVRoutingController* _routingController;
	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long routeType;                                  //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) NSArray * availableRoutes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)observers;
-(long long)routeType;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(MPAVRoutingController *)routingController;
-(NSArray *)availableRoutes;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;
-(id)initWithRouteType:(long long)arg1 ;
-(void)addAvailableRoutesObserver:(id)arg1 ;
-(void)removeAvailableRoutesObserver:(id)arg1 ;
-(void)findRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)findRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)selectRoute:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handOffFromSourceUID:(id)arg1 toDestinationUID:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)findHandoffRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)findHandoffRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

