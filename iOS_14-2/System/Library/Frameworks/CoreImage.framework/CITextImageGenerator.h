/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(NSString *)inputFontName;
-(void)setInputFontName:(NSString *)arg1 ;
-(NSNumber *)inputFontSize;
-(void)setInputFontSize:(NSNumber *)arg1 ;
-(NSString *)inputText;
-(id)outputImage;
-(void)setInputText:(NSString *)arg1 ;
@end

