/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsNetworkRequester;
@class CNContactStore, MapsSuggestionsLimitedDictionary, MapsSuggestionsObservers, MapsSuggestionsMeCard, NSString;

@interface MapsSuggestionsContacts : NSObject <MapsSuggestionsMeCardReader> {

	Queue _queue;
	CNContactStore* _store;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	MapsSuggestionsLimitedDictionary* _cache;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currMeCard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)dealloc;
-(NSString *)uniqueName;
-(void)_receivedNotification:(id)arg1 ;
-(void)receivedNotification:(id)arg1 ;
-(BOOL)_reloadWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchMeCardShortcutsWithHandler:(/*^block*/id)arg1 ;
-(void)_readMeCardAddressStringsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)addMeCardObserver:(id)arg1 ;
-(void)removeMeCardObserver:(id)arg1 ;
-(id)initWithNetworkRequester:(id)arg1 ;
-(BOOL)readMeCardAddressStringsWithHandler:(/*^block*/id)arg1 ;
@end

