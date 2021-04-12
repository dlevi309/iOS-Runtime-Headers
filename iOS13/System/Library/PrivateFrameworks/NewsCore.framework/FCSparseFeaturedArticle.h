/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransformationItem.h>

@class NSString, CKRecord, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;

@interface FCSparseFeaturedArticle : NSObject <FCFeedTransformationItem> {

	CKRecord* _articleRecord;
	NSString* _storefrontID;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores* _scores;

}

@property (nonatomic,readonly) CKRecord * articleRecord;                                                    //@synthesize articleRecord=_articleRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontID;                                                //@synthesize storefrontID=_storefrontID - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores * scores;                     //@synthesize scores=_scores - In the implementation block
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
+(id)requiredArticleRecordKeysWithStorefrontID:(id)arg1 ;
-(NSString *)publisherID;
-(unsigned long long)order;
-(unsigned long long)contentType;
-(NSString *)itemID;
-(BOOL)hasVideo;
-(NSDate *)publishDate;
-(BOOL)isExplicitContent;
-(BOOL)isPaid;
-(NSString *)clusterID;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *)scores;
-(NSString *)storefrontID;
-(BOOL)isBundlePaid;
-(NSString *)articleID;
-(NSString *)feedID;
-(NSArray *)topicIDs;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(long long)bodyTextLength;
-(unsigned long long)publishDateMilliseconds;
-(long long)publisherArticleVersion;
-(long long)minimumNewsVersion;
-(NSString *)sourceChannelID;
-(id)initWithArticleRecord:(id)arg1 storefrontID:(id)arg2 ;
-(CKRecord *)articleRecord;
-(unsigned long long)feedHalfLifeMilliseconds;
-(BOOL)isFromBlockedStorefront;
-(BOOL)canBePurchased;
@end

