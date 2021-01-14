/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)entityLimit;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_loadCurrentFullResults;
-(id)sortedBackingStoreForDisplayOrdering;
@end

