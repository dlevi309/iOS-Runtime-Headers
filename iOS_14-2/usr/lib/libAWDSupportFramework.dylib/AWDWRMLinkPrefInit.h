/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _countCellular;
	unsigned _countWifi;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCountWifi; 
@property (assign,nonatomic) unsigned countWifi;                        //@synthesize countWifi=_countWifi - In the implementation block
@property (assign,nonatomic) BOOL hasCountCellular; 
@property (assign,nonatomic) unsigned countCellular;                    //@synthesize countCellular=_countCellular - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCountWifi:(unsigned)arg1 ;
-(void)setHasCountWifi:(BOOL)arg1 ;
-(BOOL)hasCountWifi;
-(void)setCountCellular:(unsigned)arg1 ;
-(void)setHasCountCellular:(BOOL)arg1 ;
-(BOOL)hasCountCellular;
-(unsigned)countWifi;
-(unsigned)countCellular;
@end

