/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol VCPDistanceDescriptorProtocol
@required
+(BOOL)usePHAssetData;
+(int)preferredPixelFormat;
+(id)descriptorWithImage:(CVBufferRef)arg1;
+(id)descriptorWithData:(id)arg1;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2;

@end

