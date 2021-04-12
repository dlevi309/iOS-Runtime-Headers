/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMUser;

@interface HUAnnounceNotificationSettingsItem : HFItem {

	unsigned long long _notificationMode;
	HMUser* _user;
	unsigned long long _sortOrder;

}

@property (nonatomic,readonly) unsigned long long notificationMode;              //@synthesize notificationMode=_notificationMode - In the implementation block
@property (nonatomic,readonly) HMUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) unsigned long long sortOrder;                     //@synthesize sortOrder=_sortOrder - In the implementation block
+(unsigned long long)sortOrderForMode:(unsigned long long)arg1 ;
-(unsigned long long)sortOrder;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)_notificationModeToString:(unsigned long long)arg1 ;
-(HMUser *)user;
-(unsigned long long)notificationMode;
-(id)initWithNotificationMode:(unsigned long long)arg1 user:(id)arg2 ;
@end

