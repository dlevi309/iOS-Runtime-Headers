/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@interface PHAPhotoVisionPhotoKitBridge : NSObject
+(id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2 ;
+(id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2 ;
+(void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2 ;
+(id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2 ;
+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)pvFaceprintFromPHFaceprint:(id)arg1 ;
+(id)phFaceCropFromPVFaceCrop:(id)arg1 withFetchOptions:(id)arg2 ;
+(id)phFaceCropsFromPVFaceCrops:(id)arg1 withFetchOptions:(id)arg2 ;
+(id)pvFaceCropFromPHFaceCrop:(id)arg1 ;
+(id)phFaceprintFromPVFaceprint:(id)arg1 ;
+(id)pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2 ;
+(id)vnFaceAttributeAgeToPHFaceAgeTypeMap;
+(unsigned short)phFaceAgeTypeFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeSexToPHFaceSexTypeMap;
+(unsigned short)phFaceSexFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeEyesToPHEyesStateMap;
+(unsigned short)phFaceEyesStateFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeSmileToPHFaceSmileTypeMap;
+(unsigned short)phFaceSmileTypeFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+(unsigned short)phFaceFacialHairTypeFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+(unsigned short)phFaceHairColorTypeFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeBaldToPHFaceBaldTypeMap;
+(unsigned short)phFaceBaldTypeFromPVFace:(id)arg1 ;
+(id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+(unsigned short)phFaceGlassesTypeFromPVFace:(id)arg1 ;
@end

