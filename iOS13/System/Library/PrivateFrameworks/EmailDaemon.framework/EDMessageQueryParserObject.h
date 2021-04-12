/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

