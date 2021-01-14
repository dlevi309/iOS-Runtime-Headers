/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXVisualPositionsChangeDetails.h>

@interface PXFanningVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {

	long long _anchorFan;
	long long _anchorReload;

}
-(SCD_Struct_PX112)bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1 ;
-(id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 ;
-(SCD_Struct_PX112)bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1 ;
-(id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8 ;
@end

