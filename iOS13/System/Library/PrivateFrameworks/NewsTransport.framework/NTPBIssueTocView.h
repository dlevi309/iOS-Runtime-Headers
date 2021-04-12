/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT2 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasIssueData;
-(BOOL)hasIssueExposureData;
-(BOOL)hasIssueViewData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)hasParentFeedId;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(NTPBIssueData *)issueData;
-(NTPBIssueExposureData *)issueExposureData;
-(NTPBIssueViewData *)issueViewData;
-(NSString *)parentFeedId;
-(BOOL)adSupportedChannel;
@end

