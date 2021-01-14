/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, CALNNotificationRequest;

@interface CALNNotification : NSObject <NSSecureCoding> {

	NSDate* _date;
	CALNNotificationRequest* _request;

}

@property (nonatomic,copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notificationWithRequest:(id)arg1 date:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CALNNotificationRequest *)request;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToNotification:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 date:(id)arg2 ;
@end

