/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFormat.h>

@class NSDictionary;

@interface BWVideoFormat : BWFormat {

	unsigned long long _width;
	unsigned long long _height;
	unsigned _pixelFormat;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _extendedWidth;
	unsigned long long _extendedHeight;
	unsigned _cacheMode;
	BOOL _prewireBuffers;
	BOOL _memoryPoolUseAllowed;
	NSDictionary* _pixelBufferAttributes;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                 //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long extendedWidth;                     //@synthesize extendedWidth=_extendedWidth - In the implementation block
@property (assign,nonatomic) unsigned long long extendedHeight;                    //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) unsigned cacheMode;                                   //@synthesize cacheMode=_cacheMode - In the implementation block
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes;               //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                           //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
+(void)initialize;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned)arg3 sourceDimensions:(SCD_Struct_BW2)arg4 requestedPixelFormat:(unsigned)arg5 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW2)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 printErrors:(BOOL)arg3 ;
+(id)colorInfoWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW2)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1 ;
+(int)colorSpacePropertiesForPixelBufferAttachments:(id)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRowAlignment;
-(BOOL)prewireBuffers;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(BOOL)memoryPoolUseAllowed;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(BOOL)arg3 ;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(unsigned)mediaType;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned long long)planeAlignment;
-(int)colorSpaceProperties;
-(unsigned)pixelFormat;
-(BOOL)isHLGColorSpace;
-(void)setExtendedWidth:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)height;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setExtendedHeight:(unsigned long long)arg1 ;
-(id)description;
-(void)setCacheMode:(unsigned)arg1 ;
-(unsigned long long)extendedWidth;
-(unsigned long long)extendedHeight;
-(unsigned)cacheMode;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

