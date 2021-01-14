/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/


@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>
@required
-(int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(CVBufferRef)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(/*^block*/id)arg6 mattingCompletionHandler:(/*^block*/id)arg7 portraitCompletionHandler:(/*^block*/id)arg8;
-(int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 portraitCompletionHandler:(/*^block*/id)arg4;

@end

