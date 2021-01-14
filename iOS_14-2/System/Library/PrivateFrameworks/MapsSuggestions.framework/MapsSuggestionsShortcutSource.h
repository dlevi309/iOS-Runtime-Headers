/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsShortcutManager, MapsSuggestionsCanKicker, NSString;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsShortcutManager* _shortcutManager;
	MapsSuggestionsCanKicker* _updateForcer;

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
-(id)initWithShortcutManager:(id)arg1 delegate:(id)arg2 name:(id)arg3 ;
-(void)_renameDuplicateMeCardTypes:(id)arg1 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

