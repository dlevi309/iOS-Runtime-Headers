/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>
#import <MapsSuggestions/MapsSuggestionsLocationVisitUpdaterDelegate.h>

@protocol MapsSuggestionsLocationUpdater;
@class CLLocation, CLVisit, MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate> {

	Queue _queue;
	id<MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
	CLLocation* _latestLocation;
	CLVisit* _currentVisit;
	MapsSuggestionsObservers* _locationObservers;
	MapsSuggestionsObservers* _visitObservers;
	double _distanceBuffer;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(void)didUpdateLocation:(id)arg1 ;
-(void)didLoseLocationPermission;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)didEnterVisit:(id)arg1 ;
-(void)didLeaveVisit:(id)arg1 ;
-(id)initDecoratingLocationUpdater:(id)arg1 ;
-(void)dealloc;
@end

