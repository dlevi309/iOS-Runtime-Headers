/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
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
-(id)dictionaryRepresentation;
-(void)setRange:(NSRange)arg1 ;
-(int)timeLimit;
-(NSRange)range;
-(NSString *)searchID;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(BOOL)isQueryRunning;
-(NSPredicate *)searchPredicate;
-(unsigned)maxResults;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setTimeLimit:(int)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(NSString *)searchString;
@end

