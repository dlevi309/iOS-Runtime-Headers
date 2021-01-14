/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) long long auxiliaryImageType;                                 //@synthesize auxiliaryImageType=_auxiliaryImageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)cvPixelBufferRef;
-(unsigned)pixelFormatType;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(long long)auxiliaryImageType;
-(id)underlyingAVPortraitEffectsMatte;
-(id)auxiliaryImageByApplyingExifOrientation:(unsigned)arg1 ;
-(id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)arg1 ;
-(AVPortraitEffectsMatte *)avPortraitEffectsMatte;
@end

