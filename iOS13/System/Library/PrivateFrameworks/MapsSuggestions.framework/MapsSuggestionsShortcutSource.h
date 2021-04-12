/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsCanKicker, MapsSuggestionsShortcutManager, NSString;

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource> {

	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsCanKicker* _updateForcer;
	MapsSuggestionsShortcutManager* _shortcutManager;

}

@property (nonatomic,retain) MapsSuggestionsShortcutManager * shortcutManager;               //@synthesize shortcutManager=_shortcutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)stop;
-(void)start;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(MapsSuggestionsShortcutManager *)shortcutManager;
-(double)updateSuggestionEntries;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(void)_updateSuggestionEntries;
-(void)_renameDuplicateMeCardTypes:(id)arg1 ;
-(void)_treatShortcuts:(id)arg1 error:(id)arg2 ;
-(void)setShortcutManager:(MapsSuggestionsShortcutManager *)arg1 ;
@end

