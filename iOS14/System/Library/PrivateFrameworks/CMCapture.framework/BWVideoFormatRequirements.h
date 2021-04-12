/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements {

	unsigned long long _width;
	unsigned long long _height;
	NSArray* _supportedPixelFormats;
	NSArray* _preferredPixelFormats;
	NSArray* _supportedColorSpaceProperties;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _widthAlignment;
	unsigned long long _heightAlignment;
	NSArray* _supportedCacheModes;
	BOOL _prewireBuffers;
	BOOL _memoryPoolUseAllowed;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSArray * supportedPixelFormats;                        //@synthesize supportedPixelFormats=_supportedPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * preferredPixelFormats;                        //@synthesize preferredPixelFormats=_preferredPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * supportedColorSpaceProperties;                //@synthesize supportedColorSpaceProperties=_supportedColorSpaceProperties - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long widthAlignment;                    //@synthesize widthAlignment=_widthAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long heightAlignment;                   //@synthesize heightAlignment=_heightAlignment - In the implementation block
@property (nonatomic,copy) NSArray * supportedCacheModes;                          //@synthesize supportedCacheModes=_supportedCacheModes - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
+(void)initialize;
+(id)cacheModesForOptimizedDisplayAccess;
+(id)cacheModesForOptimizedHWAccess;
+(id)cacheModesForCacheProfile:(int)arg1 ;
+(id)cacheModesForOptimizedCPUAccess;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)_resolvePixelFormat;
-(unsigned long long)bytesPerRowAlignment;
-(BOOL)prewireBuffers;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(BOOL)memoryPoolUseAllowed;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setWidthAlignment:(unsigned long long)arg1 ;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(void)setSupportedPixelFormats:(NSArray *)arg1 ;
-(unsigned)mediaType;
-(id)init;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(NSArray *)preferredPixelFormats;
-(unsigned long long)planeAlignment;
-(void)setSupportedCacheModes:(NSArray *)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(NSArray *)supportedPixelFormats;
-(id)debugDescription;
-(NSArray *)supportedColorSpaceProperties;
-(unsigned long long)height;
-(void)setSupportedColorSpaceProperties:(NSArray *)arg1 ;
-(NSArray *)supportedCacheModes;
-(id)description;
-(void)setHeightAlignment:(unsigned long long)arg1 ;
-(unsigned long long)widthAlignment;
-(void)setPreferredPixelFormats:(NSArray *)arg1 ;
-(Class)formatClass;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)heightAlignment;
@end

