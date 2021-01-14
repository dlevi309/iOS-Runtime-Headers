/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBIAdConfig, NSDictionary, NSArray;

@interface FCIAdConfiguration : NSObject {

	NTPBIAdConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _segmentsEnabled;
	double _segmentsThreshold;
	long long _segmentsSubmissionFrequency;
	long long _segmentsHistoryWindowInterval;
	long long _segmentsMinimumArticleCount;
	long long _segmentsMinimumEventCount;
	double _segmentsMinRelativeRate;
	NSArray* _iAdSegmentIDs;
	NSDictionary* _adStatusConditionsByType;
	double _feedNumberofViewportsBetweenAds;
	double _articleNumberofViewportsBetweenAds;

}

@property (getter=areSegmentsEnabled,nonatomic,readonly) BOOL segmentsEnabled;              //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (nonatomic,readonly) double segmentsThreshold;                                    //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (nonatomic,readonly) long long segmentsSubmissionFrequency;                       //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (nonatomic,readonly) long long segmentsHistoryWindowInterval;                     //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (nonatomic,readonly) long long segmentsMinimumArticleCount;                       //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
@property (nonatomic,readonly) long long segmentsMinimumEventCount;                         //@synthesize segmentsMinimumEventCount=_segmentsMinimumEventCount - In the implementation block
@property (nonatomic,readonly) double segmentsMinRelativeRate;                              //@synthesize segmentsMinRelativeRate=_segmentsMinRelativeRate - In the implementation block
@property (nonatomic,readonly) NSArray * iAdSegmentIDs;                                     //@synthesize iAdSegmentIDs=_iAdSegmentIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * adStatusConditionsByType;                     //@synthesize adStatusConditionsByType=_adStatusConditionsByType - In the implementation block
@property (nonatomic,readonly) double feedNumberofViewportsBetweenAds;                      //@synthesize feedNumberofViewportsBetweenAds=_feedNumberofViewportsBetweenAds - In the implementation block
@property (nonatomic,readonly) double articleNumberofViewportsBetweenAds;                   //@synthesize articleNumberofViewportsBetweenAds=_articleNumberofViewportsBetweenAds - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(long long)segmentsHistoryWindowInterval;
-(long long)segmentsMinimumEventCount;
-(id)initWithPBIAdConfig:(id)arg1 ;
-(double)segmentsThreshold;
-(long long)segmentsSubmissionFrequency;
-(NSDictionary *)adStatusConditionsByType;
-(double)articleNumberofViewportsBetweenAds;
-(BOOL)areSegmentsEnabled;
-(long long)segmentsMinimumArticleCount;
-(unsigned long long)hash;
-(double)segmentsMinRelativeRate;
-(double)feedNumberofViewportsBetweenAds;
-(NSArray *)iAdSegmentIDs;
-(BOOL)isEqual:(id)arg1 ;
@end

