/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	SCD_Struct_AV7 _time;
	SCD_Struct_AV7 _duration;
	CGRect _bounds;
	NSString* _type;
	AVCaptureInput* _input;
	AVMetadataObject* _originalMetadataObject;

}

@property (assign) SCD_Struct_AV7 time;                                    //@synthesize time=_time - In the implementation block
@property (assign) SCD_Struct_AV7 duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (retain) AVCaptureInput * input;                                 //@synthesize input=_input - In the implementation block
@property (retain) AVMetadataObject * originalMetadataObject;              //@synthesize originalMetadataObject=_originalMetadataObject - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(SCD_Struct_AV7)duration;
-(AVCaptureInput *)input;
-(SCD_Struct_AV7)time;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTime:(SCD_Struct_AV7)arg1 ;
-(void)setInput:(AVCaptureInput *)arg1 ;
-(void)setDuration:(SCD_Struct_AV7)arg1 ;
-(AVMetadataObject *)originalMetadataObject;
-(void)setOriginalMetadataObject:(AVMetadataObject *)arg1 ;
@end

