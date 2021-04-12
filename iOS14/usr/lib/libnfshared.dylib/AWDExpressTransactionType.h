/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDExpressTransactionType : PBCodable <NSCopying> {

	unsigned _appletType;
	unsigned _count;
	NSData* _ridAndPix;
	unsigned _spid;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasRidAndPix; 
@property (nonatomic,retain) NSData * ridAndPix;               //@synthesize ridAndPix=_ridAndPix - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                    //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasAppletType; 
@property (assign,nonatomic) unsigned appletType;              //@synthesize appletType=_appletType - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(unsigned)spid;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSpid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(void)setRidAndPix:(NSData *)arg1 ;
-(BOOL)hasRidAndPix;
-(void)setAppletType:(unsigned)arg1 ;
-(void)setHasAppletType:(BOOL)arg1 ;
-(BOOL)hasAppletType;
-(NSData *)ridAndPix;
-(unsigned)appletType;
@end

