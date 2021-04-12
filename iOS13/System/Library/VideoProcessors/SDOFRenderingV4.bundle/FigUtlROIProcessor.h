/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/SDOFRenderingV4.bundle/SDOFRenderingV4
*/


#import <SDOFRenderingV4/SDOFRenderingV4-Structs.h>
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
	SCD_Struct_Fi4 _originalToRoiMatrix;
	SCD_Struct_Fi4 _roiToOriginalMatrix;

}

@property (nonatomic,readonly) SCD_Struct_Fi4 originalToRoiMatrix;              //@synthesize originalToRoiMatrix=_originalToRoiMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi4 roiToOriginalMatrix;              //@synthesize roiToOriginalMatrix=_roiToOriginalMatrix - In the implementation block
@property (nonatomic,readonly) CGRect roiRectangle;                             //@synthesize roiRectangle=_roiRectangle - In the implementation block
@property (nonatomic,readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) int width;                                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                      //@synthesize height=_height - In the implementation block
-(void)dealloc;
-(int)width;
-(int)height;
-(CVBufferRef)pixelBuffer;
-(CGPoint)originalToRoi:(CGPoint)arg1 ;
-(CGPoint)roiToOriginal:(CGPoint)arg1 ;
-(SCD_Struct_Fi4)matrix:(int)arg1 rectangle:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 inverse:(SCD_Struct_Fi4*)arg5 ;
-(CGPoint)originalToRoiPixels:(CGPoint)arg1 ;
-(CGPoint)roiToOriginalPixels:(CGPoint)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 ;
-(BOOL)processImage:(CVBufferRef)arg1 orientation:(int)arg2 rect:(CGRect)arg3 ;
-(SCD_Struct_Fi4)originalToRoiMatrix;
-(SCD_Struct_Fi4)roiToOriginalMatrix;
-(CGRect)roiRectangle;
@end

