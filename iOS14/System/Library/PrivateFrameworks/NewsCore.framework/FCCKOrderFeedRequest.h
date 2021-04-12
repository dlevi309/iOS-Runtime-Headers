/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)maxOrder;
-(void)setTopK:(unsigned long long)arg1 ;
-(id)init;
-(void)setMinOrder:(unsigned long long)arg1 ;
-(id)description;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setMaxOrder:(unsigned long long)arg1 ;
-(unsigned long long)topK;
-(NSString *)feedID;
-(unsigned long long)minOrder;
-(unsigned long long)resultsLimit;
@end

