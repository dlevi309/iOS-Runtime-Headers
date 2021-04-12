/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSImage : NSObject {

	MPSDevice* _device;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _featureChannelsLayout;
	unsigned long long _featureChannelFormat;
	unsigned long long _numberOfImages;
	unsigned long long _textureType;
	NSString* _label;
	MPSPixelInfo _pixelInfo;
	MPSImage* _parent;
	MPSAutoTexture* _texture;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long textureType; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long usage; 
@property (nonatomic,readonly) unsigned long long featureChannelFormat;               //@synthesize featureChannelFormat=_featureChannelFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelSize; 
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) MPSImage * parent;                              //@synthesize parent=_parent - In the implementation block
+(id)defaultAllocator;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(MPSImage *)parent;
-(unsigned long long)width;
-(unsigned long long)height;
-(id<MTLDevice>)device;
-(id)debugQuickLookObject;
-(unsigned long long)textureType;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)pixelFormat;
-(unsigned long long)usage;
-(id<MTLTexture>)texture;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(unsigned long long)featureChannels;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(unsigned long long)precision;
-(unsigned long long)pixelSize;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(unsigned long long)resourceSize;
-(unsigned long long)featureChannelsLayout;
-(id)batchRepresentation;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 ;
-(id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 featureChannelFormat:(unsigned long long)arg4 onDevice:(id)arg5 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(id)batchRepresentationWithSubRange:(NSRange)arg1 ;
-(unsigned long long)getPixelChannelSize;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerColumn:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(unsigned long long)arg5 region:(SCD_Struct_MP16)arg6 featureChannelInfo:(SCD_Struct_MP2)arg7 imageIndex:(unsigned long long)arg8 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP16)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP16)arg4 featureChannelInfo:(SCD_Struct_MP2)arg5 imageIndex:(unsigned long long)arg6 ;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(id)subImageWithFeatureChannelRange:(NSRange)arg1 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP16)arg4 featureChannelInfo:(SCD_Struct_MP2)arg5 imageIndex:(unsigned long long)arg6 ;
-(unsigned long long)featureChannelFormat;
@end

