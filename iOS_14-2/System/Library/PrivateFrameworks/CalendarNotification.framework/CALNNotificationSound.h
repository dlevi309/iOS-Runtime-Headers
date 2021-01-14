/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)alertType;
-(BOOL)isEqualToSound:(id)arg1 ;
-(id)init;
-(NSString *)alertTopic;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

