/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <NaturalLanguage/NLLanguageRecognizer.h>

@class NSMutableString;

@interface NLCFROLanguageRecognizer : NLLanguageRecognizer {

	void* _tagger;
	NSMutableString* _string;

}
+(id)dominantLanguageForString:(id)arg1 ;
-(id)init;
-(id)dominantLanguage;
-(void)processString:(id)arg1 ;
-(void)reset;
-(id)languageHypothesesWithMaximum:(unsigned long long)arg1 ;
-(void)dealloc;
@end

