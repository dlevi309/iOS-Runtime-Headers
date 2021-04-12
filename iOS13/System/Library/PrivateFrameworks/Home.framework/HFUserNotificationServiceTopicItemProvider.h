/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSSet* _topicItems;

}

@property (nonatomic,copy) NSSet * topicItems;              //@synthesize topicItems=_topicItems - In the implementation block
@property (nonatomic,copy) id filter;                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;               //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(void)setTopicItems:(NSSet *)arg1 ;
-(NSSet *)topicItems;
@end

