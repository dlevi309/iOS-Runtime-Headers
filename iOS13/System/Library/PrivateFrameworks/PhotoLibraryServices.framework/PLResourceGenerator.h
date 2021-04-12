/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLResourceGenerator : NSObject
+(id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg1 ;
+(id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)expectedLocalResourceRecipesForAsset:(id)arg1 versions:(id)arg2 ;
+(id)locallyUnavailableRecipesFromRecipes:(id)arg1 versions:(id)arg2 asset:(id)arg3 ;
+(void)_continueGeneratingResourcesForAsset:(id)arg1 versions:(id)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 remainingRecipes:(id)arg5 storedRecipes:(id)arg6 attemptedRecipes:(id)arg7 errorsEncountered:(id)arg8 progress:(id)arg9 completion:(/*^block*/id)arg10 ;
+(id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg1 versions:(id)arg2 assetHasAdjustments:(BOOL)arg3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)arg4 assetWidth:(long long)arg5 assetHeight:(long long)arg6 assetKind:(short)arg7 assetkindSubtype:(short)arg8 ;
@end

