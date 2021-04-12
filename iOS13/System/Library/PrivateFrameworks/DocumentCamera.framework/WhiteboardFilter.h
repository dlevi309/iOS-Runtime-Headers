/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface WhiteboardFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _stride;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * stride;                   //@synthesize stride=_stride - In the implementation block
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setStride:(NSNumber *)arg1 ;
-(NSNumber *)stride;
-(id)whiteboardFilterKernel;
@end

