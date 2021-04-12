/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@protocol DASearchQueryConsumer;
#import <CDDataAccessExpress/CDDataAccessExpress-Structs.h>
@class NSString, NSPredicate;

@interface DASearchQuery : NSObject {

	int _timeLimit;
	NSString* _searchString;
	NSPredicate* _searchPredicate;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	unsigned long long _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)state;
-(NSRange)range;
-(void)setState:(unsigned long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)searchString;
-(id<DASearchQueryConsumer>)consumer;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(int)timeLimit;
-(void)setTimeLimit:(int)arg1 ;
-(NSString *)searchID;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(BOOL)isQueryRunning;
-(NSPredicate *)searchPredicate;
@end

