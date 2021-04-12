/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@protocol CREngine <NSObject,CRConfidenceThresholdProviding>
@optional
-(id)textRecognizerResultsForTextFeatures:(id)arg1 image:(id)arg2;
-(id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2;

@required
+(id)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2;
-(id)initWithOptions:(id)arg1 error:(id*)arg2;
-(CGSize*)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2;
-(void)cancel;
-(id)textResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 error:(id*)arg4;

@end

