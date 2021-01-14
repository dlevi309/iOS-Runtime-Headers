/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHFetchResult, NSPredicate;

@interface PXResultTuple : NSObject {

	BOOL _fetchedWithReverseSortOrder;
	PHFetchResult* _fetchResult;
	PHFetchResult* _curatedFetchResult;
	PHFetchResult* _keyAssetsFetchResult;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;                       //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) BOOL fetchedWithReverseSortOrder;                  //@synthesize fetchedWithReverseSortOrder=_fetchedWithReverseSortOrder - In the implementation block
@property (nonatomic,readonly) PHFetchResult * curatedFetchResult;                //@synthesize curatedFetchResult=_curatedFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetsFetchResult;              //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                     //@synthesize filterPredicate=_filterPredicate - In the implementation block
-(NSPredicate *)filterPredicate;
-(PHFetchResult *)fetchResult;
-(id)resultTupleUpdatedWithChange:(id)arg1 ;
-(PHFetchResult *)keyAssetsFetchResult;
-(id)description;
-(id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(BOOL)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4 filterPredicate:(id)arg5 ;
-(PHFetchResult *)curatedFetchResult;
-(BOOL)fetchedWithReverseSortOrder;
@end

