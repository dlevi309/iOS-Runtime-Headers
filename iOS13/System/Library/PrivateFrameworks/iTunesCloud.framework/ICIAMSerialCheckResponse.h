/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)commandSerialNumber;
-(void)setCommandSerialNumber:(long long)arg1 ;
-(void)setHasCommandSerialNumber:(BOOL)arg1 ;
-(BOOL)hasCommandSerialNumber;
@end

