/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUAuxiliaryImage.h>

@class AVPortraitEffectsMatte, NSString;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage> {

	long long _auxiliaryImageType;
	AVPortraitEffectsMatte* _avPortraitEffectsMatte;

}

@property (readonly) AVPortraitEffectsMatte * avPortraitEffectsMatte;              //@synthesize avPortraitEffectsMatte=_avPortraitEffectsMatte - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long auxiliaryImageType;                                 //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)auxiliaryImageType;
-(id)underlyingAVPortraitEffectsMatte;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)cvPixelBufferRef;
-(id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1 ;
-(AVPortraitEffectsMatte *)avPortraitEffectsMatte;
@end

