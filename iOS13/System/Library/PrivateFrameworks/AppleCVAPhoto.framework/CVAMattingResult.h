/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol CVAMattingResult <NSObject>
@property (readonly) id<CVADisparityPostprocessingResult> disparityPostprocessingResult; 
@property (readonly) CVBufferRef alphaMattePixelBuffer; 
@required
-(id<CVADisparityPostprocessingResult>)disparityPostprocessingResult;
-(CVBufferRef)alphaMattePixelBuffer;

@end

