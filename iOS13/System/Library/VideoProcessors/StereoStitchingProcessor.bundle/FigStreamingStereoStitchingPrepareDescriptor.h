/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@interface FigStreamingStereoStitchingPrepareDescriptor : NSObject {

	unsigned _inputWidth;
	unsigned _inputHeight;
	unsigned _disparityWidth;
	unsigned _disparityHeight;
	unsigned _pixelFormat;

}

@property (assign,nonatomic) unsigned inputWidth;                   //@synthesize inputWidth=_inputWidth - In the implementation block
@property (assign,nonatomic) unsigned inputHeight;                  //@synthesize inputHeight=_inputHeight - In the implementation block
@property (assign,nonatomic) unsigned disparityWidth;               //@synthesize disparityWidth=_disparityWidth - In the implementation block
@property (assign,nonatomic) unsigned disparityHeight;              //@synthesize disparityHeight=_disparityHeight - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                  //@synthesize pixelFormat=_pixelFormat - In the implementation block
-(id)init;
-(id)description;
-(unsigned)inputWidth;
-(void)setInputWidth:(unsigned)arg1 ;
-(unsigned)inputHeight;
-(void)setInputHeight:(unsigned)arg1 ;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setDisparityWidth:(unsigned)arg1 ;
-(void)setDisparityHeight:(unsigned)arg1 ;
-(unsigned)disparityWidth;
-(unsigned)disparityHeight;
@end

