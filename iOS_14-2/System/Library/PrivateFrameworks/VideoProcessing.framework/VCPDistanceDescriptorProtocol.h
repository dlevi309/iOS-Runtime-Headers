/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol VCPDistanceDescriptorProtocol
@required
+(BOOL)usePHAssetData;
+(id)descriptorWithImage:(CVBufferRef)arg1;
+(id)descriptorWithData:(id)arg1;
+(int)preferredPixelFormat;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2;

@end

