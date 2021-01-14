/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationContent, UNNotificationTrigger, NSString;

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationContent* _content;
	UNNotificationTrigger* _trigger;
	unsigned long long _destinations;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long destinations;                     //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationTrigger * trigger;              //@synthesize trigger=_trigger - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4 ;
+(id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 ;
-(UNNotificationContent *)content;
-(UNNotificationTrigger *)trigger;
-(void)setDestinations:(unsigned long long)arg1 ;
-(unsigned long long)destinations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

