/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryText; 
@property (nonatomic,readonly) unsigned long long numberOfOptionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
-(NCNotificationRequest *)notificationRequest;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(id<NCNotificationManagementContentProviderDelegate>)managementDelegate;
-(void)configureOptionButtons:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2 ;
-(void)handleManageAction:(id)arg1 ;
-(void)setManagementDelegate:(id<NCNotificationManagementContentProviderDelegate>)arg1 ;
@end

