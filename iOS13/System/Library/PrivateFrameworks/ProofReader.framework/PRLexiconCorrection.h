/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)score;
-(unsigned)tokenID;
-(unsigned long long)errorType;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 errorType:(unsigned long long)arg3 ;
@end

