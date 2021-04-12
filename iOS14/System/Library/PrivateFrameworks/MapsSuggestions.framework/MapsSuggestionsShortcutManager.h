/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;
@class MapsSuggestionsRoutine, MapsSuggestionsContacts, NSMutableArray, MapsSuggestionsMeCard, MapsSuggestionsObservers, NSArray, NSString;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {

	Queue _queue;
	id<MapsSuggestionsShortcutStorage> _storage;
	id<MapsSuggestionsShortcutSuggestor> _suggestor;
	MapsSuggestionsRoutine* _routine;
	MapsSuggestionsContacts* _contacts;
	NSMutableArray* _hiddenShortcuts;
	MapsSuggestionsMeCard* _rawMeCard;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currCorrectedMeCard;
	NSArray* _rawHomeAddressStrings;
	NSArray* _rawWorkAddressStrings;
	NSArray* _rawSchoolAddressStrings;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)addMeCardObserver:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(id)storage;
-(char)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)routine;
-(id)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(id)arg2 ;
-(void)test_sortMapsSuggestionsShortcuts:(id)arg1 ;
-(char)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(char)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeMeCardObserver:(id)arg1 ;
-(char)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(char)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4 ;
-(char)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)suggestor;
-(char)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

