/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NLLanguageRecognizer, NSArray;

@interface _LTTextLanguageDetector : NSObject {

	NLLanguageRecognizer* _recognizer;
	NSArray* _availableLocales;

}

@property (nonatomic,copy) NSArray * availableLocales;              //@synthesize availableLocales=_availableLocales - In the implementation block
-(id)init;
-(void)setAvailableLocales:(NSArray *)arg1 ;
-(id)detectionForString:(id)arg1 ;
-(id)detectionForStrings:(id)arg1 ;
-(NSArray *)availableLocales;
@end

