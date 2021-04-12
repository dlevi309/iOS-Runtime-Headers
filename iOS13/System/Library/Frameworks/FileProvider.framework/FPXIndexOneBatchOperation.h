/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPOperation.h>

@class FPXSpotlightIndexer, FPXDomainContext, NSArray, NSData, NSError;

@interface FPXIndexOneBatchOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	BOOL _isInitialIndexing;
	unsigned long long _logSection;
	NSArray* _updatedItems;
	NSArray* _deletedItemIDs;
	NSData* _nextAnchor;
	NSError* _fetchError;
	/*^block*/id _canIndexFromCurrentState;

}

@property (nonatomic,retain) NSArray * updatedItems;                 //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,retain) NSArray * deletedItemIDs;               //@synthesize deletedItemIDs=_deletedItemIDs - In the implementation block
@property (nonatomic,retain) NSData * nextAnchor;                    //@synthesize nextAnchor=_nextAnchor - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                   //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,copy) id canIndexFromCurrentState;              //@synthesize canIndexFromCurrentState=_canIndexFromCurrentState - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithIndexer:(id)arg1 isInitialIndexing:(BOOL)arg2 queue:(id)arg3 ;
-(NSArray *)updatedItems;
-(void)setUpdatedItems:(NSArray *)arg1 ;
-(NSArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSArray *)arg1 ;
-(NSData *)nextAnchor;
-(void)setNextAnchor:(NSData *)arg1 ;
-(void)setFetchError:(NSError *)arg1 ;
-(void)setCanIndexFromCurrentState:(id)arg1 ;
-(NSError *)fetchError;
-(id)canIndexFromCurrentState;
@end

