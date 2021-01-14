/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString;


@protocol NTSectionDescriptor <NTSectionDisplayDescriptor,NTSectionFetchDescriptor,NSObject,NFCopying>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * compactName; 
@property (nonatomic,copy,readonly) NSString * referralBarName; 
@property (nonatomic,copy,readonly) NSString * personalizationFeatureID; 
@property (nonatomic,readonly) unsigned long long cachedResultCutoffTime; 
@property (nonatomic,readonly) unsigned long long fallbackOrder; 
@property (nonatomic,readonly) unsigned long long minimumStoriesAllocation; 
@property (nonatomic,readonly) unsigned long long maximumStoriesAllocation; 
@property (nonatomic,readonly) int readArticlesFilterMethod; 
@property (nonatomic,readonly) int seenArticlesFilterMethod; 
@property (nonatomic,readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; 
@property (nonatomic,readonly) long long supplementalInterSectionFilterOptions; 
@property (nonatomic,readonly) long long supplementalIntraSectionFilterOptions; 
@property (nonatomic,readonly) int promotionCriterion; 
@property (nonatomic,readonly) NSString * backingTagID; 
@required
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(int)promotionCriterion;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)referralBarName;
-(NSString *)compactName;
-(NSString *)identifier;
-(unsigned long long)minimumStoriesAllocation;
-(NSString *)backingTagID;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;

@end

