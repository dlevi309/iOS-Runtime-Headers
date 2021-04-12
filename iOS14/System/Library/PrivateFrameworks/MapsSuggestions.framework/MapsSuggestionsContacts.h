/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsContactsConnector, MapsSuggestionsNetworkRequester;
@class MapsSuggestionsLimitedDictionary, MapsSuggestionsObservers, MapsSuggestionsMeCard, MapsSuggestionsLocaleChangedTrigger, NSString;

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader> {

	Queue _queue;
	id<MapsSuggestionsContactsConnector> _connector;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	MapsSuggestionsLimitedDictionary* _cache;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currMeCard;
	MapsSuggestionsLocaleChangedTrigger* _localeChangedTrigger;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addMeCardObserver:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(char)readMeCardAddressStringsWithHandler:(/*^block*/id)arg1 ;
-(id)initWithConnector:(id)arg1 networkRequester:(id)arg2 ;
-(char)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)contactsDidUpdate;
-(void)removeMeCardObserver:(id)arg1 ;
-(void)dealloc;
@end

