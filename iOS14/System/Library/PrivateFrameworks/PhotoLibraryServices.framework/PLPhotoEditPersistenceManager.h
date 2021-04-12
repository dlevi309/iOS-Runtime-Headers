/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPhotoEditPersistenceManager : NSObject
+(id)compositionControllerWithAdjustmentData:(id)arg1 asset:(id)arg2 outMasterWidth:(long long*)arg3 outMasterHeight:(long long*)arg4 ;
+(BOOL)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
-(id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id*)arg5 ;
-(void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long*)arg2 outMasterHeight:(long long*)arg3 ;
-(id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
@end

