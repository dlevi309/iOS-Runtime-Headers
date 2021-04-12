/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

