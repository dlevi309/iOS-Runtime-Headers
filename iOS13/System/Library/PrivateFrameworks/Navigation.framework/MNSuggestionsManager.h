/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNLocationManagerObserver.h>

@class NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface MNSuggestionsManager : NSObject <MNLocationManagerObserver> {

	BOOL _locationsAvailable;
	BOOL _changingState;
	unsigned long long _state;
	NSMutableDictionary* _suggestionsStorage;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSMutableDictionary * suggestionsStorage;              //@synthesize suggestionsStorage=_suggestionsStorage - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL changingState;                                    //@synthesize changingState=_changingState - In the implementation block
@property (assign,nonatomic) unsigned long long state;                              //@synthesize state=_state - In the implementation block
@property (readonly) NSArray * allSuggestions; 
@property (assign,nonatomic) BOOL locationsAvailable;                               //@synthesize locationsAvailable=_locationsAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)addSuggestions:(id)arg1 ;
-(void)_startListenForDebugTestNotifications;
-(void)_stopListenForDebugTestNotifications;
-(void)_verifyHaveObservers;
-(BOOL)changingState;
-(NSMutableDictionary *)suggestionsStorage;
-(void)_notifyObserversDidAddSuggestion:(id)arg1 ;
-(void)_notifyObserversDidUpdateSuggestions;
-(void)setSuggestionsStorage:(NSMutableDictionary *)arg1 ;
-(void)setChangingState:(BOOL)arg1 ;
-(void)setLocationsAvailable:(BOOL)arg1 ;
-(void)_updateLocationsAvailable;
-(BOOL)refreshSuggestions;
-(NSArray *)allSuggestions;
-(void)_addFakeSuggestion:(id)arg1 ;
-(BOOL)locationsAvailable;
@end

