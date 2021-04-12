/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSNumber;

@interface CheapRandomness : CIFilter {

	NSNumber* inputDither;
	NSNumber* inputScale;

}

@property (nonatomic,retain) NSNumber * inputDither; 
@property (nonatomic,retain) NSNumber * inputScale; 
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
-(id)outputImage;
@end

