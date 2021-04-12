/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionDescriptor.h>

@protocol NTSectionDescriptor, NTSectionQueueDescriptor;
@class NSString, NSURL;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor> {

	id<NTSectionDescriptor> _sectionDescriptor;
	id<NTSectionQueueDescriptor> _parentSectionQueueDescriptor;

}

@property (nonatomic,copy,readonly) id<NTSectionDescriptor> sectionDescriptor;                              //@synthesize sectionDescriptor=_sectionDescriptor - In the implementation block
@property (nonatomic,copy,readonly) id<NTSectionQueueDescriptor> parentSectionQueueDescriptor;              //@synthesize parentSectionQueueDescriptor=_parentSectionQueueDescriptor - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * nameColorLight; 
@property (nonatomic,copy,readonly) NSString * nameColorDark; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSURL * nameActionURL; 
@property (nonatomic,copy,readonly) NSString * backgroundColorLight; 
@property (nonatomic,copy,readonly) NSString * backgroundColorDark; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)actionTitle;
-(NSString *)name;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(unsigned long long)cachedResultCutoffTime;
-(int)readArticlesFilterMethod;
-(int)seenArticlesFilterMethod;
-(int)promotionCriterion;
-(unsigned long long)fallbackOrder;
-(unsigned long long)maximumStoriesAllocation;
-(NSString *)nameColorLight;
-(long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
-(NSString *)personalizationFeatureID;
-(NSString *)referralBarName;
-(NSString *)nameColorDark;
-(NSString *)compactName;
-(NSURL *)actionURL;
-(NSString *)identifier;
-(unsigned long long)minimumStoriesAllocation;
-(NSString *)backingTagID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)nameActionURL;
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

