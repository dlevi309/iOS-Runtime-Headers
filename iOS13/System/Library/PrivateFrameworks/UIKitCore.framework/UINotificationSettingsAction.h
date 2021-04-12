/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction {

	UNNotification* _notification;

}

@property (nonatomic,copy,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
-(UNNotification *)notification;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(id)initWithNotification:(id)arg1 ;
@end

