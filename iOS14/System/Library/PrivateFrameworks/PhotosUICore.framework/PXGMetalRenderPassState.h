/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol MTLBuffer, MTLDevice;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGMetalRenderPassState : NSObject {

	unsigned* _spriteIndexes;
	{?=}* _textureInfos;
	id<MTLBuffer> _spriteIndexesMetalBuffer;
	id<MTLBuffer> _spriteTextureInfosMetalBuffer;
	id<MTLDevice> _device;
	long long _capacity;

}

@property (nonatomic,readonly) id<MTLDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) long long capacity;                                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned* spriteIndexes;                                  //@synthesize spriteIndexes=_spriteIndexes - In the implementation block
@property (nonatomic,readonly) {? textureInfos;                                          //@synthesize textureInfos=_textureInfos - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> spriteIndexesMetalBuffer;                   //@synthesize spriteIndexesMetalBuffer=_spriteIndexesMetalBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> spriteTextureInfosMetalBuffer;              //@synthesize spriteTextureInfosMetalBuffer=_spriteTextureInfosMetalBuffer - In the implementation block
-(long long)capacity;
-(id<MTLDevice>)device;
-(id<MTLBuffer>)spriteTextureInfosMetalBuffer;
-(id)description;
-(unsigned*)spriteIndexes;
-(id)initWithDevice:(id)arg1 capacity:(long long)arg2 ;
-(id<MTLBuffer>)spriteIndexesMetalBuffer;
-({?)textureInfos;
@end

