/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <libobjc.A.dylib/MSPQueryDelegate.h>
#import <libobjc.A.dylib/MSPContainerObserver.h>
#import <MapsSuggestions/MapsSuggestionsShortcutStorage.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class MSPPinnedPlacesQuery, NSObject, NSArray, NSString;

@interface MapsSuggestionsMSPShortcutStorage : NSObject <MSPQueryDelegate, MSPContainerObserver, MapsSuggestionsShortcutStorage> {

	/*^block*/id _changeHandler;
	BOOL _hasAttemptedLoadingContents;
	MSPPinnedPlacesQuery* _query;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_semaphore> _containerLoadWait;
	NSArray* _cachedPlaces;

}

@property (nonatomic,retain) MSPPinnedPlacesQuery * query;                                    //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL hasAttemptedLoadingContents;                                //@synthesize hasAttemptedLoadingContents=_hasAttemptedLoadingContents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> containerLoadWait;              //@synthesize containerLoadWait=_containerLoadWait - In the implementation block
@property (nonatomic,retain) NSArray * cachedPlaces;                                          //@synthesize cachedPlaces=_cachedPlaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(MSPPinnedPlacesQuery *)query;
-(void)setQuery:(MSPPinnedPlacesQuery *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)uniqueName;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(void)containerDidLoadFromPersister:(id)arg1 ;
-(void)queryContentsDidLoad:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(void)queryContentsDidChange:(id)arg1 contentsVersion:(unsigned long long)arg2 ;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setContainerLoadWait:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)containerLoadWait;
-(NSArray *)cachedPlaces;
-(void)setCachedPlaces:(NSArray *)arg1 ;
-(BOOL)hasAttemptedLoadingContents;
-(void)setHasAttemptedLoadingContents:(BOOL)arg1 ;
@end

