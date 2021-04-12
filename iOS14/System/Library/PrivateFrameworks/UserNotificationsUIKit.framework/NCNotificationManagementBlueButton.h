/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIColor, NSString;

@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate> {

	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

