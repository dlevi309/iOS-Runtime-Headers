/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	unsigned long long _priority;
	NSString* _sortIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortIdentifier;              //@synthesize sortIdentifier=_sortIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 ;
-(id)_description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sortIdentifier;
-(NSString *)identifier;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

