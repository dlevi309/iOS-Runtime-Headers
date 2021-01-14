/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol CVAMattingResult <NSObject>
@property (readonly) id<CVADisparityPostprocessingResult> disparityPostprocessingResult; 
@property (readonly) CVBufferRef alphaMattePixelBuffer; 
@required
-(id<CVADisparityPostprocessingResult>)disparityPostprocessingResult;
-(CVBufferRef)alphaMattePixelBuffer;

@end

