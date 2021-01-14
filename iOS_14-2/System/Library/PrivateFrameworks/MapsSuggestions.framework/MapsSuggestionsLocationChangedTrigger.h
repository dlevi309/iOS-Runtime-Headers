/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdaterDelegate.h>

@protocol MapsSuggestionsLocationUpdater;
@class CLLocation, MapsSuggestionsCanKicker, NSString;

@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {

	CLLocation* _previousLocation;
	double _minDistance;
	id<MapsSuggestionsLocationUpdater> _locationUpdater;
	MapsSuggestionsCanKicker* _locationForceUpdate;
	id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAddFirstObserver;
-(void)didUpdateLocation:(id)arg1 ;
-(void)stop;
-(void)didLoseLocationPermission;
-(void)didRemoveLastObserver;
-(void)_forceLocationUpdate;
-(id)initWithLocationUpdater:(id)arg1 forcingLocationUpdater:(id)arg2 ;
-(void)changeMinDistance:(double)arg1 ;
-(void)restartWithUpdateTime:(double)arg1 ;
-(void)startWithMinimumUpdateTime:(double)arg1 minimumDistance:(double)arg2 ;
@end

