/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCDateRange, NSString;

@interface FCFeedPersonalizingSession : NSObject {

	FCDateRange* _dateRange;
	unsigned long long _fixedArticleCount;
	long long _feedType;
	NSString* _sessionID;

}

@property (nonatomic,retain) FCDateRange * dateRange;                           //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) unsigned long long fixedArticleCount;              //@synthesize fixedArticleCount=_fixedArticleCount - In the implementation block
@property (assign,nonatomic) long long feedType;                                //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
-(long long)feedType;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(FCDateRange *)dateRange;
-(void)setFeedType:(long long)arg1 ;
-(unsigned long long)fixedArticleCount;
-(void)setFixedArticleCount:(unsigned long long)arg1 ;
-(void)setDateRange:(FCDateRange *)arg1 ;
@end

