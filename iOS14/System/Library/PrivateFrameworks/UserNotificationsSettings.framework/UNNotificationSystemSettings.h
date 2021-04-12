/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _showPreviewsSetting;
	long long _announcementSetting;

}

@property (nonatomic,readonly) long long showPreviewsSetting;                    //@synthesize showPreviewsSetting=_showPreviewsSetting - In the implementation block
@property (nonatomic,readonly) long long announcementSetting;                    //@synthesize announcementSetting=_announcementSetting - In the implementation block
@property (nonatomic,readonly) long long spokenNotificationSetting; 
+(BOOL)supportsSecureCoding;
-(long long)spokenNotificationSetting;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)announcementSetting;
-(id)description;
-(long long)showPreviewsSetting;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 ;
@end

