/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransformationItem.h>

@class NSString, CKRecord, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

@interface FCSparseScorableArticle : NSObject <FCFeedTransformationItem> {

	CKRecord* _articleRecord;
	NSString* _storefrontID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats* _conversionStats;

}

@property (nonatomic,readonly) CKRecord * articleRecord;                                                                       //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                                   //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;                                        //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats * conversionStats;                      //@synthesize conversionStats=_conversionStats - In the implementation block
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
+(id)requiredArticleRecordKeysWithRecordSource:(id)arg1 ;
-(unsigned long long)halfLife;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(BOOL)canBePurchased;
-(long long)bodyTextLength;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(unsigned long long)contentType;
-(unsigned long long)feedHalfLifeMilliseconds;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(NSString *)storefrontID;
-(BOOL)isFromBlockedStorefront;
-(NSArray *)topicIDs;
-(NSString *)articleID;
-(long long)publisherArticleVersion;
-(BOOL)isPaid;
-(NSString *)sourceFeedID;
-(NSString *)itemID;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(NSString *)publisherID;
-(unsigned long long)publishDateMilliseconds;
-(BOOL)isExplicitContent;
-(NSString *)sourceChannelID;
-(BOOL)isANF;
-(BOOL)isBundlePaid;
-(CKRecord *)articleRecord;
-(NSDate *)publishDate;
-(NSString *)feedID;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *)conversionStats;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(NSString *)clusterID;
-(id)initWithArticleRecord:(id)arg1 storefrontID:(id)arg2 recordSource:(id)arg3 ;
-(unsigned long long)order;
-(BOOL)hasVideo;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1 ;
-(long long)minimumNewsVersion;
-(BOOL)hasAudioTrack;
@end

