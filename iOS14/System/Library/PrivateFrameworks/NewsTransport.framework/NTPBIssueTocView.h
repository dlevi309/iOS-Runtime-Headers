/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBIssueTocView : PBCodable <NSCopying> {

	NSString* _articleId;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewData* _issueViewData;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _sourceChannelId;
	BOOL _adSupportedChannel;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                              //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;              //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                      //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                   //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                     //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                             //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
-(BOOL)hasParentFeedType;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(BOOL)hasIssueExposureData;
-(NTPBIssueData *)issueData;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)adSupportedChannel;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasArticleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NTPBIssueViewData *)issueViewData;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(NTPBIssueExposureData *)issueExposureData;
-(void)setParentFeedType:(int)arg1 ;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasParentFeedId;
-(void)writeTo:(id)arg1 ;
-(NSString *)parentFeedId;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(BOOL)hasIssueViewData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

