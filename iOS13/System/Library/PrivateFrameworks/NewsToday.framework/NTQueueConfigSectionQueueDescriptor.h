/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionQueueDescriptor.h>

@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor> {

	NSArray* _sectionDescriptors;
	unsigned long long _visibleSectionConfigsLimit;

}

@property (nonatomic,copy,readonly) NSArray * sectionDescriptors;                          //@synthesize sectionDescriptors=_sectionDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long visibleSectionConfigsLimit;              //@synthesize visibleSectionConfigsLimit=_visibleSectionConfigsLimit - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sectionDescriptors;
-(unsigned long long)visibleSectionConfigsLimit;
-(id)initWithQueueConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 supplementalFeedFilterOptions:(long long)arg4 respectsWidgetVisibleSectionsLimit:(BOOL)arg5 ;
@end

