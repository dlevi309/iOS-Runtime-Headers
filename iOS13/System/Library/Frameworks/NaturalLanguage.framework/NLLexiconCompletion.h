/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@interface NLLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}
-(id)description;
-(double)score;
-(unsigned)tokenID;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
@end

