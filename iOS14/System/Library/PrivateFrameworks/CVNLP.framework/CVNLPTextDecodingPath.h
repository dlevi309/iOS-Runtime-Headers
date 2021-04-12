/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSString;

@interface CVNLPTextDecodingPath : NSObject {

	double _modelLogProbability;
	double _characterLanguageModelLogProbability;
	double _wordLanguageModelLogProbability;
	double _lexiconScore;
	long long _characterCount;
	long long _pseudoSpaceCount;
	long long _tokenCount;
	NSString* _string;

}

@property (nonatomic,readonly) double modelLogProbability;                               //@synthesize modelLogProbability=_modelLogProbability - In the implementation block
@property (nonatomic,readonly) double characterLanguageModelLogProbability;              //@synthesize characterLanguageModelLogProbability=_characterLanguageModelLogProbability - In the implementation block
@property (nonatomic,readonly) double wordLanguageModelLogProbability;                   //@synthesize wordLanguageModelLogProbability=_wordLanguageModelLogProbability - In the implementation block
@property (nonatomic,readonly) double lexiconScore;                                      //@synthesize lexiconScore=_lexiconScore - In the implementation block
@property (nonatomic,readonly) long long characterCount;                                 //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) long long pseudoSpaceCount;                               //@synthesize pseudoSpaceCount=_pseudoSpaceCount - In the implementation block
@property (nonatomic,readonly) long long tokenCount;                                     //@synthesize tokenCount=_tokenCount - In the implementation block
@property (nonatomic,readonly) NSString * string;                                        //@synthesize string=_string - In the implementation block
+(/*^block*/id)defaultPathScoringFunctionForLanguageResourceBundle:(id)arg1 ;
+(/*^block*/id)defaultPathScoringFunction;
-(long long)characterCount;
-(id)init;
-(NSString *)string;
-(double)modelLogProbability;
-(double)wordLanguageModelLogProbability;
-(double)characterLanguageModelLogProbability;
-(long long)pseudoSpaceCount;
-(long long)tokenCount;
-(double)lexiconScore;
-(id)initWithCharacterLanguageModelLogProbability:(double)arg1 wordLanguageModelLogProbability:(double)arg2 lexiconScore:(double)arg3 string:(id)arg4 ;
@end

