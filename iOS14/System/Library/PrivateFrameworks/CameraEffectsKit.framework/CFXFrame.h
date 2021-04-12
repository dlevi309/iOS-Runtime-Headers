/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class PVFrameSet, ARFrame;

@interface CFXFrame : NSObject {

	CVBufferRef _pixelBuffer;
	PVFrameSet* _pvFrameSet;
	ARFrame* _arFrame;
	SCD_Struct_JF3 _latency;
	SCD_Struct_JF3 _timestamp;
	SCD_Struct_JF3 _requestTime;

}

@property (nonatomic,retain) PVFrameSet * pvFrameSet;                 //@synthesize pvFrameSet=_pvFrameSet - In the implementation block
@property (nonatomic,retain) ARFrame * arFrame;                       //@synthesize arFrame=_arFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 latency;                  //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) CVBufferRef pixelBuffer;                 //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_JF3 requestTime;              //@synthesize requestTime=_requestTime - In the implementation block
-(SCD_Struct_JF3)timestamp;
-(void)setLatency:(SCD_Struct_JF3)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_JF3)latency;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_JF3)requestTime;
-(CVBufferRef)pixelBuffer;
-(ARFrame *)arFrame;
-(void)setTimestamp:(SCD_Struct_JF3)arg1 ;
-(void)setRequestTime:(SCD_Struct_JF3)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 timestamp:(SCD_Struct_JF3)arg2 ;
-(id)initWithFrameSet:(id)arg1 ;
-(BOOL)isEqualToFrame:(id)arg1 ;
-(id)initWithARFrame:(id)arg1 ;
-(PVFrameSet *)pvFrameSet;
-(void)setPvFrameSet:(PVFrameSet *)arg1 ;
-(void)setArFrame:(ARFrame *)arg1 ;
@end

