/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSyncContext;
@interface PLCPLFacePushSupport : NSObject {

	id<PLSyncContext> _syncContext;

}
+(BOOL)isFaceSyncable:(id)arg1 ;
+(BOOL)_shouldPushBeingKeyFace:(id)arg1 ;
+(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3 ;
+(void)markSyncableFacesAsPushedInAsset:(id)arg1 ;
-(id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(id)cplFaceRefFromFace:(id)arg1 ;
-(BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1 ;
-(id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long*)arg2 ;
-(id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2 ;
-(id)rejectedPersonIdentifiersForFace:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 ;
-(void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 ;
@end

