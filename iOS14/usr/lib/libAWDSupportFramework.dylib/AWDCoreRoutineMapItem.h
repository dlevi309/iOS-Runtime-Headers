/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineMapItem : PBCodable <NSCopying> {

	SCD_Struct_AW15* _mapItemSources;
	BOOL _hasMuid;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) unsigned long long mapItemSourcesCount; 
@property (nonatomic,readonly) int* mapItemSources; 
@property (assign,nonatomic) BOOL hasHasMuid; 
@property (assign,nonatomic) BOOL hasMuid;                                          //@synthesize hasMuid=_hasMuid - In the implementation block
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addMapItemSources:(int)arg1 ;
-(unsigned long long)mapItemSourcesCount;
-(void)clearMapItemSources;
-(int)mapItemSourcesAtIndex:(unsigned long long)arg1 ;
-(int*)mapItemSources;
-(void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mapItemSourcesAsString:(int)arg1 ;
-(int)StringAsMapItemSources:(id)arg1 ;
-(void)setHasHasMuid:(BOOL)arg1 ;
-(BOOL)hasHasMuid;
@end

