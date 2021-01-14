/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXResultRecord, PHFetchResultChangeDetails;

@interface PXResultRecordChangeDetails : NSObject {

	PXResultRecord* _resultRecordBeforeChanges;
	PXResultRecord* _resultRecordAfterChanges;
	PHFetchResultChangeDetails* _exposedFetchResultChangeDetails;
	PHFetchResultChangeDetails* _keyAssetsFetchResultChangeDetails;

}

@property (nonatomic,readonly) PXResultRecord * resultRecordBeforeChanges;                                  //@synthesize resultRecordBeforeChanges=_resultRecordBeforeChanges - In the implementation block
@property (nonatomic,readonly) PXResultRecord * resultRecordAfterChanges;                                   //@synthesize resultRecordAfterChanges=_resultRecordAfterChanges - In the implementation block
@property (nonatomic,readonly) PHFetchResultChangeDetails * exposedFetchResultChangeDetails;                //@synthesize exposedFetchResultChangeDetails=_exposedFetchResultChangeDetails - In the implementation block
@property (nonatomic,readonly) PHFetchResultChangeDetails * keyAssetsFetchResultChangeDetails;              //@synthesize keyAssetsFetchResultChangeDetails=_keyAssetsFetchResultChangeDetails - In the implementation block
+(id)resultRecordChangeDetailsFor:(id)arg1 withChange:(id)arg2 ;
-(PXResultRecord *)resultRecordAfterChanges;
-(PXResultRecord *)resultRecordBeforeChanges;
-(id)description;
-(PHFetchResultChangeDetails *)exposedFetchResultChangeDetails;
-(id)initWithResultRecordBeforeChanges:(id)arg1 resultRecordAfterChanges:(id)arg2 exposedFetchResultChangeDetails:(id)arg3 keyAssetsFetchResultChangeDetails:(id)arg4 ;
-(PHFetchResultChangeDetails *)keyAssetsFetchResultChangeDetails;
@end

