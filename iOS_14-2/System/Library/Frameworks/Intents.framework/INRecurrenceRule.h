/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interval;
	long long _frequency;
	unsigned long long _weeklyRecurrenceDays;

}

@property (nonatomic,readonly) unsigned long long interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long frequency;                                  //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) unsigned long long weeklyRecurrenceDays;              //@synthesize weeklyRecurrenceDays=_weeklyRecurrenceDays - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)frequency;
-(unsigned long long)interval;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 ;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 weeklyRecurrenceDays:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)weeklyRecurrenceDays;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

