/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCAuxiliaryOptionsProviding.h>

@protocol NCNotificationManagementContentProviderDelegate;
@class NSString, NCNotificationRequest;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding> {

	NCNotificationRequest* _notificationRequest;
	id<NCNotificationManagementContentProviderDelegate> _managementDelegate;

}

@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                                //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationManagementContentProviderDelegate> managementDelegate;              //@synthesize managementDelegate=_managementDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryText; 
@property (nonatomic,readonly) unsigned long long numberOfOptionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NCNotificationRequest *)notificationRequest;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(id<NCNotificationManagementContentProviderDelegate>)managementDelegate;
-(void)configureOptionButtons:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2 ;
-(void)handleManageAction:(id)arg1 ;
-(void)setManagementDelegate:(id<NCNotificationManagementContentProviderDelegate>)arg1 ;
@end

