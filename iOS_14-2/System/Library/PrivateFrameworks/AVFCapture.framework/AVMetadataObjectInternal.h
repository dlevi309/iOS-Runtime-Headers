/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	SCD_Struct_AV0 _time;
	SCD_Struct_AV0 _duration;
	CGRect _bounds;
	NSString* _type;
	AVCaptureInput* _input;
	AVMetadataObject* _originalMetadataObject;

}

@property (assign) SCD_Struct_AV0 time;                                    //@synthesize time=_time - In the implementation block
@property (assign) SCD_Struct_AV0 duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (retain) AVCaptureInput * input;                                 //@synthesize input=_input - In the implementation block
@property (retain) AVMetadataObject * originalMetadataObject;              //@synthesize originalMetadataObject=_originalMetadataObject - In the implementation block
-(CGRect)bounds;
-(SCD_Struct_AV0)time;
-(void)setTime:(SCD_Struct_AV0)arg1 ;
-(void)setDuration:(SCD_Struct_AV0)arg1 ;
-(id)init;
-(AVCaptureInput *)input;
-(AVMetadataObject *)originalMetadataObject;
-(void)setInput:(AVCaptureInput *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)type;
-(SCD_Struct_AV0)duration;
-(void)setOriginalMetadataObject:(AVMetadataObject *)arg1 ;
-(void)dealloc;
@end

