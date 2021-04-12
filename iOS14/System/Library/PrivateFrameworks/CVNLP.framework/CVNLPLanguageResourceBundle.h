/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class CVNLPDecodingLexicons, CVNLPDecodingLanguageModel;

@interface CVNLPLanguageResourceBundle : NSObject {

	CVNLPDecodingLexicons* _lexicons;
	CVNLPDecodingLanguageModel* _characterLanguageModel;
	CVNLPDecodingLanguageModel* _wordLanguageModel;

}

@property (nonatomic,readonly) CVNLPDecodingLexicons * lexicons;                                 //@synthesize lexicons=_lexicons - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * characterLanguageModel;              //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * wordLanguageModel;                   //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
-(CVNLPDecodingLexicons *)lexicons;
-(id)packagedLexiconRootCursors;
-(id)initWithLexicons:(id)arg1 characterLanguageModel:(id)arg2 wordLanguageModel:(id)arg3 ;
-(id)packagedLexiconCursorsUsingContext:(id)arg1 ;
-(CVNLPDecodingLanguageModel *)characterLanguageModel;
-(CVNLPDecodingLanguageModel *)wordLanguageModel;
@end

