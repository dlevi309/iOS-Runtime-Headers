/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPOperation.h>

@class FPXSpotlightIndexer, FPXDomainContext, FPXIndexState, NSArray, NSData, NSError;

@interface FPXFetchOneBatchFromWorkingSetOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	FPXIndexState* _indexState;
	BOOL _hasMore;
	NSArray* _updatedItems;
	NSArray* _deletedItemIDs;
	NSData* _nextAnchor;
	NSError* _error;

}

@property (nonatomic,retain) NSArray * updatedItems;                //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,retain) NSArray * deletedItemIDs;              //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (nonatomic,retain) NSData * nextAnchor;                   //@synthesize nextAnchor=_nextAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasMore;                          //@synthesize hasMore=_hasMore - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
-(BOOL)hasMore;
-(NSData *)nextAnchor;
-(void)setError:(NSError *)arg1 ;
-(id)initWithIndexer:(id)arg1 queue:(id)arg2 ;
-(NSArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSArray *)arg1 ;
-(void)setNextAnchor:(NSData *)arg1 ;
-(NSError *)error;
-(NSArray *)updatedItems;
-(void)setUpdatedItems:(NSArray *)arg1 ;
-(void)main;
-(id)observerItemID;
-(void)setHasMore:(BOOL)arg1 ;
-(void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(BOOL)arg3 state:(id)arg4 error:(id)arg5 ;
-(void)_indexOnePageFromPage:(id)arg1 ;
-(void)_indexOneChangesBatchFromChangeToken:(id)arg1 ;
@end

