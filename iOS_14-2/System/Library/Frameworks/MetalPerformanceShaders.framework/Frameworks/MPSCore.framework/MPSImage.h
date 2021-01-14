/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)precision;
-(id)debugQuickLookObject;
-(id<MTLTexture>)texture;
-(unsigned long long)textureType;
-(unsigned long long)usage;
-(unsigned long long)width;
-(MPSImage *)parent;
-(id)init;
-(unsigned long long)pixelFormat;
-(id)debugDescription;
-(unsigned long long)height;
-(unsigned long long)resourceSize;
-(id<MTLDevice>)device;
-(id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 featureChannelFormat:(unsigned long long)arg4 onDevice:(id)arg5 ;
-(id)batchRepresentationWithSubRange:(NSRange)arg1 ;
-(unsigned long long)getPixelChannelSize;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerColumn:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(unsigned long long)arg5 region:(SCD_Struct_MP1)arg6 featureChannelInfo:(SCD_Struct_MP5)arg7 imageIndex:(unsigned long long)arg8 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP1)arg4 featureChannelInfo:(SCD_Struct_MP5)arg5 imageIndex:(unsigned long long)arg6 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP1)arg4 featureChannelInfo:(SCD_Struct_MP5)arg5 imageIndex:(unsigned long long)arg6 ;
-(unsigned long long)numberOfImages;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(unsigned long long)featureChannelFormat;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)featureChannels;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(unsigned long long)featureChannelsLayout;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP1)arg5 featureChannelInfo:(SCD_Struct_MP5)arg6 imageIndex:(unsigned long long)arg7 ;
-(id)batchRepresentation;
-(unsigned long long)pixelSize;
-(id)subImageWithFeatureChannelRange:(NSRange)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

