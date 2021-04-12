/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLTexture, MTLDevice;
@class NSString;

@interface NTKSiderealCachedMTLTexture : NSObject {

	NSString* _cacheKey;
	id<MTLTexture> _mtlTexture;
	BOOL _isAlphaOnly;
	id<MTLDevice> _device;
	/*^block*/id _generateImageBlock;

}

@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) id<MTLTexture> texture; 
-(NSString *)cacheKey;
-(id<MTLTexture>)texture;
-(id)_alphaOnlyTextureWithCommandBuffer:(id)arg1 ;
-(id)_rgbaTextureWithCommandBuffer:(id)arg1 ;
-(id)initWithCachedImageKey:(id)arg1 isAlphaOnly:(BOOL)arg2 imageGenerationBlock:(/*^block*/id)arg3 ;
-(void)loadTextureWithCommandBuffer:(id)arg1 ;
@end

