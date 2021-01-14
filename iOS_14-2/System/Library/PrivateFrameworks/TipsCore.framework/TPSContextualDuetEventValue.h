/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSNumber, NSString;

@interface TPSContextualDuetEventValue : TPSSerializableObject {

	NSNumber* _boolValue;
	NSNumber* _integerValue;
	NSNumber* _doubleValue;
	NSString* _stringValue;
	unsigned long long _valueType;

}

@property (nonatomic,copy) NSNumber * boolValue;                        //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,copy) NSNumber * integerValue;                     //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,copy) NSNumber * doubleValue;                      //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                      //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(unsigned long long)valueType;
-(NSNumber *)integerValue;
-(NSNumber *)doubleValue;
-(NSNumber *)boolValue;
-(void)setDoubleValue:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)stringValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBoolValue:(NSNumber *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setIntegerValue:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

