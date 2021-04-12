/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

@class NSString, NSDate, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList;


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
@property (getter=isBundlePaid,nonatomic,readonly) BOOL bundlePaid; 
@property (nonatomic,readonly) long long bodyTextLength; 
@property (nonatomic,readonly) BOOL isFeatured; 
@optional
-(BOOL)isBundlePaid;
-(long long)bodyTextLength;
-(BOOL)isFeatured;

@required
-(NSString *)publisherID;
-(NSString *)itemID;
-(BOOL)hasVideo;
-(NSDate *)publishDate;
-(BOOL)isPaid;
-(NSArray *)topicIDs;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(NSString *)sourceFeedID;
-(unsigned long long)halfLife;
-(double)globalUserFeedback;
-(BOOL)hasGlobalUserFeedback;
-(BOOL)isANF;
-(BOOL)isHiddenFromAutoFavorites;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1;

@end

