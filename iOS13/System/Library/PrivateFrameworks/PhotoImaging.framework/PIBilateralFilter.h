/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIBilateralFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _inputRadius;
	NSNumber* _inputEdgeDetail;

}

@property (retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) NSNumber * inputRadius;                  //@synthesize inputRadius=_inputRadius - In the implementation block
@property (retain) NSNumber * inputEdgeDetail;              //@synthesize inputEdgeDetail=_inputEdgeDetail - In the implementation block
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputEdgeDetail;
-(void)setInputEdgeDetail:(NSNumber *)arg1 ;
@end

