/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBIssueData, NTPBIssueViewData, NSData;

@interface NTPBArticleEngagement : PBCodable <NSCopying> {

	long long _articleOpenedAtTimestamp;
	long long _eventTimestamp;
	int _articleEngagementType;
	NSString* _articleId;
	NSString* _channelId;
	NSString* _countryCode;
	NSString* _deviceModel;
	NTPBIssueData* _issueData;
	NTPBIssueViewData* _issueViewData;
	NSData* _sessionId;
	NSString* _userId;
	int _utcOffset;
	BOOL _isPaidSubscriber;
	SCD_Struct_NT10 _has;

}

@property (assign,nonatomic) BOOL hasArticleEngagementType; 
@property (assign,nonatomic) int articleEngagementType;                       //@synthesize articleEngagementType=_articleEngagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                              //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserId; 
@property (nonatomic,retain) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) long long eventTimestamp;                        //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                            //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;                            //@synthesize channelId=_channelId - In the implementation block
@property (assign,nonatomic) BOOL hasUtcOffset; 
@property (assign,nonatomic) int utcOffset;                                   //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasArticleOpenedAtTimestamp; 
@property (assign,nonatomic) long long articleOpenedAtTimestamp;              //@synthesize articleOpenedAtTimestamp=_articleOpenedAtTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriber; 
@property (assign,nonatomic) BOOL isPaidSubscriber;                           //@synthesize isPaidSubscriber=_isPaidSubscriber - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                       //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;               //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                          //@synthesize deviceModel=_deviceModel - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSData *)sessionId;
-(void)setSessionId:(NSData *)arg1 ;
-(BOOL)hasSessionId;
-(BOOL)hasCountryCode;
-(long long)eventTimestamp;
-(void)setEventTimestamp:(long long)arg1 ;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(int)utcOffset;
-(BOOL)isPaidSubscriber;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(BOOL)hasIssueData;
-(BOOL)hasIssueViewData;
-(NTPBIssueData *)issueData;
-(NTPBIssueViewData *)issueViewData;
-(BOOL)hasChannelId;
-(BOOL)hasUserId;
-(void)setUtcOffset:(int)arg1 ;
-(void)setHasUtcOffset:(BOOL)arg1 ;
-(BOOL)hasUtcOffset;
-(void)setIsPaidSubscriber:(BOOL)arg1 ;
-(void)setHasIsPaidSubscriber:(BOOL)arg1 ;
-(BOOL)hasIsPaidSubscriber;
-(int)articleEngagementType;
-(void)setArticleEngagementType:(int)arg1 ;
-(void)setHasArticleEngagementType:(BOOL)arg1 ;
-(BOOL)hasArticleEngagementType;
-(void)setArticleOpenedAtTimestamp:(long long)arg1 ;
-(void)setHasArticleOpenedAtTimestamp:(BOOL)arg1 ;
-(BOOL)hasArticleOpenedAtTimestamp;
-(long long)articleOpenedAtTimestamp;
@end

