/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@class HMHome, HFUserNotificationServiceTopic;

@interface HFUserNotificationServiceTopicItem : HFItem {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;

}

@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;              //@synthesize topic=_topic - In the implementation block
-(HFUserNotificationServiceTopic *)topic;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 topic:(id)arg2 ;
@end

