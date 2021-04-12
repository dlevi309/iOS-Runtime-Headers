/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsShortcutStorage <MapsSuggestionsObject>
@required
-(void)setChangeHandler:(/*^block*/id)arg1;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3;

@end

