/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsMeCardReader.h>

@protocol MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor;
@class MapsSuggestionsRoutine, MapsSuggestionsContacts, NSMutableArray, MapsSuggestionsMeCard, NSArray, MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsShortcutManager : NSObject <MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {

	Queue _queue;
	id<MapsSuggestionsShortcutStorage> _storage;
	id<MapsSuggestionsShortcutSuggestor> _suggestor;
	MapsSuggestionsRoutine* _routine;
	MapsSuggestionsContacts* _contacts;
	NSMutableArray* _hiddenShortcuts;
	MapsSuggestionsMeCard* _rawMeCard;
	NSArray* _shortcutsOverlay;
	MapsSuggestionsObservers* _meCardObservers;
	MapsSuggestionsMeCard* _currCorrectedMeCard;
	NSArray* _rawHomeAddressStrings;
	NSArray* _rawWorkAddressStrings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)storage;
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(id)initWithDefaults;
-(id)routine;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(BOOL)readMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)addMeCardObserver:(id)arg1 ;
-(void)removeMeCardObserver:(id)arg1 ;
-(id)initWithStorage:(id)arg1 suggestor:(id)arg2 contacts:(id)arg3 routine:(id)arg4 ;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_mergeShortcutsToMeCardAndCallHandler:(/*^block*/id)arg1 ;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)__loadCorrectedMeCardWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_loadCorrectedMeCardWithHandler:(/*^block*/id)arg1 ;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)test_setUpPlaceholdersIfNeeded:(id)arg1 overlays:(id)arg2 ;
-(void)test_sortMapsSuggestionsShortcuts:(id)arg1 ;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 withSnapshot:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)proposeAdditionalShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)suggestor;
@end

