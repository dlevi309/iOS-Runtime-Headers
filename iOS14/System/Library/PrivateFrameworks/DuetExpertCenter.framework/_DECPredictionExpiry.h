/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface _DECPredictionExpiry : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	long long _value;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)expireAfter:(long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
@end

