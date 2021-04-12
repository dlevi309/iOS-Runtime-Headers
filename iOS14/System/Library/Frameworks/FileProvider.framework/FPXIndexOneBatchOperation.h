/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPOperation.h>

@class FPXSpotlightIndexer, FPXDomainContext, NSArray, NSData, NSError;

@interface FPXIndexOneBatchOperation : FPOperation {

	FPXSpotlightIndexer* _indexer;
	FPXDomainContext* _domainContext;
	BOOL _isInitialIndexing;
	BOOL _isOutOfBandIndexing;
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
-(NSData *)nextAnchor;
-(NSError *)fetchError;
-(id)initWithIndexer:(id)arg1 isInitialIndexing:(BOOL)arg2 isOutOfBandIndexing:(BOOL)arg3 queue:(id)arg4 ;
-(NSArray *)deletedItemIDs;
-(void)setDeletedItemIDs:(NSArray *)arg1 ;
-(void)setNextAnchor:(NSData *)arg1 ;
-(void)setCanIndexFromCurrentState:(id)arg1 ;
-(NSArray *)updatedItems;
-(void)setUpdatedItems:(NSArray *)arg1 ;
-(void)setFetchError:(NSError *)arg1 ;
-(void)main;
-(id)canIndexFromCurrentState;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

