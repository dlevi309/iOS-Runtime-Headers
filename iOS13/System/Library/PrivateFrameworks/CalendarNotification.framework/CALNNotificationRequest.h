/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(CALNNotificationContent *)content;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 ;
@end

