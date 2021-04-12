/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction {

	BOOL _isDeliverable;
	UNNotification* _notification;

}

@property (nonatomic,retain,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) BOOL isDeliverable;                                //@synthesize isDeliverable=_isDeliverable - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
-(UNNotification *)notification;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(BOOL)isRemote;
-(id)_trigger;
-(BOOL)isLocal;
-(id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isDeliverable;
@end

