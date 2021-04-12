/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {

	BOOL _needsSorting;
	BOOL _needsReversing;
	ML3QueryResultSet_BackingStore* _sortedBackingStore;
	long long _containerPID;
	unsigned long long _entityLimit;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)entityLimit;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_loadCurrentFullResults;
-(id)sortedBackingStoreForDisplayOrdering;
@end

