/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) int leadingCellPromotionPolicy; 
@property (nonatomic,readonly) BOOL openVideoPlaylistInApp; 
@required
-(NSString *)identifier;
-(unsigned long long)minimumStoriesAllocation;
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(int)leadingCellPromotionPolicy;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)compactName;
-(NSString *)referralBarName;
-(BOOL)openVideoPlaylistInApp;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;

@end

