/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, NSObject, NSString;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {

	CLLocationManager* _locationManager;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startImplemention;
-(void)stopImplementation;
-(void)_initLocationManagers;
-(void)_deinitLocationManager;
-(void)_startImplemention;
@end

