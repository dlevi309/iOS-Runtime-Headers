/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDMessageQueryParser;

@interface EDMessagePredicateParser : NSObject {

	EDMessageQueryParser* _queryParser;

}

@property (nonatomic,readonly) EDMessageQueryParser * queryParser;              //@synthesize queryParser=_queryParser - In the implementation block
+(id)parserForPredicate:(id)arg1 queryParser:(id)arg2 ;
-(EDMessageQueryParser *)queryParser;
-(id)initWithQueryParser:(id)arg1 ;
-(id)parseResultsFromPredicate:(id)arg1 ;
@end

