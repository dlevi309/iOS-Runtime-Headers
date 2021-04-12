/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {

	Queue _queue;
	MapsSuggestionsObservers* _locationObservers;
	MapsSuggestionsObservers* _visitObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)dealloc;
-(BOOL)hasObservers;
-(NSString *)uniqueName;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)startImplemention;
-(void)stopImplementation;
-(void)condsiderNewLocation:(id)arg1 ;
-(void)condsiderNewVisit:(id)arg1 ;
-(void)awaitSync;
-(unsigned long long)countLocationObservers;
@end

