/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSAttributedString *)inputText;
-(id)outputImage;
-(void)setInputText:(NSAttributedString *)arg1 ;
@end

