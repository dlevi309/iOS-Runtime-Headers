/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding> {

	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
@end

