/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationSettings, NSArray;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRestricted;
	UNNotificationSettings* _notificationSettings;
	NSArray* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationSettings * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topicSettings;                                    //@synthesize topicSettings=_topicSettings - In the implementation block
@property (nonatomic,readonly) BOOL isRestricted;                                               //@synthesize isRestricted=_isRestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isRestricted;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationSettings *)notificationSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)topicSettings;
-(id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(BOOL)arg3 ;
@end

