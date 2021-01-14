/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NUVideoSourceNode;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	NUVideoSourceNode* _videoSourceNode;
	SCD_Struct_NU6 _frameTime;
	CVBufferRef _pixelBuffer;

}
-(void)dealloc;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)initWithVideoSource:(id)arg1 time:(SCD_Struct_NU6)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)initWithSettings:(id)arg1 orientation:(long long)arg2 ;
-(CVBufferRef)_pixelBuffer:(out id*)arg1 ;
@end

