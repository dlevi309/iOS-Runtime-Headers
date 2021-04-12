/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSyncContext;
@interface PLCPLFacePushSupport : NSObject {

	id<PLSyncContext> _syncContext;

}
+(void)markSyncableFacesAsPushedInAsset:(id)arg1 ;
+(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(BOOL)_shouldPushBeingKeyFace:(id)arg1 ;
+(BOOL)isFaceSyncable:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 ;
-(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 ;
-(id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1 ;
-(id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2 ;
-(id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(id)cplFaceRefFromFace:(id)arg1 ;
-(id)rejectedPersonIdentifiersForFace:(id)arg1 ;
@end

