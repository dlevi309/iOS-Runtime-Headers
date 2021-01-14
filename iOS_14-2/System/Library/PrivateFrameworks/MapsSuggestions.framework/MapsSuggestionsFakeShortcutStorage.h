/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setChangeHandler:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)uniqueName;
-(char)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)configureError:(id)arg1 ;
-(void)configureResults:(id)arg1 ;
-(char)removeShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcutToBack:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)reset;
-(char)loadAllShortcutsWithHandler:(/*^block*/id)arg1 ;
-(id)passedInput;
-(unsigned long long)calledRequestLoad;
-(unsigned long long)calledAddOrUpdate;
-(unsigned long long)calledRemove;
-(unsigned long long)calledMove;
-(char)moveShortcutToFront:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
-(char)addOrUpdateShortcuts:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

