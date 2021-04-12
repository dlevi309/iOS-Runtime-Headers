/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPSentenceFeatureExtractor : IPFeatureExtractor
-(id)queue;
-(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3 ;
-(unsigned long long)responseKitAnnotationTypeForFeatureDataType:(unsigned long long)arg1 ;
-(id)eventIdentifierForLanguageID:(id)arg1 ;
-(id)featureSentencesFromText:(id)arg1 dataDetectedFeatures:(id)arg2 languageID:(id)arg3 ;
-(void)identifyAndStorePolarityInFeatureSentences:(id)arg1 eventIdentifier:(id)arg2 previousFeatureSentences:(id)arg3 ;
@end

