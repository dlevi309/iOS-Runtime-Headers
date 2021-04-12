/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSLocalMessageTimedOut : PBCodable <NSCopying> {

	long long _expirationDate;
	unsigned long long _timestamp;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) long long expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)dictionaryRepresentation;
-(void)setExpirationDate:(long long)arg1 ;
-(BOOL)hasExpirationDate;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(id)description;
-(long long)expirationDate;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

