/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;


@protocol FCFeedPersonalizingItem <NSObject>
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
@optional
-(long long)bodyTextLength;
-(NSArray *)iAdCategories;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(BOOL)isEvergreen;
-(BOOL)isBundlePaid;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(BOOL)isFeatured;
-(BOOL)hasAudioTrack;

@required
-(unsigned long long)halfLife;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(NSArray *)topicIDs;
-(BOOL)isPaid;
-(NSString *)sourceFeedID;
-(NSString *)itemID;
-(NSString *)publisherID;
-(BOOL)isANF;
-(NSDate *)publishDate;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)hasVideo;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1;

@end

