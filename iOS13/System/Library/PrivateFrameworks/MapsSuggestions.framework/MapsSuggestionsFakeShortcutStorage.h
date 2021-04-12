/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsShortcutStorage.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage> {

	ReadWriteQueue _rwQueue;
	NSArray* _fakeResults;
	NSArray* _passedInput;
	NSError* _fakeError;
	unsigned long long _calledLoad;
	unsigned long long _calledAddOrUpdate;
	unsigned long long _calledRemove;
	unsigned long long _calledMove;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)reset;
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(void)configureError:(id)arg1 ;
-(void)configureResults:(id)arg1 ;
-(BOOL)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)passedInput;
-(unsigned long long)calledRequestLoad;
-(unsigned long long)calledAddOrUpdate;
-(unsigned long long)calledRemove;
-(unsigned long long)calledMove;
@end

