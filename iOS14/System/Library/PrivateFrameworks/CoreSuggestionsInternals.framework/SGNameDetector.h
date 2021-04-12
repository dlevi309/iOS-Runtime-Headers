/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGTokenizerMappingTransformer, NSString, SGNameMappingTransformer;

@interface SGNameDetector : NSObject {

	SGTokenizerMappingTransformer* _noCoreNLPTokenizer;
	SGTokenizerMappingTransformer* _coreNLPTokenizer;
	NSString* _language;
	SGNameMappingTransformer* _transformer;

}
+(id)_contactNames;
+(id)_fetchContactNamesToLimit:(unsigned long long)arg1 ;
-(id)initWithLanguage:(id)arg1 ;
-(id)tokenizerWithCoreNLPEnabled:(BOOL)arg1 ;
-(id)detectNames:(id)arg1 algorithm:(unsigned long long)arg2 ;
-(id)_detectNames:(id)arg1 withNameSet:(id)arg2 ;
-(id)detectNames:(id)arg1 withNameSet:(id)arg2 ;
-(id)_detectContactNames:(id)arg1 ;
-(id)_detectNLPNames:(id)arg1 ;
@end

