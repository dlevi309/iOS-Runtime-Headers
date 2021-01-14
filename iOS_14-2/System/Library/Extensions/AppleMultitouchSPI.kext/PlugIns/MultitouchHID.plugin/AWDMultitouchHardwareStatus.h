/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/AppleMultitouchSPI.kext/PlugIns/MultitouchHID.plugin/MultitouchHID
*/

#import <MultitouchHID/MultitouchHID-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMultitouchHardwareStatus : PBCodable <NSCopying> {

	SCD_Struct_AW2* _openRows;
	unsigned long long _timestamp;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long openRowsCount; 
@property (nonatomic,readonly) unsigned* openRows; 
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
-(void)dealloc;
-(void)addOpenRows:(unsigned)arg1 ;
-(unsigned long long)openRowsCount;
-(void)clearOpenRows;
-(unsigned)openRowsAtIndex:(unsigned long long)arg1 ;
-(unsigned*)openRows;
-(void)setOpenRows:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

