/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

