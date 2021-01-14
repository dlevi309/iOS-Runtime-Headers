/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCTagsFetchOperationDelegate;
@class NSArray, FCHeldRecords, FCTagRecordSource, FCAssetManager;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation {

	BOOL _includeChildren;
	BOOL _includeParents;
	BOOL _overrideTargetsCachePolicy;
	BOOL _overrideChildrenCachePolicy;
	unsigned long long _targetsCachePolicy;
	double _targetsMaximumCachedAge;
	unsigned long long _childrenCachePolicy;
	double _childrenMaximumCachedAge;
	NSArray* _tagIDs;
	FCHeldRecords* _heldTagRecords;
	FCHeldRecords* _heldParentTagRecords;
	FCHeldRecords* _heldChildTagRecords;
	FCTagRecordSource* _tagRecordSource;
	FCAssetManager* _assetManager;
	id<FCTagsFetchOperationDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * tagIDs;                                                //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldTagRecords;                                //@synthesize heldTagRecords=_heldTagRecords - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldParentTagRecords;                          //@synthesize heldParentTagRecords=_heldParentTagRecords - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldChildTagRecords;                           //@synthesize heldChildTagRecords=_heldChildTagRecords - In the implementation block
@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;                           //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) FCAssetManager * assetManager;                                 //@synthesize assetManager=_assetManager - In the implementation block
@property (assign,nonatomic,__weak) id<FCTagsFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL includeChildren;                                          //@synthesize includeChildren=_includeChildren - In the implementation block
@property (assign,nonatomic) BOOL includeParents;                                           //@synthesize includeParents=_includeParents - In the implementation block
@property (assign) BOOL overrideTargetsCachePolicy;                                         //@synthesize overrideTargetsCachePolicy=_overrideTargetsCachePolicy - In the implementation block
@property (assign) unsigned long long targetsCachePolicy;                                   //@synthesize targetsCachePolicy=_targetsCachePolicy - In the implementation block
@property (assign) double targetsMaximumCachedAge;                                          //@synthesize targetsMaximumCachedAge=_targetsMaximumCachedAge - In the implementation block
@property (assign) BOOL overrideChildrenCachePolicy;                                        //@synthesize overrideChildrenCachePolicy=_overrideChildrenCachePolicy - In the implementation block
@property (assign) unsigned long long childrenCachePolicy;                                  //@synthesize childrenCachePolicy=_childrenCachePolicy - In the implementation block
@property (assign) double childrenMaximumCachedAge;                                         //@synthesize childrenMaximumCachedAge=_childrenMaximumCachedAge - In the implementation block
-(FCHeldRecords *)heldTagRecords;
-(void)setTagIDs:(NSArray *)arg1 ;
-(id)fetchParentTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)includeParents;
-(void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2 ;
-(void)setHeldTagRecords:(FCHeldRecords *)arg1 ;
-(id<FCTagsFetchOperationDelegate>)delegate;
-(id)fetchTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)setTargetsCachePolicy:(unsigned long long)arg1 ;
-(void)setAssetManager:(FCAssetManager *)arg1 ;
-(NSArray *)tagIDs;
-(void)setIncludeParents:(BOOL)arg1 ;
-(FCTagRecordSource *)tagRecordSource;
-(double)targetsMaximumCachedAge;
-(void)setDelegate:(id<FCTagsFetchOperationDelegate>)arg1 ;
-(FCHeldRecords *)heldParentTagRecords;
-(void)setHeldChildTagRecords:(FCHeldRecords *)arg1 ;
-(void)setOverrideChildrenCachePolicy:(BOOL)arg1 ;
-(void)setHeldParentTagRecords:(FCHeldRecords *)arg1 ;
-(double)childrenMaximumCachedAge;
-(BOOL)overrideTargetsCachePolicy;
-(void)setChildrenMaximumCachedAge:(double)arg1 ;
-(BOOL)overrideChildrenCachePolicy;
-(void)setChildrenCachePolicy:(unsigned long long)arg1 ;
-(id)initWithTagIDs:(id)arg1 tagRecordSource:(id)arg2 assetManager:(id)arg3 delegate:(id)arg4 ;
-(FCAssetManager *)assetManager;
-(id)completeFetchOperation;
-(void)setOverrideTargetsCachePolicy:(BOOL)arg1 ;
-(id)fetchChildTagRecordsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)childrenCachePolicy;
-(void)setIncludeChildren:(BOOL)arg1 ;
-(void)setTargetsMaximumCachedAge:(double)arg1 ;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(BOOL)includeChildren;
-(unsigned long long)targetsCachePolicy;
-(FCHeldRecords *)heldChildTagRecords;
@end

