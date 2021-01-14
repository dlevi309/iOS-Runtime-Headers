/*
* Generated on Thursday, January 14, 2021 at 2:23:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCClassifiable.h>
#import <libobjc.A.dylib/FCFeedTransformationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSMutableArray, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

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
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats* _conversionStats;
	NSString* _feedID;
	NSString* _parentIssueID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;
	NSString* _sourceArticleListID;
	NSString* _sourceChannelID;
	NSMutableArray* _topicIDs;
	BOOL _hasAudioTrack;
	BOOL _hasThumbnail;
	BOOL _hasVideo;
	BOOL _isBundlePaid;
	BOOL _isEvergreen;
	BOOL _isExplicitContent;
	BOOL _isFeatured;
	BOOL _isFromBlockedStorefront;
	BOOL _isHiddenFromAutoFavorites;
	BOOL _isPaid;
	SCD_Struct_NT17 _has;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,copy,readonly) NSString * articleID; 
@property (nonatomic,copy,readonly) NSString * clusterID; 
@property (nonatomic,readonly) unsigned long long contentType; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (nonatomic,readonly) double globalUserFeedback; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long minimumNewsVersion; 
@property (nonatomic,readonly) long long publisherArticleVersion; 
@property (nonatomic,readonly) BOOL canBePurchased; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> sourceChannel; 
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSDate * publishDate; 
@property (nonatomic,readonly) unsigned long long halfLife; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,copy,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats; 
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,readonly) BOOL hasAudioTrack; 
@property (nonatomic,readonly) BOOL isEvergreen; 
@property (nonatomic,copy,readonly) NSArray * iAdCategories; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt; 
@property (nonatomic,readonly) BOOL hasFeedID; 
@property (nonatomic,retain) NSString * feedID;                                                                                //@synthesize feedID=_feedID - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                                                             //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasOrder; 
@property (assign,nonatomic) unsigned long long order;                                                                         //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) BOOL hasPublishDateMilliseconds; 
@property (assign,nonatomic) unsigned long long publishDateMilliseconds;                                                       //@synthesize publishDateMilliseconds=_publishDateMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFeedHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long feedHalfLifeMilliseconds;                                                      //@synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalUserFeedback; 
@property (assign,nonatomic) double globalUserFeedback;                                                                        //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                                             //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelID; 
@property (nonatomic,retain) NSString * sourceChannelID;                                                                       //@synthesize sourceChannelID=_sourceChannelID - In the implementation block
@property (assign,nonatomic) BOOL hasHasThumbnail; 
@property (assign,nonatomic) BOOL hasThumbnail;                                                                                //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromBlockedStorefront; 
@property (assign,nonatomic) BOOL isFromBlockedStorefront;                                                                     //@synthesize isFromBlockedStorefront=_isFromBlockedStorefront - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitContent; 
@property (assign,nonatomic) BOOL isExplicitContent;                                                                           //@synthesize isExplicitContent=_isExplicitContent - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                                     //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) unsigned long long contentType;                                                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIDs;                                                                        //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                                                      //@synthesize isPaid=_isPaid - In the implementation block
@property (assign,nonatomic) BOOL hasHasVideo; 
@property (assign,nonatomic) BOOL hasVideo;                                                                                    //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                                                //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasScores; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;                                          //@synthesize scores=_scores - In the implementation block
@property (assign,nonatomic) BOOL hasIsHiddenFromAutoFavorites; 
@property (assign,nonatomic) BOOL isHiddenFromAutoFavorites;                                                                   //@synthesize isHiddenFromAutoFavorites=_isHiddenFromAutoFavorites - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIssueID; 
@property (nonatomic,retain) NSString * parentIssueID;                                                                         //@synthesize parentIssueID=_parentIssueID - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                                                                                //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasBodyTextLength; 
@property (assign,nonatomic) long long bodyTextLength;                                                                         //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatured; 
@property (assign,nonatomic) BOOL isFeatured;                                                                                  //@synthesize isFeatured=_isFeatured - In the implementation block
@property (assign,nonatomic) BOOL hasHasAudioTrack; 
@property (assign,nonatomic) BOOL hasAudioTrack;                                                                               //@synthesize hasAudioTrack=_hasAudioTrack - In the implementation block
@property (nonatomic,readonly) BOOL hasConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats * conversionStats;                        //@synthesize conversionStats=_conversionStats - In the implementation block
@property (assign,nonatomic) BOOL hasIsEvergreen; 
@property (assign,nonatomic) BOOL isEvergreen;                                                                                 //@synthesize isEvergreen=_isEvergreen - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceArticleListID; 
@property (nonatomic,retain) NSString * sourceArticleListID;                                                                   //@synthesize sourceArticleListID=_sourceArticleListID - In the implementation block
+(id)keysForArticleRecordWithRecordSource:(id)arg1 ;
+(id)feedItemFromCKRecord:(id)arg1 storefrontID:(id)arg2 recordSource:(id)arg3 ;
+(id)keysForFeedItemAndArticleRecordWithRecordSource:(id)arg1 ;
+(Class)topicIDsType;
-(BOOL)hasFeature:(id)arg1 ;
-(unsigned long long)halfLife;
-(void)enumerateFeaturesWithBlock:(/*^block*/id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(BOOL)canBePurchased;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(long long)publisherArticleVersion;
-(long long)compareOrderDescending:(id)arg1 ;
-(NSString *)sourceFeedID;
-(NSString *)description;
-(NSString *)itemID;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(NSString *)publisherID;
-(BOOL)mustShow;
-(unsigned long long)hash;
-(long long)compareOrder:(id)arg1 ;
-(BOOL)isANF;
-(NSDate *)publishDate;
-(NSString *)identifier;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(BOOL)hasGlobalUserFeedback;
-(unsigned long long)articleContentType;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1 ;
-(void)setFeedID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasClusterID;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setParentIssueID:(NSString *)arg1 ;
-(void)setBodyTextLength:(long long)arg1 ;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(long long)bodyTextLength;
-(void)setHasVideo:(BOOL)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(unsigned long long)contentType;
-(void)setIsExplicitContent:(BOOL)arg1 ;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(NSArray *)topicIDs;
-(void)mergeFrom:(id)arg1 ;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(NSString *)articleID;
-(long long)publisherArticleVersion;
-(void)setHasHasVideo:(BOOL)arg1 ;
-(BOOL)hasThumbnail;
-(BOOL)hasArticleID;
-(BOOL)isPaid;
-(void)setIsEvergreen:(BOOL)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)parentIssueID;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setSourceArticleListID:(NSString *)arg1 ;
-(unsigned long long)publishDateMilliseconds;
-(BOOL)isExplicitContent;
-(NSString *)sourceArticleListID;
-(BOOL)hasHasVideo;
-(BOOL)hasConversionStats;
-(void)setConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(BOOL)isEvergreen;
-(NSString *)sourceChannelID;
-(BOOL)hasOrder;
-(unsigned long long)hash;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(void)setSourceChannelID:(NSString *)arg1 ;
-(void)setIsFeatured:(BOOL)arg1 ;
-(void)setIsFromBlockedStorefront:(BOOL)arg1 ;
-(void)setHasAudioTrack:(BOOL)arg1 ;
-(void)setIsHiddenFromAutoFavorites:(BOOL)arg1 ;
-(void)setPublishDateMilliseconds:(unsigned long long)arg1 ;
-(void)setFeedHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(BOOL)isBundlePaid;
-(BOOL)hasPublisherArticleVersion;
-(void)setContentType:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setScores:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)arg1 ;
-(NSString *)feedID;
-(void)writeTo:(id)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *)conversionStats;
-(void)setHasOrder:(BOOL)arg1 ;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(NSString *)clusterID;
-(void)addTopicIDs:(id)arg1 ;
-(BOOL)hasFeedID;
-(void)setHasPublishDateMilliseconds:(BOOL)arg1 ;
-(BOOL)hasPublishDateMilliseconds;
-(void)setHasFeedHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFeedHalfLifeMilliseconds;
-(void)setHasGlobalUserFeedback:(BOOL)arg1 ;
-(BOOL)hasSourceChannelID;
-(void)setHasHasThumbnail:(BOOL)arg1 ;
-(BOOL)hasHasThumbnail;
-(void)setHasIsFromBlockedStorefront:(BOOL)arg1 ;
-(BOOL)hasIsFromBlockedStorefront;
-(void)clearTopicIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFeatured;
-(void)setHasIsExplicitContent:(BOOL)arg1 ;
-(BOOL)hasIsExplicitContent;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
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
-(void)setHasHasAudioTrack:(BOOL)arg1 ;
-(BOOL)hasHasAudioTrack;
-(void)setHasIsEvergreen:(BOOL)arg1 ;
-(BOOL)hasIsEvergreen;
-(BOOL)hasSourceArticleListID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)hasVideo;
-(long long)minimumNewsVersion;
-(BOOL)hasAudioTrack;
@end

