/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _publisherArticleVersionInt64;
	NSString* _anfComponentId;
	NSString* _anfComponentRole;
	NSString* _anfComponentType;
	NSString* _articleId;
	NSString* _articleVersion;
	NSData* _articleViewingSessionId;
	NSMutableArray* _fractionalCohortMemberships;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewData* _issueViewData;
	NSString* _metadata;
	NSString* _sourceChannelId;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                      //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentType; 
@property (nonatomic,retain) NSString * anfComponentType;                               //@synthesize anfComponentType=_anfComponentType - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentId; 
@property (nonatomic,retain) NSString * anfComponentId;                                 //@synthesize anfComponentId=_anfComponentId - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentRole; 
@property (nonatomic,retain) NSString * anfComponentRole;                               //@synthesize anfComponentRole=_anfComponentRole - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleVersion; 
@property (nonatomic,retain) NSString * articleVersion;                                 //@synthesize articleVersion=_articleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                    //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                      //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                 //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                 //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                         //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                          //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;              //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
+(Class)fractionalCohortMembershipType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(NSString *)arg1 ;
-(NSString *)metadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMetadata;
-(NSString *)articleVersion;
-(void)setArticleVersion:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(BOOL)hasIssueData;
-(BOOL)hasIssueExposureData;
-(BOOL)hasIssueViewData;
-(NTPBIssueData *)issueData;
-(NTPBIssueExposureData *)issueExposureData;
-(NTPBIssueViewData *)issueViewData;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)clearFractionalCohortMemberships;
-(unsigned long long)fractionalCohortMembershipsCount;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersionInt64;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(long long)publisherArticleVersionInt64;
-(long long)backendArticleVersionInt64;
-(void)setAnfComponentId:(NSString *)arg1 ;
-(BOOL)hasAnfComponentId;
-(NSString *)anfComponentId;
-(void)setAnfComponentType:(NSString *)arg1 ;
-(void)setAnfComponentRole:(NSString *)arg1 ;
-(BOOL)hasAnfComponentType;
-(BOOL)hasAnfComponentRole;
-(BOOL)hasArticleVersion;
-(NSString *)anfComponentType;
-(NSString *)anfComponentRole;
@end

