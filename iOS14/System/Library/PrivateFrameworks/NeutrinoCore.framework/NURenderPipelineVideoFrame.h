/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NURenderPipelineVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_NU6 _frameTime;

}

@property (readonly) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_NU6 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(SCD_Struct_NU6)frameTime;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithFrameTime:(SCD_Struct_NU6)arg1 pixelBuffer:(CVBufferRef)arg2 ;
@end

