/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigM2MController;

@interface FigUtlROIProcessor : NSObject {

	int _originalWidth;
	int _originalHeight;
	CGRect _roiInPixels;
	CGRect _originalRectangle;
	int _orientation;
	FigM2MController* _m2m;
	int _width;
	int _height;
	CVBufferRef _pixelBuffer;
	CGRect _roiRectangle;
	SCD_Struct_Fi8 _originalToRoiMatrix;
	SCD_Struct_Fi8 _roiToOriginalMatrix;

}

@property (nonatomic,readonly) SCD_Struct_Fi8 originalToRoiMatrix;              //@synthesize originalToRoiMatrix=_originalToRoiMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi8 roiToOriginalMatrix;              //@synthesize roiToOriginalMatrix=_roiToOriginalMatrix - In the implementation block
@property (nonatomic,readonly) CGRect roiRectangle;                             //@synthesize roiRectangle=_roiRectangle - In the implementation block
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) int width;                                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                      //@synthesize height=_height - In the implementation block
-(int)width;
-(id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)processImage:(CVBufferRef)arg1 orientation:(int)arg2 rect:(CGRect)arg3 ;
-(SCD_Struct_Fi8)originalToRoiMatrix;
-(SCD_Struct_Fi8)roiToOriginalMatrix;
-(CGPoint)roiToOriginal:(CGPoint)arg1 ;
-(int)height;
-(CVBufferRef)pixelBuffer;
-(CGPoint)originalToRoi:(CGPoint)arg1 ;
-(SCD_Struct_Fi8)matrix:(int)arg1 rectangle:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(SCD_Struct_Fi8*)arg5 ;
-(CGPoint)originalToRoiPixels:(CGPoint)arg1 ;
-(CGPoint)roiToOriginalPixels:(CGPoint)arg1 ;
-(CGRect)roiRectangle;
-(void)dealloc;
@end

