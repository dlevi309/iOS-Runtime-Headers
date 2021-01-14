/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol MTLDevice, MTLTexture;
@interface PXGCornerRadiusMask : NSObject {

	id<MTLDevice> _device;
	long long _texturePixelSide;
	double _screenScale;
	double _maxCornerRadius;
	long long _numberOfSlices;
	long long _byteSize;
	id<MTLTexture> _atomicTexture;

}

@property (retain) id<MTLTexture> atomicTexture;                        //@synthesize atomicTexture=_atomicTexture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) long long texturePixelSide;              //@synthesize texturePixelSide=_texturePixelSide - In the implementation block
@property (nonatomic,readonly) double screenScale;                      //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,readonly) double maxCornerRadius;                  //@synthesize maxCornerRadius=_maxCornerRadius - In the implementation block
@property (nonatomic,readonly) long long numberOfSlices;                //@synthesize numberOfSlices=_numberOfSlices - In the implementation block
@property (nonatomic,readonly) long long byteSize;                      //@synthesize byteSize=_byteSize - In the implementation block
+(id)_loadQueue;
+(id)cornerRadiusMaskForDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3 ;
-(id<MTLTexture>)texture;
-(id)init;
-(double)maxCornerRadius;
-(long long)numberOfSlices;
-(long long)byteSize;
-(double)screenScale;
-(id)initWithDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3 ;
-(void)_loadCornerRadiusTexture;
-(long long)texturePixelSide;
-(id<MTLTexture>)atomicTexture;
-(void)setAtomicTexture:(id<MTLTexture>)arg1 ;
@end

