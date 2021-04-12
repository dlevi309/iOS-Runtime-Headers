/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData, NTPBRecordBase, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NTPBDate, NSArray;

@interface NTPBArticleRecord : PBCodable <NSCopying> {

	long long _backendArticleVersion;
	long long _behaviorFlags;
	long long _bodyTextLength;
	unsigned long long _halfLifeMilliseconds;
	double _layeredCoverAspectRatio;
	long long _minimumNewsVersion;
	long long _publisherArticleVersion;
	long long _thumbnailFocalFrame;
	long long _thumbnailHQMetadata;
	long long _thumbnailLQMetadata;
	long long _thumbnailMediumMetadata;
	long long _thumbnailMetadata;
	long long _thumbnailUltraHQMetadata;
	long long _thumbnailWidgetHQMetadata;
	long long _thumbnailWidgetLQMetadata;
	long long _thumbnailWidgetMetadata;
	NSString* _accessoryText;
	NSMutableArray* _allowedStorefrontIDs;
	NSData* _articleRecirculationConfiguration;
	NTPBRecordBase* _base;
	NSMutableArray* _blockedStorefrontIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _channelConversionStats;
	NSString* _clusterID;
	int _contentType;
	NSString* _contentURL;
	NSString* _coverArt;
	NSString* _excerptURL;
	NSMutableArray* _experimentalTitles;
	NSString* _flintDocumentURL;
	NSMutableArray* _flintFontResourceIDs;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	NSMutableArray* _iAdCategories;
	NSMutableArray* _iAdKeywords;
	NSMutableArray* _iAdSectionIDs;
	NSString* _language;
	NSString* _layeredCover;
	NSMutableArray* _linkedArticleIDs;
	NSMutableArray* _linkedIssueIDs;
	NSMutableArray* _moreFromPublisherArticleIDs;
	NSString* _narrativeTrackFullURL;
	NSString* _narrativeTrackMetadata;
	NSString* _narrativeTrackSampleURL;
	NSString* _narrativeTrackTextRanges;
	NSString* _parentIssueID;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVector;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVectorAlt;
	NSString* _personalizationVectorAltFullURL;
	NSString* _personalizationVectorFullURL;
	NSString* _primaryAudience;
	NTPBDate* _publishDate;
	NSMutableArray* _publisherSpecifiedArticleIds;
	NSString* _referencedArticleID;
	NSMutableArray* _relatedArticleIDs;
	int _role;
	NSString* _shortExcerpt;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _sourceChannelCohorts;
	NSString* _sourceChannelTagID;
	NSString* _stocksClusterID;
	NSString* _stocksMetadata;
	NSString* _stocksScores;
	int _storyType;
	NSString* _subtitle;
	NSString* _thumbnailHQURL;
	NSString* _thumbnailLQURL;
	NSString* _thumbnailMediumURL;
	NSString* _thumbnailURL;
	NSString* _thumbnailUltraHQURL;
	NSString* _thumbnailWidgetHQTaggedURL;
	NSString* _thumbnailWidgetHQURL;
	NSString* _thumbnailWidgetLQTaggedURL;
	NSString* _thumbnailWidgetLQURL;
	NSString* _thumbnailWidgetTaggedURL;
	NSString* _thumbnailWidgetURL;
	NSString* _title;
	NSString* _titleCompact;
	NSMutableArray* _topics;
	NSString* _videoCallToActionTitle;
	NSString* _videoCallToActionURL;
	NSString* _videoURL;
	BOOL _isBundlePaid;
	BOOL _isDraft;
	BOOL _isFeatureCandidate;
	BOOL _isIssueOnly;
	BOOL _isPaid;
	BOOL _isSponsored;
	SCD_Struct_NT27 _has;

}

