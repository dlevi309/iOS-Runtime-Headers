/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding> {

	long long _alertType;
	NSString* _alertTopic;

}

@property (nonatomic,readonly) long long alertType;                     //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTopic;              //@synthesize alertTopic=_alertTopic - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)alertType;
-(NSString *)alertTopic;
-(BOOL)isEqualToSound:(id)arg1 ;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 ;
@end

