/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	NSPredicate* _predicate;
	unsigned long long _limit;
	/*^block*/id _topicEnumerator;

}

@property (retain) NSPredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (copy) id topicEnumerator;                      //@synthesize topicEnumerator=_topicEnumerator - In the implementation block
+(id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
+(id)enumerationSumExpression;
+(id)enumerationCountExpresion;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)limit;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)initWithPredicate:(id)arg1 topicEnumerator:(/*^block*/id)arg2 ;
-(id)topicEnumerator;
-(void)setTopicEnumerator:(id)arg1 ;
@end

