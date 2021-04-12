/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseConnection, ML3MusicLibrary, NSMutableDictionary, NSMutableArray, NSData;

@interface ML3SortMap : NSObject {

	ML3DatabaseConnection* _connection;
	ML3MusicLibrary* _library;
	NSMutableDictionary* _nameOrders;
	NSMutableArray* _entries;
	NSData* _minSortKey;
	NSData* _maxSortKey;
	long long _smallestNameDelta;
	BOOL _preloadNames;

}
-(id)initWithConnection:(id)arg1 library:(id)arg2 preloadNames:(BOOL)arg3 ;
-(BOOL)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2 ;
-(BOOL)commitUpdates;
-(id)nameOrders;
-(id)_sortedNameEntriesToInsertForNames:(id)arg1 ;
-(BOOL)_insertSortedNameEntriesIntoSortMap:(id)arg1 ;
-(BOOL)loadExistingSortedEntries;
-(long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(iPhoneSortKeyBuilderRef)arg2 ;
-(long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned long long)arg3 ;
-(BOOL)attemptInsertStringsIntoSortMap:(id)arg1 ;
-(BOOL)commitFailedInsertedStrings:(id)arg1 ;
-(id)_sortKeyString:(id)arg1 ;
@end

