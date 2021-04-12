/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsCanKicker, MSPHistoryContainer, MSPFavoritesContainer, NSMutableArray, NSString;

@interface MapsSuggestionsMSPSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _notificationsRegistered;
	MapsSuggestionsCanKicker* _canKickerHistoryNotification;
	MapsSuggestionsCanKicker* _canKickerFavoriteNotification;
	MSPHistoryContainer* _historyContainer;
	MSPFavoritesContainer* _favoritesContainer;
	NSMutableArray* _recentsEntriesToAdd;
	NSMutableArray* _favoritesEntriesToAdd;
	int _notificationTokenForRecentHistory;
	int _notificationTokenForFavorites;
	BOOL _favoritesEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)_registerNotification;
-(double)updateSuggestionEntries;
-(void)_unregisterNotification;
-(void)_updateRecentHistoryEntries;
-(void)_updateFavoritesEntries;
-(BOOL)_removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)_createEntryFromRecentHistoryRoute:(id)arg1 ;
-(id)_createEntryFromRecentHistoryPlaceDisplay:(id)arg1 ;
-(id)_mergeRecentsAndFavoritesList;
-(id)_createEntryFromFavoritePlace:(id)arg1 ;
-(BOOL)_addFieldsToSuggestionsEntry:(id)arg1 ;
-(id)_extractTitleAndSubtitleFromMapItem:(id)arg1 ;
@end

