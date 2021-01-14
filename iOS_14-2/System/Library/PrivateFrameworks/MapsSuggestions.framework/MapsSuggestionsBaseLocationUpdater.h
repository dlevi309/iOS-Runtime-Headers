/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class NSString, MapsSuggestionsObservers;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {

	NSString* _name;
	Queue _queue;
	MapsSuggestionsObservers* _locationObservers;
	MapsSuggestionsObservers* _visitObservers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(NSString *)uniqueName;
-(BOOL)hasObservers;
-(id)dispatchQueue;
-(id)startLocationUpdatesForDelegate:(id)arg1 ;
-(void)stopLocationUpdatesForDelegate:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg1 ;
-(void)awaitQueue;
-(void)considerMyNewLocation:(id)arg1 ;
-(void)considerMyNewVisit:(id)arg1 ;
-(void)considerMyAllowanceAsLimited:(BOOL)arg1 ;
-(void)onStartImplementation;
-(void)onStopImplementation;
-(unsigned long long)countLocationObservers;
-(void)dealloc;
@end

