/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

