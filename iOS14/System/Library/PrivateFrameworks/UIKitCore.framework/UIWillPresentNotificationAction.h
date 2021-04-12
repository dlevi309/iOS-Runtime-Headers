/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocal;
-(long long)UIActionType;
-(UNNotification *)notification;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isRemote;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_trigger;
-(BOOL)isDeliverable;
@end

