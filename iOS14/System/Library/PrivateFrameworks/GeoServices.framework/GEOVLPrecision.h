/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLPrecision : PBCodable <NSCopying> {

	SCD_Struct_GE17* _precisions;

}

@property (nonatomic,readonly) unsigned long long precisionsCount; 
@property (nonatomic,readonly) unsigned* precisions; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)precisionsCount;
-(void)readAll:(BOOL)arg1 ;
-(void)clearPrecisions;
-(unsigned*)precisions;
-(void)addPrecisions:(unsigned)arg1 ;
-(unsigned)precisionsAtIndex:(unsigned long long)arg1 ;
-(void)setPrecisions:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

