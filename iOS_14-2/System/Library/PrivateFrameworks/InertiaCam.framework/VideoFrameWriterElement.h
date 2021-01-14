/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface VideoFrameWriterElement : NSObject {

	CVBufferRef _pixelBuffer;
	SCD_Struct_Vi2 _frameTime;
	long long _frameNumber;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Vi2 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
@property (assign,nonatomic) long long frameNumber;                 //@synthesize frameNumber=_frameNumber - In the implementation block
-(SCD_Struct_Vi2)frameTime;
-(long long)frameNumber;
-(void)setFrameTime:(SCD_Struct_Vi2)arg1 ;
-(void)setFrameNumber:(long long)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(void)DeallocPixBuffer;
@end

