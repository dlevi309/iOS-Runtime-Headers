/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMISparseOpticalFlowFrame : HMFObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_HM3 _time;

}

@property (readonly) CVBufferRef pixelBuffer;              //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) SCD_Struct_HM3 time;                  //@synthesize time=_time - In the implementation block
-(SCD_Struct_HM3)time;
-(id)description;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM3)arg2 ;
@end

