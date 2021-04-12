/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


#import <PhotoVision/PhotoVision-Structs.h>
@interface PVFaceCropUtils : NSObject
+(CGImageMetadataRef)createOutputMetadataFromDictionary:(id)arg1 ;
+(id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1 ;
+(id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(CGRect)arg1 andCropRegion:(CGRect)arg2 andGroupingIdentifier:(id)arg3 ;
+(id)newDictionaryWithCGImageSourceOptions;
+(id)newFaceCropFromCGImageSource:(const CGImageSourceRef)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(id)newFaceCropFromImageData:(id)arg1 withFaceRect:(CGRect)arg2 groupingIdentifier:(id)arg3 error:(id*)arg4 ;
+(BOOL)isValidFaceCrop:(id)arg1 ;
+(CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id*)arg2 ;
+(CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id*)arg2 ;
@end

