/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class CLLocationManager, NSString;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {

	CLLocationManager* _locationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)onStartImplementation;
-(void)onStopImplementation;
@end

