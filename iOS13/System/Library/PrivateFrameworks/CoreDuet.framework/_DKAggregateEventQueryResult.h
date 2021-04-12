/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _DKEventQuery, NSMutableArray, NSArray, NSError;

@interface _DKAggregateEventQueryResult : NSObject {

	_DKEventQuery* _query;
	NSMutableArray* _mutableEvents;
	NSMutableArray* _mutableErrors;
	unsigned long long _numberOfContributions;

}

@property (nonatomic,retain) _DKEventQuery * query;                                 //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSArray * aggregateEvents; 
@property (nonatomic,copy,readonly) NSError * aggregateError; 
@property (nonatomic,retain) NSMutableArray * mutableEvents;                        //@synthesize mutableEvents=_mutableEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableErrors;                        //@synthesize mutableErrors=_mutableErrors - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfContributions;              //@synthesize numberOfContributions=_numberOfContributions - In the implementation block
-(_DKEventQuery *)query;
-(void)setQuery:(_DKEventQuery *)arg1 ;
-(void)setMutableErrors:(NSMutableArray *)arg1 ;
-(void)setNumberOfContributions:(unsigned long long)arg1 ;
-(NSMutableArray *)mutableEvents;
-(NSMutableArray *)mutableErrors;
-(unsigned long long)numberOfContributions;
-(void)setMutableEvents:(NSMutableArray *)arg1 ;
-(id)initWithEventQuery:(id)arg1 ;
-(NSArray *)aggregateEvents;
-(NSError *)aggregateError;
-(void)addEvents:(id)arg1 ;
-(void)addError:(id)arg1 ;
@end

