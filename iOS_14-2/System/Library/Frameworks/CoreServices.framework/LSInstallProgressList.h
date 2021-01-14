/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(id)init;
-(id)progressForBundleID:(id)arg1 ;
-(id)description;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)removeProgressForBundleID:(id)arg1 ;
@end

