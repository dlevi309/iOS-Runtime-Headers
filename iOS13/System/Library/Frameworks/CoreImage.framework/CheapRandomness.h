/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputDither;
-(void)setInputDither:(NSNumber *)arg1 ;
@end

