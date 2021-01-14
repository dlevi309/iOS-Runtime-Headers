/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCFeedPersonalizing.h>

@protocol FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;
@class FCPersonalizationWhitelist, FCPersonalizationTreatment, NSString;

@interface NTFeedPersonalizer : NSObject <FCFeedPersonalizing> {

	FCPersonalizationTreatment* _personalizationTreatment;
	id<FCReadonlyPersonalizationAggregateStore> _readonlyPersonalizationAggregateStore;
	double _articleDiversificationSimilarityExpectationStart;
	double _articleDiversificationSimilarityExpectationEnd;
	double _articleDiversificationUniquePublisherExpectationSlope;
	double _articleDiversificationUniquePublisherExpectationYIntercept;
	id<FCTodayPrivateData> _todayData;

}

@property (nonatomic,copy) FCPersonalizationTreatment * personalizationTreatment;                                            //@synthesize personalizationTreatment=_personalizationTreatment - In the implementation block
@property (nonatomic,retain) id<FCReadonlyPersonalizationAggregateStore> readonlyPersonalizationAggregateStore;              //@synthesize readonlyPersonalizationAggregateStore=_readonlyPersonalizationAggregateStore - In the implementation block
@property (assign,nonatomic) double articleDiversificationSimilarityExpectationStart;                                        //@synthesize articleDiversificationSimilarityExpectationStart=_articleDiversificationSimilarityExpectationStart - In the implementation block
@property (assign,nonatomic) double articleDiversificationSimilarityExpectationEnd;                                          //@synthesize articleDiversificationSimilarityExpectationEnd=_articleDiversificationSimilarityExpectationEnd - In the implementation block
@property (assign,nonatomic) double articleDiversificationUniquePublisherExpectationSlope;                                   //@synthesize articleDiversificationUniquePublisherExpectationSlope=_articleDiversificationUniquePublisherExpectationSlope - In the implementation block
@property (assign,nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;                              //@synthesize articleDiversificationUniquePublisherExpectationYIntercept=_articleDiversificationUniquePublisherExpectationYIntercept - In the implementation block
@property (nonatomic,copy) id<FCTodayPrivateData> todayData;                                                                 //@synthesize todayData=_todayData - In the implementation block
@property (readonly) FCPersonalizationWhitelist * whitelist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)articleDiversificationSimilarityExpectationEnd;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(id)rankTagIDsDescending:(id)arg1 ;
-(id)scoresForTagIDs:(id)arg1 ;
-(FCPersonalizationTreatment *)personalizationTreatment;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2 ;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 ;
-(double)articleDiversificationSimilarityExpectationStart;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3 ;
-(unsigned long long)whitelistLevelForTagID:(id)arg1 ;
-(id)sortItems:(id)arg1 ;
-(id)sortItems:(id)arg1 options:(long long)arg2 ;
-(id)limitItemsByMinimumItemQuality:(id)arg1 ;
-(void)setPersonalizationTreatment:(FCPersonalizationTreatment *)arg1 ;
-(id<FCTodayPrivateData>)todayData;
-(void)setTodayData:(id<FCTodayPrivateData>)arg1 ;
-(id)initWithPersonalizationTreatment:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 articleDiversificationSimilarityExpectationStart:(double)arg3 articleDiversificationSimilarityExpectationEnd:(double)arg4 articleDiversificationUniquePublisherExpectationSlope:(double)arg5 articleDiversificationUniquePublisherExpectationYIntercept:(double)arg6 todayData:(id)arg7 ;
-(id<FCReadonlyPersonalizationAggregateStore>)readonlyPersonalizationAggregateStore;
-(id)_userProfile;
-(void)prepareFavoritesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setReadonlyPersonalizationAggregateStore:(id<FCReadonlyPersonalizationAggregateStore>)arg1 ;
-(void)setArticleDiversificationSimilarityExpectationStart:(double)arg1 ;
-(void)setArticleDiversificationSimilarityExpectationEnd:(double)arg1 ;
-(void)setArticleDiversificationUniquePublisherExpectationSlope:(double)arg1 ;
-(void)setArticleDiversificationUniquePublisherExpectationYIntercept:(double)arg1 ;
@end

