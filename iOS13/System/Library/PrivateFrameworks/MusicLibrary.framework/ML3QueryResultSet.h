/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class ML3QueryResultSet_BackingStore, ML3Query, NSMutableArray, NSObject;

@interface ML3QueryResultSet : NSObject <NSCopying> {

	ML3QueryResultSet_BackingStore* _backingStore;
	ML3Query* _query;
	long long _revision;
	long long _localRevision;
	BOOL _supportsIncrementalUpdate;
	NSMutableArray* _updateToLibraryCurrentRevisionCompletionBlocks;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _fixedPriorityQueue;

}

@property (nonatomic,readonly) ML3Query * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long revision;                    //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) long long localRevision;               //@synthesize localRevision=_localRevision - In the implementation block
-(id)sectionIndexTitles;
-(void)enumerateSectionHeadersUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(ML3Query *)query;
-(id)initWithQuery:(id)arg1 ;
-(long long)revision;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)entityLimit;
-(BOOL)updateToLibraryCurrentRevision;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(long long)localRevision;
-(id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2 ;
-(void)_onQueueAddUpdateFinishedBlock:(/*^block*/id)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1 ;
-(void)_loadCurrentFullResults;
-(void)_mergeChangesWithFromNewPIDs:(const vector<long long, std::__1::allocator<long long> >*)arg1 changedPIDs:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg2 ;
@end

