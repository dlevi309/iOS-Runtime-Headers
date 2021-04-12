/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(FCDateRange *)dateRange;
-(void)setDateRange:(FCDateRange *)arg1 ;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
-(unsigned long long)fixedArticleCount;
-(void)setFixedArticleCount:(unsigned long long)arg1 ;
@end

