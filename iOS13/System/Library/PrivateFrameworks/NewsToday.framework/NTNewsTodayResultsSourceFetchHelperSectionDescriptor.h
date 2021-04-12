/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDescriptor.h>

@protocol NTSectionDescriptor, NTSectionQueueDescriptor;
@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor> {

	id<NTSectionDescriptor> _sectionDescriptor;
	id<NTSectionQueueDescriptor> _parentSectionQueueDescriptor;

}

@property (nonatomic,copy,readonly) id<NTSectionDescriptor> sectionDescriptor;                              //@synthesize sectionDescriptor=_sectionDescriptor - In the implementation block
@property (nonatomic,copy,readonly) id<NTSectionQueueDescriptor> parentSectionQueueDescriptor;              //@synthesize parentSectionQueueDescriptor=_parentSectionQueueDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColor; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,readonly) BOOL displaysAsVideoPlaylist; 
@property (nonatomic,readonly) BOOL useNameColorInWidget; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSString * backgroundGradientColor; 
@property (nonatomic,readonly) BOOL videoPlaysMutedByDefault; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSURL *)actionURL;
-(NSString *)actionTitle;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(unsigned long long)minimumStoriesAllocation;
-(BOOL)displaysAsVideoPlaylist;
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(int)leadingCellPromotionPolicy;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(NSString *)nameColor;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)backgroundGradientColor;
-(BOOL)videoPlaysMutedByDefault;
-(NSString *)compactName;
-(NSString *)referralBarName;
-(BOOL)useNameColorInWidget;
-(BOOL)openVideoPlaylistInApp;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2 ;
-(id<NTSectionQueueDescriptor>)parentSectionQueueDescriptor;
-(id<NTSectionDescriptor>)sectionDescriptor;
-(long long)supplementalInterSectionFilterOptions;
-(long long)supplementalIntraSectionFilterOptions;
@end

