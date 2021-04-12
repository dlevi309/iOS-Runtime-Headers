/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBinStart:(int)arg1 ;
-(void)setHasBinStart:(BOOL)arg1 ;
-(BOOL)hasBinStart;
-(void)setBinEnd:(int)arg1 ;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(BOOL)hasBinEnd;
-(int)binStart;
-(int)binEnd;
@end

