/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSArray* _iAdSegmentIDs;
	NSDictionary* _adStatusConditionsByType;

}

@property (getter=areSegmentsEnabled,nonatomic,readonly) BOOL segmentsEnabled;              //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (nonatomic,readonly) double segmentsThreshold;                                    //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (nonatomic,readonly) long long segmentsSubmissionFrequency;                       //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (nonatomic,readonly) long long segmentsHistoryWindowInterval;                     //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (nonatomic,readonly) long long segmentsMinimumArticleCount;                       //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
@property (nonatomic,readonly) NSArray * iAdSegmentIDs;                                     //@synthesize iAdSegmentIDs=_iAdSegmentIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * adStatusConditionsByType;                     //@synthesize adStatusConditionsByType=_adStatusConditionsByType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithConfigDictionary:(id)arg1 ;
-(double)segmentsThreshold;
-(long long)segmentsSubmissionFrequency;
-(long long)segmentsHistoryWindowInterval;
-(long long)segmentsMinimumArticleCount;
-(id)initWithPBIAdConfig:(id)arg1 ;
-(BOOL)areSegmentsEnabled;
-(NSArray *)iAdSegmentIDs;
-(NSDictionary *)adStatusConditionsByType;
@end

