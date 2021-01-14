/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSArray, NSDictionary, NSString;

@interface NLLanguageRecognizer : NSObject {

	void* _identifier;
	NSArray* _languageConstraints;
	NSDictionary* _languageHints;

}

@property (nonatomic,copy,readonly) NSString * dominantLanguage; 
@property (nonatomic,copy) NSDictionary * languageHints; 
@property (nonatomic,copy) NSArray * languageConstraints; 
+(id)dominantLanguageForString:(id)arg1 ;
-(id)init;
-(NSString *)dominantLanguage;
-(void)processString:(id)arg1 ;
-(void)reset;
-(id)languageHypothesesWithMaximum:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)processString:(id)arg1 range:(NSRange)arg2 ;
-(NSDictionary *)languageHints;
-(void)setLanguageHints:(NSDictionary *)arg1 ;
-(NSArray *)languageConstraints;
-(void)setLanguageConstraints:(NSArray *)arg1 ;
@end

