/*
* Generated on Thursday, January 14, 2021 at 2:29:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWifiP2PAirplayHistogramBin : PBCodable <NSCopying> {

	int _binEnd;
	int _binStart;
	unsigned _count;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) int binStart;                  //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) int binEnd;                    //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                //@synthesize count=_count - In the implementation block
-(id)dictionaryRepresentation;
-(int)binStart;
-(void)setCount:(unsigned)arg1 ;
-(void)setBinEnd:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)count;
-(void)setBinStart:(int)arg1 ;
-(void)setHasBinStart:(BOOL)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(unsigned long long)hash;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)binEnd;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBinEnd;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasBinStart;
-(BOOL)isEqual:(id)arg1 ;
@end

