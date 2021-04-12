/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSIndexSet, NSSet;

@interface PXFeedSectionInfosChange : NSObject {

	BOOL _shouldReload;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _updatedIndexes;
	NSSet* _sectionInfosWithCommentChanges;
	NSSet* _updatedAssets;

}

@property (assign,nonatomic) BOOL shouldReload;                                   //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexes;                         //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedIndexes;                        //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * updatedIndexes;                         //@synthesize updatedIndexes=_updatedIndexes - In the implementation block
@property (nonatomic,retain) NSSet * sectionInfosWithCommentChanges;              //@synthesize sectionInfosWithCommentChanges=_sectionInfosWithCommentChanges - In the implementation block
@property (nonatomic,retain) NSSet * updatedAssets;                               //@synthesize updatedAssets=_updatedAssets - In the implementation block
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(NSSet *)sectionInfosWithCommentChanges;
-(void)setSectionInfosWithCommentChanges:(NSSet *)arg1 ;
-(void)setUpdatedIndexes:(NSIndexSet *)arg1 ;
-(void)setInsertedIndexes:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexes:(NSIndexSet *)arg1 ;
-(BOOL)shouldReload;
-(NSSet *)updatedAssets;
-(void)setShouldReload:(BOOL)arg1 ;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
-(NSIndexSet *)updatedIndexes;
@end

