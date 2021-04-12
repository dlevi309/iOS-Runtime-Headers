/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	NSData* _bytesValue;
	NSString* _stringValue;
	BOOL _boolValue;
	SCD_Struct_CK16 _has;

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
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(long long)int64Value;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setHasBoolValue:(BOOL)arg1 ;
-(BOOL)hasBoolValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasBytesValue;
-(NSData *)bytesValue;
-(void)setInt64Value:(long long)arg1 ;
-(void)setHasInt64Value:(BOOL)arg1 ;
-(BOOL)hasInt64Value;
@end

