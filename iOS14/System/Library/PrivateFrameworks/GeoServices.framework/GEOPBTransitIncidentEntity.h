/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, PBUnknownFields, GEOPBTransitIncidentEntityFilter, NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _affectedMuid;
	GEOPBTransitIncidentEntityFilter* _filter;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPBTransitIncidentEntityFilter * filter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFilter:(GEOPBTransitIncidentEntityFilter *)arg1 ;
-(GEOPBTransitIncidentEntityFilter *)filter;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)hasFilter;
-(BOOL)readFrom:(id)arg1 ;
-(NSSet *)nextStopIDs;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(unsigned long long)affectedMuid;
-(BOOL)hasAffectedMuid;
-(void)setHasAffectedMuid:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasNextStopIDs;
@end

