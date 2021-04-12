/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPhotoEditPersistenceManager : NSObject
+(BOOL)validateAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(id)dataFromCompositionController:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4 ;
-(id)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 importProperties:(id)arg4 error:(id*)arg5 ;
-(id)loadCompositionFrom:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4 ;
-(void)loadMasterDimensionsFromPhotoEditData:(id)arg1 outMasterWidth:(long long*)arg2 outMasterHeight:(long long*)arg3 ;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
@end

