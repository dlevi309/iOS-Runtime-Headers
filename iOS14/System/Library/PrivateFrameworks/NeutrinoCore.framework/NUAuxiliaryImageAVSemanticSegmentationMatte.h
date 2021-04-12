/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class AVSemanticSegmentationMatte, NSString;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	AVSemanticSegmentationMatte* _avSemanticSegmentationMatte;

}

@property (readonly) AVSemanticSegmentationMatte * avSemanticSegmentationMatte;              //@synthesize avSemanticSegmentationMatte=_avSemanticSegmentationMatte - In the implementation block
@property (readonly) long long auxiliaryImageType;                                           //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)cvPixelBufferRef;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)auxiliaryImageType;
-(id)underlyingAVSemanticSegmentationMatte;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)arg1 ;
-(AVSemanticSegmentationMatte *)avSemanticSegmentationMatte;
@end

