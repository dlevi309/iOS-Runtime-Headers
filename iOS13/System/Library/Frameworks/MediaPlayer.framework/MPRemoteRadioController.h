/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)_removeConnection:(id)arg1 ;
-(void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1 ;
-(void)_recentStationsControllerDidChangeStationsNotification:(id)arg1 ;
-(void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_handleRecentStationsControllerDidChange;
-(RadioAvailabilityController *)availabilityController;
-(RadioRecentStationsController *)recentStationsController;
@end

