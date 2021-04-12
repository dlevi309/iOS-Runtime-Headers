/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLResourceChooser : NSObject
+(id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 allowMetadataSnapshot:(BOOL)arg3 forceLarge:(BOOL)arg4 outFilePath:(id*)arg5 outImageType:(long long*)arg6 ;
+(unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id*)arg3 imageType:(long long*)arg4 ;
+(id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 format:(id)arg2 forceLarge:(BOOL)arg3 allowMetadataSnapshot:(BOOL)arg4 outFilePath:(id*)arg5 outImageType:(long long*)arg6 ;
+(id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id*)arg3 outImageType:(long long*)arg4 ;
+(id)_originalItemFromAllItems:(id)arg1 ;
+(id)_penultimateItemFromAllItems:(id)arg1 ;
+(id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id*)arg3 ;
+(id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id*)arg3 ;
+(void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long*)arg3 localCPLResourceType:(unsigned long long*)arg4 localCPLResourceFilePath:(id*)arg5 fileReservation:(id*)arg6 ;
+(long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(BOOL)arg2 requiresUnadjustedVersion:(BOOL)arg3 ;
-(id)init;
@end

