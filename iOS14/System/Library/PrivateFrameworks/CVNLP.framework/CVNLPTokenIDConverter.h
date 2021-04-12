/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


#import <CVNLP/CVNLP-Structs.h>
@interface CVNLPTokenIDConverter : NSObject {

	unique_ptr<cvnlp::AbstractVocabulary, std::__1::default_delete<cvnlp::AbstractVocabulary> >* _vocabTokenizer;
	unsigned _bosTokenID;
	unsigned _eosTokenID;
	unsigned _unkTokenID;

}

@property (readonly) unsigned bosTokenID;              //@synthesize bosTokenID=_bosTokenID - In the implementation block
@property (readonly) unsigned eosTokenID;              //@synthesize eosTokenID=_eosTokenID - In the implementation block
@property (readonly) unsigned unkTokenID;              //@synthesize unkTokenID=_unkTokenID - In the implementation block
-(id)initWithResource:(id)arg1 andTokenType:(int)arg2 ;
-(void)enumerateTokenIDsForText:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)bosTokenID;
-(unsigned)eosTokenID;
-(unsigned)unkTokenID;
@end

