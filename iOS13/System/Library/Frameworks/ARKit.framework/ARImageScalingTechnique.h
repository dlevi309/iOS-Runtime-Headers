/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@interface ARImageScalingTechnique : ARTechnique {

	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _scaledPixelBufferPool;
	BOOL _shouldUseScaleFactor;
	unsigned char _downscaleFactor;
	unsigned _conversionPixelFormatType;
	CGSize _scaledSize;

}

@property (nonatomic,readonly) CGSize scaledSize;                             //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) unsigned conversionPixelFormatType;              //@synthesize conversionPixelFormatType=_conversionPixelFormatType - In the implementation block
@property (nonatomic,readonly) unsigned char downscaleFactor;                 //@synthesize downscaleFactor=_downscaleFactor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)scaledSize;
-(id)processData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(id)initWithScaledSize:(CGSize)arg1 ;
-(void)setConversionPixelFormatType:(unsigned)arg1 ;
-(unsigned char)downscaleFactor;
-(id)initWithDownscaleFactor:(unsigned char)arg1 ;
-(unsigned)conversionPixelFormatType;
@end

