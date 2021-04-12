/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLSyncContext, PLSyncableAsset;
@interface PLCPLFacePullSupport : NSObject {

	id<PLSyncContext> _syncContext;
	id<PLSyncableAsset> _currentAsset;

}
+(void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inSyncContext:(id)arg3 ;
+(id)_disjointSetsByAddingSet:(id)arg1 toSets:(id)arg2 ;
-(void)dealloc;
-(id)initWithSyncContext:(id)arg1 asset:(id)arg2 ;
-(void)applyFacesChangesFromAssetChange:(id)arg1 ;
-(long long)_policyForApplyingFaceChangesFromAssetChange:(id)arg1 ;
-(id)_applyAssetChange:(id)arg1 toExistingFaces:(id)arg2 withPolicy:(long long)arg3 ;
-(id)_createFaceFromFaceRef:(id)arg1 algorithmVersion:(int)arg2 ;
-(void)_finalizeFace:(id)arg1 withFaceRef:(id)arg2 applyDimensionAndState:(BOOL)arg3 ;
-(void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
-(void)_unlinkPersonIfVerifiedFromFace:(id)arg1 ;
-(BOOL)_canReassignFaceFromPerson:(id)arg1 toPerson:(id)arg2 shouldDedupePersons:(BOOL*)arg3 ;
-(void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2 ;
@end

