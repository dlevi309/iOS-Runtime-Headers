/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic;

@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	unsigned long long _supportedOptions;
	unsigned long long _enabledOptions;

}

@property (nonatomic,readonly) unsigned long long supportedOptions;              //@synthesize supportedOptions=_supportedOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long enabledOptions;                //@synthesize enabledOptions=_enabledOptions - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) unsigned long long options; 
+(BOOL)supportsSecureCoding;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
+(id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_description;
-(UNNotificationTopic *)topic;
-(unsigned long long)supportedOptions;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)description;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)enabledOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

