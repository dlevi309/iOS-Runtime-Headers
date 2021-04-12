/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) UNNotificationTopic * topic;              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationTopic *)topic;
-(id)_description;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
@end

