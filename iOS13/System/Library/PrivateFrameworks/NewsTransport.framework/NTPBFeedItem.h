/*
* Generated on Monday, March 1, 2021 at 2:32:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCClassifiable.h>
#import <libobjc.A.dylib/FCFeedTransformationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface NTPBFeedItem : PBCodable <FCClassifiable, FCFeedTransformationItem, NSCopying> {

	long long _bodyTextLength;
	unsigned long long _contentType;
	unsigned long long _feedHalfLifeMilliseconds;
	double _globalUserFeedback;
	long long _minimumNewsVersion;
	unsigned long long _order;
	unsigned long long _publishDateMilliseconds;
	long long _publisherArticleVersion;
	NSString* _articleID;
	NSString* _clusterID;
	NSString* _feedID;
	NSString* _parentIssueID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;
	NSString* _sourceChannelID;
	NSMutableArray* _topicIDs;
	BOOL _hasThumbnail;
	BOOL _hasVideo;
	BOOL _isBundlePaid;
	BOOL _isExplicitContent;
	BOOL _isFeatured;
	BOOL _isFromBlockedStorefront;
	BOOL _isHiddenFromAutoFavorites;
	BOOL _isPaid;
	SCD_Struct_NT7 _has;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,readonly) BOOL hasFeedID; 
@property (nonatomic,retain) NSString * feedID;                                                             //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                                          //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) unsigned long long order;                                                      //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL hasPublishDateMilliseconds; 
@property (assign,nonatomic) unsigned long long publishDateMilliseconds;                                    //@synthesize publishDateMilliseconds=_publishDateMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFeedHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long feedHalfLifeMilliseconds;                                   //@synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalUserFeedback; 
@property (assign,nonatomic) double globalUserFeedback;                                                     //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                          //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelID; 
@property (nonatomic,retain) NSString * sourceChannelID;                                                    //@synthesize sourceChannelID=_sourceChannelID - In the implementation block
@property (assign,nonatomic) BOOL hasHasThumbnail; 
@property (assign,nonatomic) BOOL hasThumbnail;                                                             //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromBlockedStorefront; 
@property (assign,nonatomic) BOOL isFromBlockedStorefront;                                                  //@synthesize isFromBlockedStorefront=_isFromBlockedStorefront - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitContent; 
@property (assign,nonatomic) BOOL isExplicitContent;                                                        //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                  //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) unsigned long long contentType;                                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIDs;                                                     //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                                   //@synthesize isPaid=_isPaid - In the implementation block
@property (assign,nonatomic) BOOL hasHasVideo; 
@property (assign,nonatomic) BOOL hasVideo;                                                                 //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                             //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasScores; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;                       //@synthesize scores=_scores - In the implementation block
@property (assign,nonatomic) BOOL hasIsHiddenFromAutoFavorites; 
@property (assign,nonatomic) BOOL isHiddenFromAutoFavorites;                                                //@synthesize isHiddenFromAutoFavorites=_isHiddenFromAutoFavorites - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIssueID; 
@property (nonatomic,retain) NSString * parentIssueID;                                                      //@synthesize parentIssueID=_parentIssueID - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                                                             //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasBodyTextLength; 
@property (assign,nonatomic) long long bodyTextLength;                                                      //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatured; 
@property (assign,nonatomic) BOOL isFeatured;                                                               //@synthesize isFeatured=_isFeatured - In the implementation block
+(id)cloudKitKeysWithStorefrontID:(id)arg1 ;
+(id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2 ;
+(Class)topicIDsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)publisherID;
-(NSString *)itemID;
-(NSDate *)publishDate;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(long long)publisherArticleVersion;
-(BOOL)canBePurchased;
-(long long)compareOrderDescending:(id)arg1 ;
-(BOOL)hasFeature:(id)arg1 ;
-(void)enumerateFeaturesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)articleContentType;
-(long long)compareOrder:(id)arg1 ;
-(BOOL)mustShow;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)order;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(BOOL)hasThumbnail;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)isExplicitContent;
-(BOOL)isPaid;
-(void)setClusterID:(NSString *)arg1 ;
-(NSString *)clusterID;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(void)setScores:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)arg1 ;
-(void)setHasHasVideo:(BOOL)arg1 ;
-(BOOL)hasHasVideo;
-(BOOL)isBundlePaid;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(NSString *)feedID;
-(NSArray *)topicIDs;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isHiddenFromAutoFavorites;
-(long long)bodyTextLength;
-(BOOL)isFeatured;
-(void)setFeedID:(NSString *)arg1 ;
-(unsigned long long)publishDateMilliseconds;
-(long long)publisherArticleVersion;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(long long)minimumNewsVersion;
-(NSString *)sourceChannelID;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setParentIssueID:(NSString *)arg1 ;
-(void)setBodyTextLength:(long long)arg1 ;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(void)setIsExplicitContent:(BOOL)arg1 ;
-(NSString *)parentIssueID;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setPublishDateMilliseconds:(unsigned long long)arg1 ;
-(void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(void)setIsFeatured:(BOOL)arg1 ;
-(void)setIsFromBlockedStorefront:(BOOL)arg1 ;
-(void)setIsHiddenFromAutoFavorites:(BOOL)arg1 ;
-(void)setHasOrder:(BOOL)arg1 ;
-(BOOL)hasOrder;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)hasArticleID;
-(void)addTopicIDs:(id)arg1 ;
-(BOOL)hasFeedID;
-(void)setHasPublishDateMilliseconds:(BOOL)arg1 ;
-(BOOL)hasPublishDateMilliseconds;
-(void)setHasFeedHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFeedHalfLifeMilliseconds;
-(void)setHasGlobalUserFeedback:(BOOL)arg1 ;
-(BOOL)hasClusterID;
-(BOOL)hasSourceChannelID;
-(void)setHasHasThumbnail:(BOOL)arg1 ;
-(BOOL)hasHasThumbnail;
-(void)setHasIsFromBlockedStorefront:(BOOL)arg1 ;
-(BOOL)hasIsFromBlockedStorefront;
-(void)setHasIsExplicitContent:(BOOL)arg1 ;
-(BOOL)hasIsExplicitContent;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)clearTopicIDs;
-(unsigned long long)topicIDsCount;
-(id)topicIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
-(BOOL)hasScores;
-(void)setHasIsHiddenFromAutoFavorites:(BOOL)arg1 ;
-(BOOL)hasIsHiddenFromAutoFavorites;
-(BOOL)hasParentIssueID;
-(void)setHasIsBundlePaid:(BOOL)arg1 ;
-(BOOL)hasIsBundlePaid;
-(void)setHasBodyTextLength:(BOOL)arg1 ;
-(BOOL)hasBodyTextLength;
-(void)setHasIsFeatured:(BOOL)arg1 ;
-(BOOL)hasIsFeatured;
@end

