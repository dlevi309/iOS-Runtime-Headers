/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class MLModel, NSString, NSMutableArray, NSNumber;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {

	MLModel* _mlModel;
	NSString* _modelInput;
	NSString* _modelOutput;
	NSMutableArray* _features;
	NSNumber* _missingLanguageDetectorDefault;

}
-(id)initWithConfig:(id)arg1 ;
-(id)getModelFeatures:(id)arg1 canonicalPair:(id)arg2 sourceSpeechResult:(id)arg3 targetSpeechResult:(id)arg4 ;
-(id)estimateLanguage:(id)arg1 languageDetectionResult:(id)arg2 finalSpeechResults:(id)arg3 ;
@end

