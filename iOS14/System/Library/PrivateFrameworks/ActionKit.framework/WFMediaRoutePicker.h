/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class MPAVRoutingController, WFBluetoothSettingsClient, NSMutableArray, NSObject, NSArray, NSString;

@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate> {

	long long _routeType;
	MPAVRoutingController* _routingController;
	WFBluetoothSettingsClient* _bluetoothClient;
	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) MPAVRoutingController * routingController;                  //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,readonly) WFBluetoothSettingsClient * bluetoothClient;              //@synthesize bluetoothClient=_bluetoothClient - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long routeType;                                      //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) NSArray * availableRoutes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPAVRoutingController *)routingController;
-(long long)routeType;
-(NSMutableArray *)observers;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)init;
-(NSArray *)availableRoutes;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(WFBluetoothSettingsClient *)bluetoothClient;
-(void)startDiscoveringRoutes;
-(void)stopDiscoveringRoutes;
-(id)initWithRouteType:(long long)arg1 ;
-(void)getPairedAudioDevicesMatchingRouteDescriptor:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addAvailableRoutesObserver:(id)arg1 ;
-(void)removeAvailableRoutesObserver:(id)arg1 ;
-(void)findRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)findRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)selectRoute:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handOffFromSourceUID:(id)arg1 toDestinationUID:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)findHandoffRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)findHandoffRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

