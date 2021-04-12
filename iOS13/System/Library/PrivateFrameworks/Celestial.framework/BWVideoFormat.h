/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

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
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned)arg3 sourceDimensions:(SCD_Struct_BW19)arg4 requestedPixelFormat:(unsigned)arg5 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW19)arg3 requestedPixelFormat:(unsigned)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(unsigned)mediaType;
-(unsigned long long)extendedHeight;
-(void)setExtendedHeight:(unsigned long long)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(NSDictionary *)pixelBufferAttributes;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(int)colorSpaceProperties;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(unsigned)cacheMode;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)planeAlignment;
-(BOOL)memoryPoolUseAllowed;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(unsigned long long)extendedWidth;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(BOOL)prewireBuffers;
-(id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(BOOL)arg3 ;
-(void)setExtendedWidth:(unsigned long long)arg1 ;
-(void)setCacheMode:(unsigned)arg1 ;
@end

