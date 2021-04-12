/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CALNNotificationContent;

@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	CALNNotificationContent* _content;

}

@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationContent * content;              //@synthesize content=_content - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 ;
-(CALNNotificationContent *)content;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
@end

