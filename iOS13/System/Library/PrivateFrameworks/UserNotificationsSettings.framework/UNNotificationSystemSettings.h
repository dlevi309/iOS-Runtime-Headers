/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)announcementSetting;
-(long long)showPreviewsSetting;
-(long long)spokenNotificationSetting;
-(id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 ;
@end

