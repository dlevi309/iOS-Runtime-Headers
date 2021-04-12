/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>
@required
-(int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(CVBufferRef)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(/*^block*/id)arg6 mattingCompletionHandler:(/*^block*/id)arg7 portraitCompletionHandler:(/*^block*/id)arg8;
-(int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 portraitCompletionHandler:(/*^block*/id)arg4;

@end

