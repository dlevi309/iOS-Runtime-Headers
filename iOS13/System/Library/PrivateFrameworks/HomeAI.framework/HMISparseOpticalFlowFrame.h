/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFrame : HMFObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_HM4 _time;

}

@property (readonly) CVBufferRef pixelBuffer;              //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_HM4 time;                  //@synthesize time=_time - In the implementation block
-(void)dealloc;
-(id)description;
-(SCD_Struct_HM4)time;
-(CVBufferRef)pixelBuffer;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2 ;
@end

