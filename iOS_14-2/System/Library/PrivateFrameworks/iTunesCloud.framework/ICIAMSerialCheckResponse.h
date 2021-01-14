/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICIAMSerialCheckResponse : PBCodable <NSCopying> {

	long long _commandSerialNumber;
	SCD_Struct_IC7 _has;

}

@property (assign,nonatomic) BOOL hasCommandSerialNumber; 
@property (assign,nonatomic) long long commandSerialNumber;              //@synthesize commandSerialNumber=_commandSerialNumber - In the implementation block
-(id)dictionaryRepresentation;
-(long long)commandSerialNumber;
-(void)mergeFrom:(id)arg1 ;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(BOOL)arg1 ;
-(BOOL)hasCommandSerialNumber;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