@property (nonatomic,readonly) NSArray * topicIDs; 
@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                                                          //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleID; 
@property (nonatomic,retain) NSString * referencedArticleID;                                                                 //@synthesize referencedArticleID=_referencedArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                                                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagID; 
@property (nonatomic,retain) NSString * sourceChannelTagID;                                                                  //@synthesize sourceChannelTagID=_sourceChannelTagID - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishDate; 
@property (nonatomic,retain) NTPBDate * publishDate;                                                                         //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                                                              //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) long long backendArticleVersion;                                                                //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailLQURL; 
@property (nonatomic,retain) NSString * thumbnailLQURL;                                                                      //@synthesize thumbnailLQURL=_thumbnailLQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailLQMetadata; 
@property (assign,nonatomic) long long thumbnailLQMetadata;                                                                  //@synthesize thumbnailLQMetadata=_thumbnailLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAudience; 
@property (nonatomic,retain) NSString * primaryAudience;                                                                     //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerptURL; 
@property (nonatomic,retain) NSString * excerptURL;                                                                          //@synthesize excerptURL=_excerptURL - In the implementation block
@property (nonatomic,readonly) BOOL hasShortExcerpt; 
@property (nonatomic,retain) NSString * shortExcerpt;                                                                        //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryText; 
@property (nonatomic,retain) NSString * accessoryText;                                                                       //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) BOOL hasContentURL; 
@property (nonatomic,retain) NSString * contentURL;                                                                          //@synthesize contentURL=_contentURL - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                                                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterID; 
@property (nonatomic,retain) NSString * clusterID;                                                                           //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasFlintDocumentURL; 
@property (nonatomic,retain) NSString * flintDocumentURL;                                                                    //@synthesize flintDocumentURL=_flintDocumentURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * flintFontResourceIDs;                                                          //@synthesize flintFontResourceIDs=_flintFontResourceIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoURL; 
@property (nonatomic,retain) NSString * videoURL;                                                                            //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) BOOL hasIsBundlePaid; 
@property (assign,nonatomic) BOOL isBundlePaid;                                                                              //@synthesize isBundlePaid=_isBundlePaid - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatureCandidate; 
@property (assign,nonatomic) BOOL isFeatureCandidate;                                                                        //@synthesize isFeatureCandidate=_isFeatureCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasIsSponsored; 
@property (assign,nonatomic) BOOL isSponsored;                                                                               //@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdCategories;                                                                 //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdKeywords;                                                                   //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdSectionIDs;                                                                 //@synthesize iAdSectionIDs=_iAdSectionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockedStorefrontIDs;                                                          //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedStorefrontIDs;                                                          //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsDraft; 
@property (assign,nonatomic) BOOL isDraft;                                                                                   //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedArticleIDs;                                                             //@synthesize relatedArticleIDs=_relatedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreFromPublisherArticleIDs;                                                   //@synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailURL; 
@property (nonatomic,retain) NSString * thumbnailURL;                                                                        //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMetadata; 
@property (assign,nonatomic) long long thumbnailMetadata;                                                                    //@synthesize thumbnailMetadata=_thumbnailMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailFocalFrame; 
@property (assign,nonatomic) long long thumbnailFocalFrame;                                                                  //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailMediumURL; 
@property (nonatomic,retain) NSString * thumbnailMediumURL;                                                                  //@synthesize thumbnailMediumURL=_thumbnailMediumURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMediumMetadata; 
@property (assign,nonatomic) long long thumbnailMediumMetadata;                                                              //@synthesize thumbnailMediumMetadata=_thumbnailMediumMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailHQURL; 
@property (nonatomic,retain) NSString * thumbnailHQURL;                                                                      //@synthesize thumbnailHQURL=_thumbnailHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailHQMetadata; 
@property (assign,nonatomic) long long thumbnailHQMetadata;                                                                  //@synthesize thumbnailHQMetadata=_thumbnailHQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailUltraHQURL; 
@property (nonatomic,retain) NSString * thumbnailUltraHQURL;                                                                 //@synthesize thumbnailUltraHQURL=_thumbnailUltraHQURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailUltraHQMetadata; 
@property (assign,nonatomic) long long thumbnailUltraHQMetadata;                                                             //@synthesize thumbnailUltraHQMetadata=_thumbnailUltraHQMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasStoryType; 
@property (assign,nonatomic) int storyType;                                                                                  //@synthesize storyType=_storyType - In the implementation block
@property (assign,nonatomic) BOOL hasBehaviorFlags; 
@property (assign,nonatomic) long long behaviorFlags;                                                                        //@synthesize behaviorFlags=_behaviorFlags - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumNewsVersion; 
@property (assign,nonatomic) long long minimumNewsVersion;                                                                   //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCoverArt; 
@property (nonatomic,retain) NSString * coverArt;                                                                            //@synthesize coverArt=_coverArt - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaid; 
@property (assign,nonatomic) BOOL isPaid;                                                                                    //@synthesize isPaid=_isPaid - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQURL;                                                                //@synthesize thumbnailWidgetLQURL=_thumbnailWidgetLQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetLQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetLQTaggedURL;                                                          //@synthesize thumbnailWidgetLQTaggedURL=_thumbnailWidgetLQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetLQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetLQMetadata;                                                            //@synthesize thumbnailWidgetLQMetadata=_thumbnailWidgetLQMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetURL;                                                                  //@synthesize thumbnailWidgetURL=_thumbnailWidgetURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetTaggedURL;                                                            //@synthesize thumbnailWidgetTaggedURL=_thumbnailWidgetTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetMetadata;                                                              //@synthesize thumbnailWidgetMetadata=_thumbnailWidgetMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQURL;                                                                //@synthesize thumbnailWidgetHQURL=_thumbnailWidgetHQURL - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailWidgetHQTaggedURL; 
@property (nonatomic,retain) NSString * thumbnailWidgetHQTaggedURL;                                                          //@synthesize thumbnailWidgetHQTaggedURL=_thumbnailWidgetHQTaggedURL - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailWidgetHQMetadata; 
@property (assign,nonatomic) long long thumbnailWidgetHQMetadata;                                                            //@synthesize thumbnailWidgetHQMetadata=_thumbnailWidgetHQMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * topics;                                                                        //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * sourceChannelCohorts;                             //@synthesize sourceChannelCohorts=_sourceChannelCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalCohorts; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                                    //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleCompact; 
@property (nonatomic,retain) NSString * titleCompact;                                                                        //@synthesize titleCompact=_titleCompact - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoCallToActionTitle; 
@property (nonatomic,retain) NSString * videoCallToActionTitle;                                                              //@synthesize videoCallToActionTitle=_videoCallToActionTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoCallToActionURL; 
@property (nonatomic,retain) NSString * videoCallToActionURL;                                                                //@synthesize videoCallToActionURL=_videoCallToActionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleRecirculationConfiguration; 
@property (nonatomic,retain) NSData * articleRecirculationConfiguration;                                                     //@synthesize articleRecirculationConfiguration=_articleRecirculationConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * publisherSpecifiedArticleIds;                                                  //@synthesize publisherSpecifiedArticleIds=_publisherSpecifiedArticleIds - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksClusterID; 
@property (nonatomic,retain) NSString * stocksClusterID;                                                                     //@synthesize stocksClusterID=_stocksClusterID - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksMetadata; 
@property (nonatomic,retain) NSString * stocksMetadata;                                                                      //@synthesize stocksMetadata=_stocksMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasStocksScores; 
@property (nonatomic,retain) NSString * stocksScores;                                                                        //@synthesize stocksScores=_stocksScores - In the implementation block
@property (nonatomic,retain) NSMutableArray * experimentalTitles;                                                            //@synthesize experimentalTitles=_experimentalTitles - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIssueID; 
@property (nonatomic,retain) NSString * parentIssueID;                                                                       //@synthesize parentIssueID=_parentIssueID - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                                                            //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                                                       //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL hasHalfLifeMilliseconds; 
@property (assign,nonatomic) unsigned long long halfLifeMilliseconds;                                                        //@synthesize halfLifeMilliseconds=_halfLifeMilliseconds - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedArticleIDs;                                                              //@synthesize linkedArticleIDs=_linkedArticleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedIssueIDs;                                                                //@synthesize linkedIssueIDs=_linkedIssueIDs - In the implementation block
@property (assign,nonatomic) BOOL hasIsIssueOnly; 
@property (assign,nonatomic) BOOL isIssueOnly;                                                                               //@synthesize isIssueOnly=_isIssueOnly - In the implementation block
@property (assign,nonatomic) BOOL hasBodyTextLength; 
@property (assign,nonatomic) long long bodyTextLength;                                                                       //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationVector; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector;                 //@synthesize personalizationVector=_personalizationVector - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationVectorAlt; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt;              //@synthesize personalizationVectorAlt=_personalizationVectorAlt - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationVectorFullURL; 
@property (nonatomic,retain) NSString * personalizationVectorFullURL;                                                        //@synthesize personalizationVectorFullURL=_personalizationVectorFullURL - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonalizationVectorAltFullURL; 
@property (nonatomic,retain) NSString * personalizationVectorAltFullURL;                                                     //@synthesize personalizationVectorAltFullURL=_personalizationVectorAltFullURL - In the implementation block
@property (nonatomic,readonly) BOOL hasNarrativeTrackMetadata; 
@property (nonatomic,retain) NSString * narrativeTrackMetadata;                                                              //@synthesize narrativeTrackMetadata=_narrativeTrackMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasNarrativeTrackFullURL; 
@property (nonatomic,retain) NSString * narrativeTrackFullURL;                                                               //@synthesize narrativeTrackFullURL=_narrativeTrackFullURL - In the implementation block
@property (nonatomic,readonly) BOOL hasNarrativeTrackSampleURL; 
@property (nonatomic,retain) NSString * narrativeTrackSampleURL;                                                             //@synthesize narrativeTrackSampleURL=_narrativeTrackSampleURL - In the implementation block
@property (nonatomic,readonly) BOOL hasNarrativeTrackTextRanges; 
@property (nonatomic,retain) NSString * narrativeTrackTextRanges;                                                            //@synthesize narrativeTrackTextRanges=_narrativeTrackTextRanges - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * channelConversionStats;                      //@synthesize channelConversionStats=_channelConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasGlobalConversionStats; 
@property (nonatomic,retain) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats;                       //@synthesize globalConversionStats=_globalConversionStats - In the implementation block
@property (nonatomic,readonly) BOOL hasLayeredCover; 
@property (nonatomic,retain) NSString * layeredCover;                                                                        //@synthesize layeredCover=_layeredCover - In the implementation block
@property (assign,nonatomic) BOOL hasLayeredCoverAspectRatio; 
@property (assign,nonatomic) double layeredCoverAspectRatio;                                                                 //@synthesize layeredCoverAspectRatio=_layeredCoverAspectRatio - In the implementation block
+(Class)iAdKeywordsType;
+(Class)flintFontResourceIDsType;
+(Class)publisherSpecifiedArticleIdsType;
+(Class)blockedStorefrontIDsType;
+(Class)iAdCategoriesType;
+(Class)linkedIssueIDsType;
+(Class)allowedStorefrontIDsType;
+(Class)iAdSectionIDsType;
+(Class)linkedArticleIDsType;
+(Class)topicsType;
+(Class)experimentalTitlesType;
+(Class)moreFromPublisherArticleIDsType;
+(Class)relatedArticleIDsType;
-(id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2 ;
-(id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1 ;
-(BOOL)isAllowedInStorefront:(id)arg1 ;
-(id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1 ;
-(NSArray *)topicIDs;
-(BOOL)hasRole;
-(void)setHasRole:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)moreFromPublisherArticleIDs;
-(NTPBRecordBase *)base;
-(NSString *)contentURL;
-(int)storyType;
-(NSString *)narrativeTrackTextRanges;
-(void)addFlintFontResourceIDs:(id)arg1 ;
-(void)addIAdCategories:(id)arg1 ;
-(void)addIAdKeywords:(id)arg1 ;
-(void)addIAdSectionIDs:(id)arg1 ;
-(void)addBlockedStorefrontIDs:(id)arg1 ;
-(void)addAllowedStorefrontIDs:(id)arg1 ;
-(void)addRelatedArticleIDs:(id)arg1 ;
-(void)addMoreFromPublisherArticleIDs:(id)arg1 ;
-(void)addPublisherSpecifiedArticleIds:(id)arg1 ;
-(void)addExperimentalTitles:(id)arg1 ;
-(void)addLinkedArticleIDs:(id)arg1 ;
-(void)addLinkedIssueIDs:(id)arg1 ;
-(BOOL)hasReferencedArticleID;
-(BOOL)hasSourceChannelTagID;
-(BOOL)hasPublishDate;
-(NSString *)flintDocumentURL;
-(void)setGlobalCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(BOOL)hasLanguage;
-(NSString *)excerptURL;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(BOOL)hasStoryType;
-(BOOL)hasClusterID;
-(void)setExperimentalTitles:(NSMutableArray *)arg1 ;
-(void)setThumbnailLQURL:(NSString *)arg1 ;
-(void)setThumbnailLQMetadata:(long long)arg1 ;
-(void)setThumbnailMetadata:(long long)arg1 ;
-(void)setThumbnailMediumMetadata:(long long)arg1 ;
-(void)setThumbnailHQMetadata:(long long)arg1 ;
-(void)setThumbnailUltraHQMetadata:(long long)arg1 ;
-(void)setIsSponsored:(BOOL)arg1 ;
-(void)setThumbnailWidgetLQMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetMetadata:(long long)arg1 ;
-(void)setThumbnailWidgetHQMetadata:(long long)arg1 ;
-(void)setThumbnailMediumURL:(NSString *)arg1 ;
-(void)setThumbnailHQURL:(NSString *)arg1 ;
-(void)setCoverArt:(NSString *)arg1 ;
-(void)setThumbnailUltraHQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetLQURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQURL:(NSString *)arg1 ;
-(void)setFlintDocumentURL:(NSString *)arg1 ;
-(void)setIsFeatureCandidate:(BOOL)arg1 ;
-(void)setIAdCategories:(NSMutableArray *)arg1 ;
-(void)setIAdSectionIDs:(NSMutableArray *)arg1 ;
-(void)setPrimaryAudience:(NSString *)arg1 ;
-(void)setReferencedArticleID:(NSString *)arg1 ;
-(void)setRelatedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setMoreFromPublisherArticleIDs:(NSMutableArray *)arg1 ;
-(BOOL)hasTitle;
-(void)setParentIssueID:(NSString *)arg1 ;
-(void)setLinkedArticleIDs:(NSMutableArray *)arg1 ;
-(void)setLinkedIssueIDs:(NSMutableArray *)arg1 ;
-(void)setBodyTextLength:(long long)arg1 ;
-(void)setVideoCallToActionTitle:(NSString *)arg1 ;
-(void)setVideoCallToActionURL:(NSString *)arg1 ;
-(BOOL)hasThumbnailLQURL;
-(void)setHasThumbnailLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailLQMetadata;
-(BOOL)hasPrimaryAudience;
-(BOOL)hasExcerptURL;
-(BOOL)hasShortExcerpt;
-(BOOL)hasAccessoryText;
-(BOOL)hasContentURL;
-(BOOL)hasFlintDocumentURL;
-(void)clearFlintFontResourceIDs;
-(unsigned long long)flintFontResourceIDsCount;
-(id)flintFontResourceIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsFeatureCandidate:(BOOL)arg1 ;
-(BOOL)hasIsFeatureCandidate;
-(void)setHasIsSponsored:(BOOL)arg1 ;
-(BOOL)hasIsSponsored;
-(BOOL)hasIsDraft;
-(NSString *)videoCallToActionURL;
-(void)setIsBundlePaid:(BOOL)arg1 ;
-(void)setIsIssueOnly:(BOOL)arg1 ;
-(void)setStocksClusterID:(NSString *)arg1 ;
-(void)setStocksMetadata:(NSString *)arg1 ;
-(void)setStocksScores:(NSString *)arg1 ;
-(void)setPersonalizationVectorFullURL:(NSString *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(void)clearIAdCategories;
-(unsigned long long)iAdCategoriesCount;
-(id)iAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdKeywords;
-(unsigned long long)iAdKeywordsCount;
-(id)iAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdSectionIDs;
-(unsigned long long)iAdSectionIDsCount;
-(id)iAdSectionIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearBlockedStorefrontIDs;
-(unsigned long long)blockedStorefrontIDsCount;
-(id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearAllowedStorefrontIDs;
-(unsigned long long)allowedStorefrontIDsCount;
-(id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1 ;
-(long long)bodyTextLength;
-(BOOL)hasBase;
-(void)setHasIsDraft:(BOOL)arg1 ;
-(void)clearRelatedArticleIDs;
-(unsigned long long)relatedArticleIDsCount;
-(id)relatedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearMoreFromPublisherArticleIDs;
-(unsigned long long)moreFromPublisherArticleIDsCount;
-(id)moreFromPublisherArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailURL;
-(void)setHasThumbnailMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMetadata;
-(void)setHasThumbnailFocalFrame:(BOOL)arg1 ;
-(BOOL)hasThumbnailFocalFrame;
-(BOOL)hasThumbnailMediumURL;
-(BOOL)hasThumbnailHQURL;
-(void)setPersonalizationVectorAlt:(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)arg1 ;
-(void)setPersonalizationVectorAltFullURL:(NSString *)arg1 ;
-(void)setNarrativeTrackMetadata:(NSString *)arg1 ;
-(void)setNarrativeTrackFullURL:(NSString *)arg1 ;
-(void)setVideoURL:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setNarrativeTrackSampleURL:(NSString *)arg1 ;
-(void)setNarrativeTrackTextRanges:(NSString *)arg1 ;
-(void)setGlobalConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)setChannelConversionStats:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)arg1 ;
-(void)setPublisherSpecifiedArticleIds:(NSMutableArray *)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(void)setArticleRecirculationConfiguration:(NSData *)arg1 ;
-(int)contentType;
-(NSString *)thumbnailURL;
-(void)setHasThumbnailMediumMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMediumMetadata;
-(void)setHasThumbnailHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailHQMetadata;
-(BOOL)hasThumbnailUltraHQURL;
-(void)setHasThumbnailUltraHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailUltraHQMetadata;
-(void)setHasBehaviorFlags:(BOOL)arg1 ;
-(BOOL)hasBehaviorFlags;
-(BOOL)hasThumbnailWidgetLQURL;
-(BOOL)hasThumbnailWidgetLQTaggedURL;
-(void)setHasThumbnailWidgetLQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetURL;
-(NSString *)subtitle;
-(BOOL)hasThumbnailWidgetLQMetadata;
-(BOOL)hasThumbnailWidgetTaggedURL;
-(void)setHasThumbnailWidgetMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetMetadata;
-(BOOL)hasThumbnailWidgetHQURL;
-(BOOL)hasThumbnailWidgetHQTaggedURL;
-(void)setHasThumbnailWidgetHQMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailWidgetHQMetadata;
-(BOOL)hasTitleCompact;
-(BOOL)hasVideoCallToActionTitle;
-(BOOL)hasVideoCallToActionURL;
-(BOOL)hasArticleRecirculationConfiguration;
-(void)setTitle:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(NSString *)shortExcerpt;
-(unsigned long long)halfLifeMilliseconds;
-(NSString *)referencedArticleID;
-(NSMutableArray *)experimentalTitles;
-(long long)thumbnailLQMetadata;
-(long long)thumbnailMetadata;
-(void)mergeFrom:(id)arg1 ;
-(double)layeredCoverAspectRatio;
-(long long)thumbnailMediumMetadata;
-(long long)thumbnailHQMetadata;
-(long long)thumbnailUltraHQMetadata;
-(long long)thumbnailWidgetLQMetadata;
-(long long)thumbnailWidgetMetadata;
-(NSString *)thumbnailLQURL;
-(BOOL)isDraft;
-(void)clearPublisherSpecifiedArticleIds;
-(unsigned long long)publisherSpecifiedArticleIdsCount;
-(id)publisherSpecifiedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasStocksClusterID;
-(BOOL)hasStocksMetadata;
-(BOOL)hasStocksScores;
-(void)clearExperimentalTitles;
-(unsigned long long)experimentalTitlesCount;
-(id)experimentalTitlesAtIndex:(unsigned long long)arg1 ;
-(void)setHasHalfLifeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHalfLifeMilliseconds;
-(void)clearLinkedArticleIDs;
-(unsigned long long)linkedArticleIDsCount;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(BOOL)isFeatureCandidate;
-(long long)thumbnailWidgetHQMetadata;
-(NSString *)thumbnailMediumURL;
-(NSString *)thumbnailHQURL;
-(NSString *)thumbnailUltraHQURL;
-(NSString *)thumbnailWidgetLQURL;
-(NSString *)thumbnailWidgetURL;
-(NSString *)thumbnailWidgetHQURL;
-(NSString *)layeredCover;
-(NSData *)articleRecirculationConfiguration;
-(NSMutableArray *)publisherSpecifiedArticleIds;
-(NSString *)stocksMetadata;
-(NSString *)stocksScores;
-(NSString *)narrativeTrackFullURL;
-(NSString *)narrativeTrackSampleURL;
-(NSString *)narrativeTrackMetadata;
-(id)linkedArticleIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearLinkedIssueIDs;
-(unsigned long long)linkedIssueIDsCount;
-(id)linkedIssueIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsIssueOnly:(BOOL)arg1 ;
-(BOOL)hasIsIssueOnly;
-(BOOL)hasPersonalizationVectorAlt;
-(BOOL)hasPersonalizationVectorFullURL;
-(BOOL)hasPersonalizationVectorAltFullURL;
-(BOOL)hasNarrativeTrackMetadata;
-(BOOL)hasNarrativeTrackFullURL;
-(BOOL)hasNarrativeTrackSampleURL;
-(BOOL)hasNarrativeTrackTextRanges;
-(BOOL)hasLayeredCover;
-(void)setThumbnailURL:(NSString *)arg1 ;
-(long long)publisherArticleVersion;
-(NSMutableArray *)iAdCategories;
-(void)setHasLayeredCoverAspectRatio:(BOOL)arg1 ;
-(BOOL)hasLayeredCoverAspectRatio;
-(NSString *)thumbnailWidgetLQTaggedURL;
-(NSString *)thumbnailWidgetTaggedURL;
-(NSString *)thumbnailWidgetHQTaggedURL;
-(NSString *)personalizationVectorFullURL;
-(NSString *)personalizationVectorAltFullURL;
-(BOOL)isIssueOnly;
-(long long)behaviorFlags;
-(NSMutableArray *)topics;
-(BOOL)isPaid;
-(NSMutableArray *)relatedArticleIDs;
-(void)setTopics:(NSMutableArray *)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasSubtitle;
-(id)description;
-(NSString *)parentIssueID;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(void)setClusterID:(NSString *)arg1 ;
-(NSString *)accessoryText;
-(long long)backendArticleVersion;
-(NSString *)coverArt;
-(void)setBackendArticleVersion:(long long)arg1 ;
-(void)setHasStoryType:(BOOL)arg1 ;
-(BOOL)hasSourceChannelCohorts;
-(NSString *)sourceChannelTagID;
-(BOOL)hasPersonalizationVector;
-(BOOL)hasChannelConversionStats;
-(BOOL)hasGlobalConversionStats;
-(void)setTitleCompact:(NSString *)arg1 ;
-(NSMutableArray *)flintFontResourceIDs;
-(BOOL)hasGlobalCohorts;
-(void)setContentURL:(NSString *)arg1 ;
-(void)setFlintFontResourceIDs:(NSMutableArray *)arg1 ;
-(NSString *)primaryAudience;
-(void)setSourceChannelTagID:(NSString *)arg1 ;
-(BOOL)hasVideoURL;
-(unsigned long long)hash;
-(void)setIsPaid:(BOOL)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(NSMutableArray *)iAdKeywords;
-(NSString *)videoURL;
-(BOOL)hasCoverArt;
-(void)setBehaviorFlags:(long long)arg1 ;
-(BOOL)isBundlePaid;
-(void)clearTopics;
-(BOOL)hasPublisherArticleVersion;
-(void)setContentType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addTopics:(id)arg1 ;
-(NTPBDate *)publishDate;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSMutableArray *)allowedStorefrontIDs;
-(BOOL)isSponsored;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)topicsCount;
-(void)setIsDraft:(BOOL)arg1 ;
-(void)setAllowedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setBlockedStorefrontIDs:(NSMutableArray *)arg1 ;
-(void)setHalfLifeMilliseconds:(unsigned long long)arg1 ;
-(void)setMinimumNewsVersion:(long long)arg1 ;
-(void)setLayeredCover:(NSString *)arg1 ;
-(void)setLayeredCoverAspectRatio:(double)arg1 ;
-(void)setPersonalizationVector:(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(void)setThumbnailFocalFrame:(long long)arg1 ;
-(NSString *)videoCallToActionTitle;
-(void)setSourceChannelCohorts:(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)arg1 ;
-(NSMutableArray *)blockedStorefrontIDs;
-(id)topicsAtIndex:(unsigned long long)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(int)role;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(NSMutableArray *)iAdSectionIDs;
-(NSString *)stocksClusterID;
-(void)setStoryType:(int)arg1 ;
-(NSString *)titleCompact;
-(NSString *)clusterID;
-(NSMutableArray *)linkedArticleIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)channelConversionStats;
-(NSString *)language;
-(void)setHasMinimumNewsVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumNewsVersion;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)setHasIsPaid:(BOOL)arg1 ;
-(BOOL)hasIsPaid;
-(BOOL)hasParentIssueID;
-(void)setHasIsBundlePaid:(BOOL)arg1 ;
-(BOOL)hasIsBundlePaid;
-(void)setHasBodyTextLength:(BOOL)arg1 ;
-(BOOL)hasBodyTextLength;
-(NSMutableArray *)linkedIssueIDs;
-(void)setPublishDate:(NTPBDate *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setExcerptURL:(NSString *)arg1 ;
-(long long)thumbnailFocalFrame;
-(void)setThumbnailWidgetLQTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetTaggedURL:(NSString *)arg1 ;
-(void)setThumbnailWidgetHQTaggedURL:(NSString *)arg1 ;
-(long long)minimumNewsVersion;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)sourceChannelCohorts;
-(void)setIAdKeywords:(NSMutableArray *)arg1 ;
@end

