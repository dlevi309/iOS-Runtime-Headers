/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputEdgeDetail;
-(void)setInputEdgeDetail:(NSNumber *)arg1 ;
@end

