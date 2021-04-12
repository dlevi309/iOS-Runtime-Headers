/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE99 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (assign,nonatomic) BOOL hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEOPBTransitIncidentEntityFilter * filter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFilter:(GEOPBTransitIncidentEntityFilter *)arg1 ;
-(GEOPBTransitIncidentEntityFilter *)filter;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)muid;
-(unsigned long long)affectedMuid;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(void)setHasAffectedMuid:(BOOL)arg1 ;
-(BOOL)hasAffectedMuid;
-(BOOL)hasFilter;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;
@end

