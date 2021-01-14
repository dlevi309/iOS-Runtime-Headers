/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSync.MapsSyncDataQueryDelegate.h>
#import <MapsSuggestions/MapsSync.MapsSyncDataQueryMergeDelegate.h>
#import <MapsSuggestions/MapsSuggestionsShortcutStorage.h>

@protocol OS_dispatch_queue;
@class NSArray, NSLock, geo_isolater, _TtC8MapsSync25MapsSyncFavoriteItemQuery, NSObject, NSString;

@interface MapsSuggestionsMapsSyncShortcutStorage : NSObject <MapsSync.MapsSyncDataQueryDelegate, MapsSync.MapsSyncDataQueryMergeDelegate, MapsSuggestionsShortcutStorage> {

	/*^block*/id _changeHandler;
	NSArray* _queryContents;
	NSLock* _lock;
	BOOL _willNotify;
	BOOL _editing;
	geo_isolater* _queryIsolator;
	BOOL _hasAttemptedLoadingContents;
	_TtC8MapsSync25MapsSyncFavoriteItemQuery* _query;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) _TtC8MapsSync25MapsSyncFavoriteItemQuery * query;              //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedLoadingContents;                                //@synthesize hasAttemptedLoadingContents=_hasAttemptedLoadingContents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL editing; 
@property (assign,nonatomic) BOOL willNotify; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(_TtC8MapsSync25MapsSyncFavoriteItemQuery *)query;
-(id)init;
-(NSString *)uniqueName;
-(void)queryContentsDidChangeWithQuery:(id)arg1 ;
-(void)setHasAttemptedLoadingContents:(BOOL)arg1 ;
-(BOOL)hasAttemptedLoadingContents;
-(void)setWillNotify:(BOOL)arg1 ;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)mergeDuplicateObjectsWithQuery:(id)arg1 duplicates:(id)arg2 ;
-(BOOL)willNotify;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)editing;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

