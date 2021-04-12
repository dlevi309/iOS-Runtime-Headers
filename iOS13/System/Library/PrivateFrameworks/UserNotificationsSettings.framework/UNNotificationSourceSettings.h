/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(UNNotificationSettings *)notificationSettings;
-(NSArray *)topicSettings;
-(id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(BOOL)arg3 ;
@end

