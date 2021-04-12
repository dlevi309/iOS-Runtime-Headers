/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/NCNotificationManagementAlertController.h>

@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController {

	BOOL _includeExplanation;

}

@property (assign,nonatomic) BOOL includeExplanation;              //@synthesize includeExplanation=_includeExplanation - In the implementation block
-(id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3 includeExplanation:(BOOL)arg4 ;
-(void)_configureView;
-(void)setIncludeExplanation:(BOOL)arg1 ;
-(BOOL)includeExplanation;
@end

