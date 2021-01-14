/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSHistoryServiceObject.h>

@class NSString, NSData;

@interface WBSHistoryServiceItem : WBSHistoryServiceObject {

	BOOL _shouldRecomputeDerivedVisitCountScores;
	long long _visitCount;
	long long _visitCountScore;
	NSString* _url;
	NSData* _dailyVisitCounts;
	NSData* _weeklyVisitCounts;

}

@property (assign,nonatomic) long long visitCount;                                     //@synthesize visitCount=_visitCount - In the implementation block
@property (assign,nonatomic) long long visitCountScore;                                //@synthesize visitCountScore=_visitCountScore - In the implementation block
@property (assign,nonatomic) BOOL shouldRecomputeDerivedVisitCountScores;              //@synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores - In the implementation block
@property (nonatomic,readonly) NSString * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSData * dailyVisitCounts;                                  //@synthesize dailyVisitCounts=_dailyVisitCounts - In the implementation block
@property (nonatomic,copy) NSData * weeklyVisitCounts;                                 //@synthesize weeklyVisitCounts=_weeklyVisitCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)visitCountScore;
-(BOOL)shouldRecomputeDerivedVisitCountScores;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)visitCount;
-(NSString *)url;
-(id)initWithSQLRow:(id)arg1 ;
-(NSData *)dailyVisitCounts;
-(NSData *)weeklyVisitCounts;
-(id)initWithItem:(id)arg1 ;
-(void)setVisitCountScore:(long long)arg1 ;
-(void)setShouldRecomputeDerivedVisitCountScores:(BOOL)arg1 ;
-(void)setDailyVisitCounts:(NSData *)arg1 ;
-(void)setWeeklyVisitCounts:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVisitCount:(long long)arg1 ;
@end

