/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLNotificationUNCenterDelegate;
@class UNUserNotificationCenter;

@interface PLNotificationUNCenter : NSObject {

	UNUserNotificationCenter* _unc;
	id<PLNotificationUNCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLNotificationUNCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_suggestedCMMCategory;
+(id)_threadIdentifierForNotification:(id)arg1 ;
+(id)_categoryIdentifierForNotification:(id)arg1 ;
+(id)_soundForNotification:(id)arg1 ;
+(id)_updatesCategory;
+(id)_updatesLikedCategory;
+(id)_contentUserInfoForNotification:(id)arg1 ;
+(id)_invitationsCategoryWithJunkAction:(BOOL)arg1 ;
+(id)_readyToViewInvitationCMMCategory;
+(id)_UNNotificationInitialize;
+(id)_updatesCommentedCategory;
+(id)_topicIdentifiersForNotificationType:(long long)arg1 ;
+(id)_invitationAcceptedCategory;
+(id)_expiringCMMCategory;
-(id)_makeTempThumbnailFileForImageData:(id)arg1 identifier:(id)arg2 ;
-(void)removeNotificationWithRequestIdentifiers:(id)arg1 ;
-(void)_findNotificationForRequestIdentifier:(id)arg1 withPendingHandler:(/*^block*/id)arg2 deliveredHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)updateImageData:(id)arg1 forNotificationWithIdentifier:(id)arg2 ;
-(id<PLNotificationUNCenterDelegate>)delegate;
-(id)_notificationContentWithNotification:(id)arg1 withImageURL:(id)arg2 sound:(BOOL)arg3 ;
-(void)findExistingNotificationByIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateBadgeCountWithDelay:(unsigned long long)arg1 ;
-(void)enumerateExistingNotificationsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeNotificationsForNotifications:(id)arg1 ;
-(void)setDelegate:(id<PLNotificationUNCenterDelegate>)arg1 ;
-(void)sendNotificationForNotification:(id)arg1 ;
-(id)_makeTempThumbnailFileForNotification:(id)arg1 ;
-(void)sendNotificationForNotification:(id)arg1 withAttachmentURL:(id)arg2 forceToSound:(BOOL)arg3 ;
-(void)mergeExistingAndSendNotificationForNotification:(id)arg1 requestIdentifier:(id)arg2 thumbnailHandler:(/*^block*/id)arg3 ;
-(id)_copiedContentFromContent:(id)arg1 WithImageData:(id)arg2 identifier:(id)arg3 ;
-(void)_updateAppBadge;
-(void)mergeExistingAndSendNotificationForNotification:(id)arg1 thumbnailHandler:(/*^block*/id)arg2 ;
-(void)removeAllNotifications;
@end

