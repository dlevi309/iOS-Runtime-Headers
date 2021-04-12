/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/


@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject {

	NSMutableArray* _sectionQueueDescriptors;
	NSMutableDictionary* _remainingSectionsBySectionQueueDescriptors;

}

@property (nonatomic,retain) NSMutableArray * sectionQueueDescriptors;                                      //@synthesize sectionQueueDescriptors=_sectionQueueDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remainingSectionsBySectionQueueDescriptors;              //@synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors - In the implementation block
-(id)init;
-(NSMutableArray *)sectionQueueDescriptors;
-(NSMutableDictionary *)remainingSectionsBySectionQueueDescriptors;
-(id)initWithSectionQueueDescriptors:(id)arg1 ;
-(id)sectionDescriptorsAtHeadsOfQueues;
-(void)removeSectionDescriptors:(id)arg1 ;
-(void)setSectionQueueDescriptors:(NSMutableArray *)arg1 ;
-(void)setRemainingSectionsBySectionQueueDescriptors:(NSMutableDictionary *)arg1 ;
@end

