/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@interface PRLexiconCorrection : NSObject {

	unsigned _tokenID;
	double _score;
	unsigned long long _errorType;

}

@property (readonly) unsigned tokenID;                          //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                              //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long errorType;              //@synthesize errorType=_errorType - In the implementation block
-(unsigned)tokenID;
-(double)score;
-(id)description;
-(unsigned long long)errorType;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 errorType:(unsigned long long)arg3 ;
@end

