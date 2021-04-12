/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(CALNNotificationRequest *)request;
-(id)initWithNotificationRequest:(id)arg1 date:(id)arg2 ;
-(BOOL)isEqualToNotification:(id)arg1 ;
@end

