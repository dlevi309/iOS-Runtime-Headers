/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVFrameSet, ARFrame, ARFaceAnchor;

@interface CFXFrame : NSObject {

	CVBufferRef _pixelBuffer;
	PVFrameSet* _pvFrameSet;
	ARFrame* _arFrame;
	ARFaceAnchor* _arFaceAnchor;
	SCD_Struct_JT6 _latency;
	SCD_Struct_JT6 _timestamp;
	SCD_Struct_JT6 _requestTime;

}

@property (nonatomic,retain) PVFrameSet * pvFrameSet;                  //@synthesize pvFrameSet=_pvFrameSet - In the implementation block
@property (nonatomic,retain) ARFrame * arFrame;                        //@synthesize arFrame=_arFrame - In the implementation block
@property (nonatomic,retain) ARFaceAnchor * arFaceAnchor;              //@synthesize arFaceAnchor=_arFaceAnchor - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 latency;                   //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) CVBufferRef pixelBuffer;                  //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_JT6)timestamp;
-(SCD_Struct_JT6)latency;
-(void)setTimestamp:(SCD_Struct_JT6)arg1 ;
-(CVBufferRef)pixelBuffer;
-(SCD_Struct_JT6)requestTime;
-(void)setRequestTime:(SCD_Struct_JT6)arg1 ;
-(void)setLatency:(SCD_Struct_JT6)arg1 ;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(ARFrame *)arFrame;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 faceAnchor:(id)arg2 timestamp:(SCD_Struct_JT6)arg3 ;
-(id)initWithFrameSet:(id)arg1 ;
-(BOOL)isEqualToFrame:(id)arg1 ;
-(id)initWithARFrame:(id)arg1 ;
-(PVFrameSet *)pvFrameSet;
-(void)setPvFrameSet:(PVFrameSet *)arg1 ;
-(void)setArFrame:(ARFrame *)arg1 ;
-(ARFaceAnchor *)arFaceAnchor;
-(void)setArFaceAnchor:(ARFaceAnchor *)arg1 ;
@end

