/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPDistanceDescriptorProtocol.h>

@class VNSceneprint;

@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol> {

	VNSceneprint* _sceneprint;

}
+(BOOL)usePHAssetData;
+(id)descriptorWithImage:(CVBufferRef)arg1 ;
+(id)descriptorWithData:(id)arg1 ;
+(int)preferredPixelFormat;
-(id)serialize;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2 ;
@end

