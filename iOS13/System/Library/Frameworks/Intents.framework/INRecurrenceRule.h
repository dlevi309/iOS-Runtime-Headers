/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interval;
	long long _frequency;

}

@property (nonatomic,readonly) unsigned long long interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)interval;
-(id)_dictionaryRepresentation;
-(long long)frequency;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 ;
@end

