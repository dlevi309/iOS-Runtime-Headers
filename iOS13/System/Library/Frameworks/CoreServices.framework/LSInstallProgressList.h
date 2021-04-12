/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)init;
-(id)description;
-(id)progressForBundleID:(id)arg1 ;
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeProgressForBundleID:(id)arg1 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
@end

