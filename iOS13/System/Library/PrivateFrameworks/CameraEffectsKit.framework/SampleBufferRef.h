/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class ARFrame, JTFaceAnchor, PVImageBuffer;

@interface SampleBufferRef : NSObject {

	opaqueCMSampleBufferRef _s;
	ARFrame* _arFrame;
	JTFaceAnchor* _faceAnchor;
	PVImageBuffer* _backingPVImage;

}

@property (retain) PVImageBuffer * backingPVImage;              //@synthesize backingPVImage=_backingPVImage - In the implementation block
-(void)dealloc;
-(SCD_Struct_JT6)presentationTime;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)arFrame;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 arFrame:(id)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 faceAnchor:(id)arg2 ;
-(id)faceAnchor;
-(PVImageBuffer *)backingPVImage;
-(void)setBackingPVImage:(PVImageBuffer *)arg1 ;
@end

