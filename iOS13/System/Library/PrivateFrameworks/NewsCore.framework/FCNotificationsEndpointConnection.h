/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCEndpointConnection.h>

@protocol FCBundleSubscriptionManagerType;
@class NSString, FCFileCoordinatedNotificationDropbox;

@interface FCNotificationsEndpointConnection : FCEndpointConnection {

	NSString* _deviceType;
	NSString* _deviceOSVersion;
	FCFileCoordinatedNotificationDropbox* _fileCoordinatedNotificationDropbox;
	id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;

}

@property (nonatomic,copy) NSString * deviceType;                                                                    //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy) NSString * deviceOSVersion;                                                               //@synthesize deviceOSVersion=_deviceOSVersion - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedNotificationDropbox * fileCoordinatedNotificationDropbox;              //@synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionManagerType> bundleSubscriptionManager;                          //@synthesize bundleSubscriptionManager=_bundleSubscriptionManager - In the implementation block
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id<FCBundleSubscriptionManagerType>)bundleSubscriptionManager;
-(void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2 ;
-(id)_notificationDataInDropbox;
-(id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 ;
-(id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 ;
-(id)_deviceInfoWithDeviceToken:(id)arg1 ;
-(id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(BOOL)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4 ;
-(NSString *)deviceOSVersion;
-(id)_notificationEntitiyWithChannelIDs:(id)arg1 isPaid:(BOOL)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4 ;
-(int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1 ;
-(FCFileCoordinatedNotificationDropbox *)fileCoordinatedNotificationDropbox;
-(id)initWithBaseURLString:(id)arg1 ;
-(void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDeviceOSVersion:(NSString *)arg1 ;
-(void)setFileCoordinatedNotificationDropbox:(FCFileCoordinatedNotificationDropbox *)arg1 ;
-(void)setBundleSubscriptionManager:(id<FCBundleSubscriptionManagerType>)arg1 ;
@end

