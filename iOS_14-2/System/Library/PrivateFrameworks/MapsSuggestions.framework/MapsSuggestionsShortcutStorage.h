/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsShortcutStorage <MapsSuggestionsObject>
@required
-(void)setChangeHandler:(/*^block*/id)arg1;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3;

@end

