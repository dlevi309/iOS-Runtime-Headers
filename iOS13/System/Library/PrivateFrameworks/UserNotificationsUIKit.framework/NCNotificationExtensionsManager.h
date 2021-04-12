/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(void)_beginMatchingExtensions;
-(NCNotificationExtensionCache *)extensionsCache;
-(id)_matchingAttributes;
-(void)_stopMatchingExtensions;
-(void)setExtensionsCache:(NCNotificationExtensionCache *)arg1 ;
-(id)extensionsDiscoveryToken;
-(void)setExtensionsDiscoveryToken:(id)arg1 ;
@end

