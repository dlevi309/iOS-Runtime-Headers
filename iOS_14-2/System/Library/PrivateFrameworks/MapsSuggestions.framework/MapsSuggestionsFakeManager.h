/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface MapsSuggestionsFakeManager : NSObject <MapsSuggestionsSourceDelegate> {

	ReadWriteQueue _readwrite;
	NSMutableArray* _allCurrentEntries;
	NSMutableDictionary* _currentEntriesPerSource;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (retain,readonly) NSMutableArray * allCurrentEntries; 
@property (retain,readonly) NSMutableDictionary * currentEntriesPerSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)detachSource:(id)arg1 ;
-(id)init;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(BOOL)waitWithTimeout:(double)arg1 ;
-(NSMutableArray *)allCurrentEntries;
-(NSMutableDictionary *)currentEntriesPerSource;
-(void)prepareWait;
-(BOOL)attachSource:(id)arg1 ;
@end

