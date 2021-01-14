/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@interface CRFuthark : NSObject
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 withMaxNumScales:(unsigned long long)arg3 withThresholdingAlgorithm:(long long)arg4 options:(id)arg5 withProgressHandler:(/*^block*/id)arg6 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 options:(id)arg3 ;
+(id)detectTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 withThresholdingAlgorithm:(long long)arg3 options:(id)arg4 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 withProgressHandler:(/*^block*/id)arg4 ;
@end

