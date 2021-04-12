/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasRidAndPix; 
@property (nonatomic,retain) NSData * ridAndPix;               //@synthesize ridAndPix=_ridAndPix - In the implementation block
@property (assign,nonatomic) BOOL hasSpid; 
@property (assign,nonatomic) unsigned spid;                    //@synthesize spid=_spid - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                   //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasAppletType; 
@property (assign,nonatomic) unsigned appletType;              //@synthesize appletType=_appletType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setSpid:(unsigned)arg1 ;
-(void)setHasSpid:(BOOL)arg1 ;
-(BOOL)hasSpid;
-(unsigned)spid;
-(void)setRidAndPix:(NSData *)arg1 ;
-(BOOL)hasRidAndPix;
-(void)setAppletType:(unsigned)arg1 ;
-(void)setHasAppletType:(BOOL)arg1 ;
-(BOOL)hasAppletType;
-(NSData *)ridAndPix;
-(unsigned)appletType;
@end

