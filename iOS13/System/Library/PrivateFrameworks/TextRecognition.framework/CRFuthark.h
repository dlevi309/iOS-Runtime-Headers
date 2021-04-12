/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@interface CRFuthark : NSObject
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 ;
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 withThresholdingAlgorithm:(long long)arg3 options:(id)arg4 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 withMaxNumScales:(unsigned long long)arg3 withThresholdingAlgorithm:(long long)arg4 options:(id)arg5 withProgressHandler:(/*^block*/id)arg6 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 options:(id)arg3 ;
+(id)detectTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 withProgressHandler:(/*^block*/id)arg4 ;
@end

