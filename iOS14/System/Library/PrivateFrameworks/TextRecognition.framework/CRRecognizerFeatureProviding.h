/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@protocol CRRecognizerFeatureProviding <NSObject>
@required
-(void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg1;
-(id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3;

@end

