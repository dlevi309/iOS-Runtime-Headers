/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsMapsSyncObserver.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsMapsSync, NSString;

@interface MapsSuggestionsMapsSyncSource : MapsSuggestionsBaseSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsMapsSync* _mapsSync;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)start;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)mapsSync:(id)arg1 didChangeForContentType:(long long)arg2 ;
-(id)initWithMapsSync:(id)arg1 delegate:(id)arg2 name:(id)arg3 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

