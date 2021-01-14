/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsUI2.SubscriptionService : NSObject <FCSubscriptionObserving> {

	 observers;
	 tagService;
	 notificationController;
	 notificationService;
	 subscriptionController;
	 purchaseController;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)subscriptionController:(id)arg1 didFindTagsWithNotificationSupport:(id)arg2 ;
-(void)handlePurchaseAddedNotificationWithNotification:(id)arg1 ;
-(void)handlePurchaseRemovedNotificationWithNotification:(id)arg1 ;
-(id)init;
@end

