/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic, UNNotificationSettings;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	UNNotificationSettings* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationTopic * topic;                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSettings * topicSettings;              //@synthesize topicSettings=_topicSettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationTopic *)topic;
-(UNNotificationSettings *)topicSettings;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 ;
@end

