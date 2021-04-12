/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject {

	NCNotificationExtensionCache* _extensionsCache;
	id _extensionsDiscoveryToken;

}

@property (nonatomic,retain) NCNotificationExtensionCache * extensionsCache;              //@synthesize extensionsCache=_extensionsCache - In the implementation block
@property (nonatomic,retain) id extensionsDiscoveryToken;                                 //@synthesize extensionsDiscoveryToken=_extensionsDiscoveryToken - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(NCNotificationExtensionCache *)extensionsCache;
-(id)init;
-(void)_stopMatchingExtensions;
-(id)_matchingAttributes;
-(void)setExtensionsCache:(NCNotificationExtensionCache *)arg1 ;
-(id)extensionsDiscoveryToken;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(void)_beginMatchingExtensions;
-(void)setExtensionsDiscoveryToken:(id)arg1 ;
@end

