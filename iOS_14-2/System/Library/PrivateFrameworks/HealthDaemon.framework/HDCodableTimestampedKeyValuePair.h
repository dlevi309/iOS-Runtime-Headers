/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {

	double _numberDoubleValue;
	long long _numberIntValue;
	double _timestamp;
	NSData* _bytesValue;
	NSString* _key;
	NSString* _stringValue;
	SCD_Struct_HD12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;               //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) BOOL hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;               //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                    //@synthesize bytesValue=_bytesValue - In the implementation block
-(BOOL)hasKey;
-(NSData *)bytesValue;
-(id)dictionaryRepresentation;
-(BOOL)hasBytesValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasStringValue;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(void)setValue:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(NSString *)key;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumberIntValue:(long long)arg1 ;
-(void)setHasNumberIntValue:(BOOL)arg1 ;
-(BOOL)hasNumberIntValue;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setHasNumberDoubleValue:(BOOL)arg1 ;
-(BOOL)hasNumberDoubleValue;
-(long long)numberIntValue;
-(double)numberDoubleValue;
-(void)setTimestampWithDate:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3 ;
-(id)decodedValue;
-(id)decodedTimestamp;
@end

