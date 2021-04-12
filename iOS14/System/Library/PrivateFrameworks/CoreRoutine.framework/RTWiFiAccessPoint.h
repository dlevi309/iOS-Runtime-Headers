/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding> {

	NSString* _mac;
	long long _rssi;
	long long _channel;
	double _age;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * mac;                 //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) long long rssi;                 //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) double age;                     //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)mac;
-(long long)rssi;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)channel;
-(id)initWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(double)age;
-(BOOL)isEqual:(id)arg1 ;
@end

