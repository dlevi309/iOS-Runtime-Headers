/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPInformationStream.h>

@class NSLocale;

@interface CVNLPDecodingLanguageModel : CVNLPInformationStream {

	int _lmSPIType;
	NSLocale* _locale;
	void* _languageModel;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) void* languageModel;              //@synthesize languageModel=_languageModel - In the implementation block
+(id)_decodingLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5 ;
+(unsigned)_normalizedLMTokenIDForWord:(id)arg1 withTokenID:(unsigned)arg2 sourceLanguageModel:(id)arg3 outScore:(double*)arg4 ;
+(id)decodingLMLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 ;
+(id)decodingCVNLPLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 ;
-(NSLocale *)locale;
-(void*)languageModel;
-(void)dealloc;
-(id)_initWithLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5 ;
-(id)initWithLanguageModel:(void*)arg1 locale:(id)arg2 ;
-(long long)requiredContextLengthForStringLength:(long long)arg1 ;
-(id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 ;
-(id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 ;
-(id)initWithCVNLPLanguageModel:(CVNLPLanguageModelRef)arg1 locale:(id)arg2 decodingWeight:(id)arg3 ;
-(id)initWithCVNLPLanguageModel:(CVNLPLanguageModelRef)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 ;
-(id)initWithLanguageModel:(void*)arg1 ;
-(int)lmSPIType;
-(vector<unsigned int, std::__1::allocator<unsigned int> >*)characterTokenIDsForString:(id)arg1 ;
-(vector<unsigned int, std::__1::allocator<unsigned int> >*)wordTokenIDsForString:(id)arg1 outTokenRanges:(id*)arg2 ;
@end

