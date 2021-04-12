/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, NSData, WAMessageAWD;

@interface WAField : NSObject <NSCopying, NSSecureCoding> {

	id _value;
	NSString* _typeInfoForRepeatableSubmessage;
	BOOL _isRepeatable;
	long long _type;
	NSString* _key;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isRepeatable;                              //@synthesize isRepeatable=_isRepeatable - In the implementation block
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * repeatableValues; 
@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) int int32Value; 
@property (assign,nonatomic) long long int64Value; 
@property (assign,nonatomic) unsigned uint32Value; 
@property (assign,nonatomic) unsigned long long uint64Value; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSData * bytesValue; 
@property (nonatomic,retain) WAMessageAWD * subMessageValue; 
+(BOOL)supportsSecureCoding;
-(NSData *)bytesValue;
-(double)doubleValue;
-(void)setIsRepeatable:(BOOL)arg1 ;
-(void)addRepeatableDoubleValue:(double)arg1 ;
-(BOOL)boolValue;
-(long long)int64Value;
-(float)floatValue;
-(id)init;
-(void)setFloatValue:(float)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)addRepeatableString:(id)arg1 ;
-(void)addRepeatableUInt32Value:(unsigned)arg1 ;
-(NSMutableArray *)repeatableValues;
-(void)addRepeatableFloatValue:(float)arg1 ;
-(void)setTypeInformationForRepeatableSubmessage:(id)arg1 ;
-(void)setInt64Value:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(int)int32Value;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setInt32Value:(int)arg1 ;
-(void)addRepeatableInt64Value:(long long)arg1 ;
-(id)initWithType:(long long)arg1 isRepeatable:(BOOL)arg2 key:(id)arg3 repeatableValues:(id)arg4 doubleValue:(double)arg5 floatValue:(float)arg6 int32Value:(int)arg7 int64Value:(long long)arg8 uint32Val:(unsigned)arg9 uint64Value:(unsigned long long)arg10 boolValue:(BOOL)arg11 stringValue:(id)arg12 bytesValue:(id)arg13 subMessageValue:(id)arg14 andTypeInfoForRepeatableSubmessage:(id)arg15 ;
-(id)typeInformationForRepeatableSubmessage;
-(WAMessageAWD *)subMessageValue;
-(void)addRepeatableUInt64Value:(unsigned long long)arg1 ;
-(void)setRepeatableValues:(NSMutableArray *)arg1 ;
-(NSString *)key;
-(void)setUint32Value:(unsigned)arg1 ;
-(long long)type;
-(void)addRepeatableInt32Value:(int)arg1 ;
-(BOOL)isNumerical;
-(unsigned)uint32Value;
-(unsigned long long)uint64Value;
-(void)_throwIncorrecTypeExceptionForType:(long long)arg1 isGet:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_ownTypeAsString;
-(void)setUint64Value:(unsigned long long)arg1 ;
-(void)setSubMessageValue:(WAMessageAWD *)arg1 ;
-(id)initWithType:(long long)arg1 isRepeatable:(BOOL)arg2 andKey:(id)arg3 andTypeInfoForRepeatableSubmessage:(id)arg4 ;
-(id)_typeAsString:(long long)arg1 ;
-(void)addRepeatableBytes:(id)arg1 ;
-(void)addRepeatableSubMessageValue:(id)arg1 ;
-(BOOL)isRepeatable;
-(void)addRepeatableBoolValue:(BOOL)arg1 ;
-(void)_addRepeatableValue:(id)arg1 ;
-(void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)arg1 isGet:(BOOL)arg2 forType:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

