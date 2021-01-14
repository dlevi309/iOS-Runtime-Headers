/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol CVAPortraitResult <NSObject>
@property (readonly) id<CVAMattingResult> mattingResult; 
@property (readonly) CVBufferRef portraitPixelBuffer; 
@property (readonly) float portraitStability; 
@property (readonly) float relightingStability; 
@required
-(CVBufferRef)portraitPixelBuffer;
-(float)portraitStability;
-(id<CVAMattingResult>)mattingResult;
-(float)relightingStability;

@end

