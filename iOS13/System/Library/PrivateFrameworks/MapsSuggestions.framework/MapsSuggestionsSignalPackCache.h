/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject {

	NSMutableArray* _mapItems;
	NSMutableArray* _signalPacks;
	NSMutableArray* _entries;

}
-(id)init;
-(unsigned long long)_count;
-(BOOL)insertMapItem:(id)arg1 signalPack:(id)arg2 entry:(id)arg3 ;
-(id)signalPackForMapItem:(id)arg1 ;
-(void)_removeExpiredEntries;
-(BOOL)_popRow;
-(id)_containsSignalPackForMapItem:(id)arg1 ;
-(void)_removeObjectsAtIndex:(unsigned long long)arg1 ;
@end

