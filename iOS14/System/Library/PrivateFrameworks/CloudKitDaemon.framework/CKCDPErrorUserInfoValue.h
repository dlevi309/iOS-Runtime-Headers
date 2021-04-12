/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	NSData* _bytesValue;
	NSString* _stringValue;
	BOOL _boolValue;
	SCD_Struct_CK17 _has;

}

@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                  //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasInt64Value; 
@property (assign,nonatomic) long long int64Value;                //@synthesize int64Value=_int64Value - In the implementation block
@property (assign,nonatomic) BOOL hasBoolValue; 
@property (assign,nonatomic) BOOL boolValue;                      //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                 //@synthesize bytesValue=_bytesValue - In the implementation block
-(NSData *)bytesValue;
-(id)dictionaryRepresentation;
-(double)doubleValue;
-(BOOL)boolValue;
-(long long)int64Value;
-(BOOL)hasBytesValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setInt64Value:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasInt64Value:(BOOL)arg1 ;
-(BOOL)hasInt64Value;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

