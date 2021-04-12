/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NURenderPipelineVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_NU6 _frameTime;

}

@property (readonly) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_NU6 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(SCD_Struct_NU6)frameTime;
-(id)initWithFrameTime:(SCD_Struct_NU6)arg1 pixelBuffer:(CVBufferRef)arg2 ;
@end

