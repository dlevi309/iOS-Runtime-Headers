/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSPredicate;

@interface EDMessageQueryParserObject : NSObject {

	unsigned long long _queryType;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) unsigned long long queryType;              //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                   //@synthesize predicate=_predicate - In the implementation block
-(NSPredicate *)predicate;
-(unsigned long long)queryType;
-(id)initWithQueryType:(unsigned long long)arg1 predicate:(id)arg2 ;
@end

