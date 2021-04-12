/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject {

	BOOL _evaluated;
	BOOL _evaluationResult;
	IKCSSMediaQueryList* _queryList;

}

@property (nonatomic,readonly) IKCSSMediaQueryList * queryList;              //@synthesize queryList=_queryList - In the implementation block
@property (readonly) BOOL evaluated;                                         //@synthesize evaluated=_evaluated - In the implementation block
@property (readonly) BOOL evaluationResult;                                  //@synthesize evaluationResult=_evaluationResult - In the implementation block
+(id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long*)arg3 ;
+(id)buildMediaQueryExpression:(id)arg1 ;
+(id)mediaQueryFromTokenList:(id)arg1 ;
-(id)description;
-(BOOL)evaluate;
-(IKCSSMediaQueryList *)queryList;
-(id)initWithQueryList:(id)arg1 ;
-(id)queryExpression;
-(void)setNeedsReEvaluation;
-(BOOL)evaluated;
-(BOOL)evaluationResult;
@end

