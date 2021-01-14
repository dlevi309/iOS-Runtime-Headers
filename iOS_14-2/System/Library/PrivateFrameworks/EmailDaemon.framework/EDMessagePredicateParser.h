/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

