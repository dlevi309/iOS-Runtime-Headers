/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, NSData, WAMessage;

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
@property (nonatomic,retain) WAMessage * subMessageValue; 
+(BOOL)supportsSecureCoding;
-(float)floatValue;
-(double)doubleValue;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setKey:(NSString *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(long long)int64Value;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(NSData *)bytesValue;
-(BOOL)isRepeatable;
-(void)setInt64Value:(long long)arg1 ;
-(id)initWithType:(long long)arg1 isRepeatable:(BOOL)arg2 key:(id)arg3 repeatableValues:(id)arg4 doubleValue:(double)arg5 floatValue:(float)arg6 int32Value:(int)arg7 int64Value:(long long)arg8 uint32Val:(unsigned)arg9 uint64Value:(unsigned long long)arg10 boolValue:(BOOL)arg11 stringValue:(id)arg12 bytesValue:(id)arg13 subMessageValue:(id)arg14 andTypeInfoForRepeatableSubmessage:(id)arg15 ;
-(id)_ownTypeAsString;
-(void)_throwIncorrecTypeExceptionForType:(long long)arg1 isGet:(BOOL)arg2 ;
-(void)_throwIncorrectRepeatableStateExceptionAsFieldShouldBeRepeatable:(BOOL)arg1 isGet:(BOOL)arg2 forType:(long long)arg3 ;
-(void)_addRepeatableValue:(id)arg1 ;
-(NSMutableArray *)repeatableValues;
-(int)int32Value;
-(unsigned)uint32Value;
-(unsigned long long)uint64Value;
-(WAMessage *)subMessageValue;
-(id)_typeAsString:(long long)arg1 ;
-(id)initWithType:(long long)arg1 isRepeatable:(BOOL)arg2 andKey:(id)arg3 andTypeInfoForRepeatableSubmessage:(id)arg4 ;
-(void)setInt32Value:(int)arg1 ;
-(void)setUint32Value:(unsigned)arg1 ;
-(void)setUint64Value:(unsigned long long)arg1 ;
-(void)setSubMessageValue:(WAMessage *)arg1 ;
-(void)setRepeatableValues:(NSMutableArray *)arg1 ;
-(void)addRepeatableDoubleValue:(double)arg1 ;
-(void)addRepeatableFloatValue:(float)arg1 ;
-(void)addRepeatableInt32Value:(int)arg1 ;
-(void)addRepeatableInt64Value:(long long)arg1 ;
-(void)addRepeatableUInt32Value:(unsigned)arg1 ;
-(void)addRepeatableUInt64Value:(unsigned long long)arg1 ;
-(void)addRepeatableBoolValue:(BOOL)arg1 ;
-(void)addRepeatableString:(id)arg1 ;
-(void)addRepeatableBytes:(id)arg1 ;
-(void)addRepeatableSubMessageValue:(id)arg1 ;
-(BOOL)isNumerical;
-(void)setTypeInformationForRepeatableSubmessage:(id)arg1 ;
-(id)typeInformationForRepeatableSubmessage;
-(void)setIsRepeatable:(BOOL)arg1 ;
@end

