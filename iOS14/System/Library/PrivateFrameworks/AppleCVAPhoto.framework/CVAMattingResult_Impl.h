/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVAMattingResult.h>

@protocol CVADisparityPostprocessingResult;
@class NSString;

@interface CVAMattingResult_Impl : NSObject <CVAMattingResult> {

	id<CVADisparityPostprocessingResult> _disparityPostprocessingResult;
	CVBufferRef _alphaMattePixelBuffer;

}

@property (readonly) id<CVADisparityPostprocessingResult> disparityPostprocessingResult;              //@synthesize disparityPostprocessingResult=_disparityPostprocessingResult - In the implementation block
@property (readonly) CVBufferRef alphaMattePixelBuffer;                                               //@synthesize alphaMattePixelBuffer=_alphaMattePixelBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CVADisparityPostprocessingResult>)disparityPostprocessingResult;
-(CVBufferRef)alphaMattePixelBuffer;
-(id)initWithDisparityPostprocessingResult:(id)arg1 alphaMattePixelBuffer:(CVBufferRef)arg2 ;
@end

