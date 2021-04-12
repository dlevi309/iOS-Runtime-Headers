/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCCKOrderFeedRequest : NSObject {

	NSString* _feedID;
	unsigned long long _maxOrder;
	unsigned long long _minOrder;
	unsigned long long _resultsLimit;
	unsigned long long _topK;

}

@property (nonatomic,copy) NSString * feedID;                              //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) unsigned long long maxOrder;                  //@synthesize maxOrder=_maxOrder - In the implementation block
@property (assign,nonatomic) unsigned long long minOrder;                  //@synthesize minOrder=_minOrder - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long topK;                      //@synthesize topK=_topK - In the implementation block
-(id)init;
-(id)description;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(unsigned long long)resultsLimit;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)topK;
-(unsigned long long)minOrder;
-(unsigned long long)maxOrder;
-(void)setMaxOrder:(unsigned long long)arg1 ;
-(void)setMinOrder:(unsigned long long)arg1 ;
-(void)setTopK:(unsigned long long)arg1 ;
@end

