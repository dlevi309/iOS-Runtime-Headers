/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(id)debugQuickLookObject;
-(unsigned long long)pixelFormat;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(unsigned long long)storageMode;
-(unsigned long long)featureChannels;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(void)setNumberOfImages:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(void)setFeatureChannelsLayout:(unsigned long long)arg1 ;
-(void)setFeatureChannels:(unsigned long long)arg1 ;
-(void)setChannelFormat:(unsigned long long)arg1 ;
-(unsigned long long)featureChannelsLayout;
-(id)newTextureDescriptor;
-(unsigned long long)channelFormat;
@end

