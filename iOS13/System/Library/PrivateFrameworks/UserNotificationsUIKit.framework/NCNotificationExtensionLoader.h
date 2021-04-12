/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject {

	NSMutableDictionary* _loadedHostViewControllerCache;

}

@property (nonatomic,retain) NSMutableDictionary * loadedHostViewControllerCache;              //@synthesize loadedHostViewControllerCache=_loadedHostViewControllerCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)clearCacheForNotificationRequest:(id)arg1 ;
-(void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loadedHostViewControllerCache;
-(void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setLoadedHostViewControllerCache:(NSMutableDictionary *)arg1 ;
@end

