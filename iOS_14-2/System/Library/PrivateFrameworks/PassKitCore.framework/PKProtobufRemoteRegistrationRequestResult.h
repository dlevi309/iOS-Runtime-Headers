/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufRemoteRegistrationRequestResult : PBCodable <NSCopying> {

	unsigned _result;
	unsigned _version;
	SCD_Struct_PK13 _has;

}

@property (assign,nonatomic) unsigned version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;               //@synthesize result=_result - In the implementation block
-(void)setResult:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(void)setHasResult:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

