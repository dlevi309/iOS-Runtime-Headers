/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

