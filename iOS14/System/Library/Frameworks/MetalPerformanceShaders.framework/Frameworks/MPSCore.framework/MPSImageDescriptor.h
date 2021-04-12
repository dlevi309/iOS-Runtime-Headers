/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSImageDescriptor : NSObject <NSCopying> {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _numberOfImages;
	unsigned long long _channelFormat;
	unsigned long long _cacheMode;
	unsigned long long _storageMode;
	unsigned long long _usage;
	unsigned long long _featureChannelsLayout;
	unsigned long long _featureChannelFormat;
	unsigned long long _cpuCacheMode;

}

@property (assign,nonatomic) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (assign,nonatomic) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (assign,nonatomic) unsigned long long channelFormat;                      //@synthesize channelFormat=_channelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long cpuCacheMode;                       //@synthesize cpuCacheMode=_cpuCacheMode - In the implementation block
@property (assign,nonatomic) unsigned long long storageMode;                        //@synthesize storageMode=_storageMode - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                              //@synthesize usage=_usage - In the implementation block
+(id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6 ;
+(id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(id)debugQuickLookObject;
-(unsigned long long)cpuCacheMode;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(unsigned long long)width;
-(id)init;
-(unsigned long long)storageMode;
-(unsigned long long)pixelFormat;
-(void)setFeatureChannelsLayout:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(id)debugDescription;
-(unsigned long long)height;
-(id)newTextureDescriptor;
-(void)setFeatureChannels:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(void)setChannelFormat:(unsigned long long)arg1 ;
-(unsigned long long)channelFormat;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(unsigned long long)featureChannels;
-(unsigned long long)featureChannelsLayout;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

