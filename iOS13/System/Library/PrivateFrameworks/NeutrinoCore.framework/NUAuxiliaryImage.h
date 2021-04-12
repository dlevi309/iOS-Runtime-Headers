/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUAuxiliaryImage <NSObject>
@property (readonly) long long auxiliaryImageType; 
@optional
-(id)underlyingAVDepthData;
-(id)underlyingAVPortraitEffectsMatte;
-(id)underlyingAVSemanticSegmentationMatte;

@required
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1;
-(long long)auxiliaryImageType;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2;
-(CVBufferRef)cvPixelBufferRef;

@end

