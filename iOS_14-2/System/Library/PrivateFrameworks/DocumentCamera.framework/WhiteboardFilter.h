/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStride:(NSNumber *)arg1 ;
-(NSNumber *)stride;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)whiteboardFilterKernel;
@end

