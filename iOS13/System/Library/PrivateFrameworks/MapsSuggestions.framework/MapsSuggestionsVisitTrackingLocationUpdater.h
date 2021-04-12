/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>
#import <MapsSuggestions/MapsSuggestionsLocationVisitUpdaterDelegate.h>

@protocol MapsSuggestionsLocationUpdater;
@class CLLocation, CLVisit, MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate> {

	unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >* _queue;
	id<MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
	CLLocation* _latestLocation;
	CLVisit* _currentVisit;
	MapsSuggestionsObservers* _locationObservers;
	MapsSuggestionsObservers* _visitObservers;
	double _distanceBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3 ;
-(void)dealloc;
-(NSString *)uniqueName;
-(void)updateLocation:(id)arg1 ;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)visitEntered:(id)arg1 ;
-(void)visitLeft:(id)arg1 ;
-(id)initDecoratingLocationUpdater:(id)arg1 ;
@end

