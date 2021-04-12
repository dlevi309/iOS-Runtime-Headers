/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
*/


#import <CoreNameParser/CoreNameParser-Structs.h>
@class NPNameComponentsData, NPHMMClassifier;

@interface NPNameParser : NSObject {

	double _confidenceThreshold;
	NPNameComponentsData* _nameComponentsData;
	NPHMMClassifier* _classifier;

}

@property (retain) NPHMMClassifier * classifier;              //@synthesize classifier=_classifier - In the implementation block
-(unsigned long long)genderMajorityForGivenName:(id)arg1 ;
-(id)init;
-(NPHMMClassifier *)classifier;
-(id)normalizedAffix:(id)arg1 ;
-(id)normalizeFullname:(id)arg1 ;
-(id)parseJapaneseName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseKoreanName:(id)arg1 ;
-(id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5 ;
-(id)parseJapaneseName:(id)arg1 ;
-(id)parseChineseName:(id)arg1 ;
-(void)setClassifier:(NPHMMClassifier *)arg1 ;
-(unsigned long long)frequencyOfLatinGivenName:(id)arg1 ;
-(BOOL)isPrefix:(id)arg1 ;
-(id)parseKoreanName:(id)arg1 normalize:(BOOL)arg2 ;
-(BOOL)isSuffix:(id)arg1 ;
-(unsigned long long)namingTraditionForName:(id)arg1 ;
-(id)parseLatinName:(id)arg1 score:(double*)arg2 ;
-(id)personNameComponentsFromString:(id)arg1 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 ;
-(id)parseChineseName:(id)arg1 normalize:(BOOL)arg2 ;
-(CFBurstTrieRef)sharedNameFrequencyTrieRef;
-(unsigned long long)frequencyOfLatinFamilyName:(id)arg1 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(BOOL)arg2 score:(double*)arg3 ;
-(void)dealloc;
@end

