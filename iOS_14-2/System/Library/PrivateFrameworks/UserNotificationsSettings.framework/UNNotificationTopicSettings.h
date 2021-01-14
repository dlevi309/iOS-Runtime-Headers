/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UNNotificationTopic *)topic;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationSettings *)topicSettings;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 ;
@end

