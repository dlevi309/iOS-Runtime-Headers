/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPServiceRadioController.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListener, RadioAvailabilityController, RadioRecentStationsController, NSString;

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _connections;
	BOOL _hasRefreshedStations;
	NSXPCListener* _listener;
	RadioAvailabilityController* _availabilityController;
	RadioRecentStationsController* _recentStationsController;

}

@property (nonatomic,readonly) RadioAvailabilityController * availabilityController;                  //@synthesize availabilityController=_availabilityController - In the implementation block
@property (nonatomic,readonly) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleRecentStationsControllerDidChange;
-(id)init;
-(void)_removeConnection:(id)arg1 ;
-(void)start;
-(void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_recentStationsControllerDidChangeStationsNotification:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1 ;
-(void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(RadioRecentStationsController *)recentStationsController;
-(RadioAvailabilityController *)availabilityController;
-(void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

