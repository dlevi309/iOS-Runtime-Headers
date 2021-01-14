/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
*/


@interface PRLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}

@property (readonly) unsigned tokenID;              //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                  //@synthesize score=_score - In the implementation block
-(unsigned)tokenID;
-(double)score;
-(id)description;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
@end

