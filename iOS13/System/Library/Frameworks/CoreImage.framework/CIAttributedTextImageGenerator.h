/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSAttributedString, NSNumber;

@interface CIAttributedTextImageGenerator : CIFilter {

	NSAttributedString* inputText;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) NSAttributedString * inputText; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(id)outputImage;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSAttributedString *)inputText;
-(void)setInputText:(NSAttributedString *)arg1 ;
@end

