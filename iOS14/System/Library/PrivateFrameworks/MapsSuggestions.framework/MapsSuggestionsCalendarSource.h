/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsEventKitObserver.h>
#import <MapsSuggestions/MapsSuggestionsPreloadableSource.h>

@protocol OS_dispatch_queue;
@class MapsSuggestionsEventKit, NSObject, NSString;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource> {

	MapsSuggestionsEventKit* _eventKit;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)start;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)eventKitDidChange:(id)arg1 ;
-(BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 eventKit:(id)arg2 name:(id)arg3 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

