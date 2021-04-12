/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase, NSString, NTPBDate, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores;

@interface NTPBIssueRecord : PBCodable <NSCopying> {

	double _coverAspectRatio;
	unsigned long long _halfLifeMilliseconds;
	double _layeredCoverAspectRatio;
	long long _minimumNewsVersion;
	NSMutableArray* _allArticleIDs;
	NSMutableArray* _allowedStorefrontIDs;
	NTPBRecordBase* _base;
	NSMutableArray* _blockedStorefrontIDs;
	NSMutableArray* _bundleFeaturedArticleIDs;
	NSString* _channelTagID;
	NSString* _coverArticleID;
	NSString* _coverImageURL;
	NSString* _coverPrimaryColor;
	NSString* _edition;
	NSString* _issueDescription;
	NSString* _layeredCover;
	NSString* _layeredCoverPrimaryColor;
	NSString* _metadataURL;
	NSString* _notificationDescription;
	NSString* _pdfResourceArchiveURL;
	NTPBDate* _publishDate;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;
	NSString* _title;
	NSMutableArray* _topicTagIDs;
	int _type;
	BOOL _isDraft;
	BOOL _isPaid;
	SCD_Struct_NT24 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                                //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableArray * allArticleIDs;                                       //@synthesize allArticleIDs=_allArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedStorefrontIDs;                                //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockedStorefrontIDs;                                //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelTagID; 
@property (nonatomic,retain) NSString * channelTagID;                                              //@synthesize channelTagID=_channelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverArticleID; 
@property (nonatomic,retain) NSString * coverArticleID;                                            //@synthesize coverArticleID=_coverArticleID - In the implementation block
@property (assign,nonatomic) BOOL hasCoverAspectRatio; 
@property (assign,nonatomic) double coverAspectRatio;                                              //@synthesize coverAspectRatio=_coverAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverImageURL; 
@property (nonatomic,retain) NSString * coverImageURL;                                             //@synthesize coverImageURL=_coverImageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverPrimaryColor; 
@property (nonatomic,retain) NSString * coverPrimaryColor;                                         //@synthesize coverPrimaryColor=_coverPrimaryColor - In the implementation block
@property (nonatomic,readonly) BOOL hasEdition; 
@property (nonatomic,retain) NSString * edition;                                                   //@synthesize edition=_edition - In the implementation block
@property (assign,nonatomic) BOOL hasHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long halfLifeMilliseconds;                              //@synthesize halfLifeMilliseconds=_halfLifeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasIsDraft; 
@property (assign,nonatomic) BOOL isDraft;                                                         //@synthesize isDraft=_isDraft - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                          //@synthesize isPaid=_isPaid - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDescription; 
@property (nonatomic,retain) NSString * issueDescription;                                          //@synthesize issueDescription=_issueDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLayeredCover; 
@property (nonatomic,retain) NSString * layeredCover;                                              //@synthesize layeredCover=_layeredCover - In the implementation block
@property (assign,nonatomic) BOOL hasLayeredCoverAspectRatio; 
@property (assign,nonatomic) double layeredCoverAspectRatio;                                       //@synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL hasLayeredCoverPrimaryColor; 
@property (nonatomic,retain) NSString * layeredCoverPrimaryColor;                                  //@synthesize layeredCoverPrimaryColor=_layeredCoverPrimaryColor - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataURL; 
@property (nonatomic,retain) NSString * metadataURL;                                               //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationDescription; 
@property (nonatomic,retain) NSString * notificationDescription;                                   //@synthesize notificationDescription=_notificationDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishDate; 
@property (nonatomic,retain) NTPBDate * publishDate;                                               //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,readonly) BOOL hasScores; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;              //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicTagIDs;                                         //@synthesize topicTagIDs=_topicTagIDs - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                         //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPdfResourceArchiveURL; 
@property (nonatomic,retain) NSString * pdfResourceArchiveURL;                                     //@synthesize pdfResourceArchiveURL=_pdfResourceArchiveURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleFeaturedArticleIDs;                            //@synthesize bundleFeaturedArticleIDs=_bundleFeaturedArticleIDs - In the implementation block
+(Class)blockedStorefrontIDsType;
+(Class)allowedStorefrontIDsType;
+(Class)allArticleIDsType;
+(Class)topicTagIDsType;
+(Class)bundleFeaturedArticleIDsType;
-(BOOL)isAllowedInStorefront:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)edition;
-(void)setEdition:(NSString *)arg1 ;
-(NTPBDate *)publishDate;
-(void)setPublishDate:(NTPBDate *)arg1 ;
-(NSString *)metadataURL;
-(void)setMetadataURL:(NSString *)arg1 ;
-(BOOL)isDraft;
-(BOOL)isPaid;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(void)setScores:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)arg1 ;
-(void)setAllArticleIDs:(NSMutableArray *)arg1 ;
-(void)setAllowedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setBlockedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setChannelTagID:(NSString *)arg1 ;
-(void)setCoverArticleID:(NSString *)arg1 ;
-(void)setCoverAspectRatio:(double)arg1 ;
-(void)setCoverImageURL:(NSString *)arg1 ;
-(void)setCoverPrimaryColor:(NSString *)arg1 ;
-(void)setHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setIsDraft:(BOOL)arg1 ;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setIssueDescription:(NSString *)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(void)setLayeredCover:(NSString *)arg1 ;
-(void)setLayeredCoverAspectRatio:(double)arg1 ;
-(void)setLayeredCoverPrimaryColor:(NSString *)arg1 ;
-(void)setNotificationDescription:(NSString *)arg1 ;
-(void)setPdfResourceArchiveURL:(NSString *)arg1 ;
-(void)setTopicTagIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)blockedStorefrontIDs;
-(NSMutableArray *)allowedStorefrontIDs;
-(NSMutableArray *)allArticleIDs;
-(unsigned long long)halfLifeMilliseconds;
-(NSMutableArray *)topicTagIDs;
-(NSString *)coverImageURL;
-(long long)minimumNewsVersion;
-(NSString *)channelTagID;
-(NSString *)pdfResourceArchiveURL;
-(BOOL)hasMetadataURL;
-(BOOL)hasCoverImageURL;
-(double)coverAspectRatio;
-(NSString *)coverPrimaryColor;
-(NSString *)layeredCover;
-(double)layeredCoverAspectRatio;
-(NSString *)layeredCoverPrimaryColor;
-(NSString *)coverArticleID;
-(NSString *)notificationDescription;
-(NSString *)issueDescription;
-(BOOL)hasBase;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
-(BOOL)hasScores;
-(void)addBlockedStorefrontIDs:(id)arg1 ;
-(void)addAllowedStorefrontIDs:(id)arg1 ;
-(BOOL)hasPublishDate;
-(void)clearBlockedStorefrontIDs;
-(unsigned long long)blockedStorefrontIDsCount;
-(id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearAllowedStorefrontIDs;
-(unsigned long long)allowedStorefrontIDsCount;
-(id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDraft:(BOOL)arg1 ;
-(BOOL)hasIsDraft;
-(void)setHasHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHalfLifeMilliseconds;
-(void)setBundleFeaturedArticleIDs:(NSMutableArray *)arg1 ;
-(void)addAllArticleIDs:(id)arg1 ;
-(void)addTopicTagIDs:(id)arg1 ;
-(void)addBundleFeaturedArticleIDs:(id)arg1 ;
-(void)clearAllArticleIDs;
-(unsigned long long)allArticleIDsCount;
-(id)allArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChannelTagID;
-(BOOL)hasCoverArticleID;
-(void)setHasCoverAspectRatio:(BOOL)arg1 ;
-(BOOL)hasCoverAspectRatio;
-(BOOL)hasCoverPrimaryColor;
-(BOOL)hasEdition;
-(BOOL)hasIssueDescription;
-(BOOL)hasLayeredCover;
-(void)setHasLayeredCoverAspectRatio:(BOOL)arg1 ;
-(BOOL)hasLayeredCoverAspectRatio;
-(BOOL)hasLayeredCoverPrimaryColor;
-(BOOL)hasNotificationDescription;
-(void)clearTopicTagIDs;
-(unsigned long long)topicTagIDsCount;
-(id)topicTagIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPdfResourceArchiveURL;
-(void)clearBundleFeaturedArticleIDs;
-(unsigned long long)bundleFeaturedArticleIDsCount;
-(id)bundleFeaturedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)bundleFeaturedArticleIDs;
@end

