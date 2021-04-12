/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSString, NSNumber;

@interface CITextImageGenerator : CIFilter {

	NSString* inputText;
	NSString* inputFontName;
	NSNumber* inputFontSize;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) NSString * inputText; 
@property (nonatomic,retain) NSString * inputFontName; 
@property (nonatomic,retain) NSNumber * inputFontSize; 
@property (nonatomic,retain) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(id)outputImage;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSString *)inputText;
-(void)setInputText:(NSString *)arg1 ;
-(NSString *)inputFontName;
-(void)setInputFontName:(NSString *)arg1 ;
-(NSNumber *)inputFontSize;
-(void)setInputFontSize:(NSNumber *)arg1 ;
@end

