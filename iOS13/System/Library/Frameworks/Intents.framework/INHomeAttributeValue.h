/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INHomeAttributeRange;

@interface INHomeAttributeValue : NSObject <NSCopying, NSSecureCoding> {

	BOOL _boolValue;
	long long _type;
	double _doubleValue;
	long long _integerValue;
	NSString* _stringValue;
	long long _limitValue;
	long long _unit;
	INHomeAttributeRange* _rangeValue;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                                 //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) double doubleValue;                             //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) long long integerValue;                         //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long limitValue;                           //@synthesize limitValue=_limitValue - In the implementation block
@property (nonatomic,readonly) long long unit;                                 //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) INHomeAttributeRange * rangeValue;              //@synthesize rangeValue=_rangeValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(long long)unit;
-(id)initWithDoubleValue:(double)arg1 unit:(long long)arg2 ;
-(INHomeAttributeRange *)rangeValue;
-(long long)limitValue;
-(id)initWithBoolValue:(BOOL)arg1 ;
-(id)initWithIntegerValue:(long long)arg1 unit:(long long)arg2 ;
-(id)initWithStringValue:(id)arg1 unit:(long long)arg2 ;
-(id)initWithLimitValue:(long long)arg1 ;
-(id)initWithRangeValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 boolValue:(BOOL)arg2 doubleValue:(double)arg3 integerValue:(long long)arg4 stringValue:(id)arg5 limitValue:(long long)arg6 unit:(long long)arg7 rangeValue:(id)arg8 ;
@end

