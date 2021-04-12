/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, PBUnknownFields, NSString;

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_MS8* _nextStopsMuids;
	unsigned long long _muid;
	SCD_Struct_MS3 _has;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                               //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) unsigned long long nextStopsMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopsMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSSet *)nextStopIDs;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasNextStopIDs;
-(id)initWithIncidentEntity:(id)arg1 ;
-(void)addNextStopsMuids:(unsigned long long)arg1 ;
-(unsigned long long)nextStopsMuidsCount;
-(unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1 ;
-(void)clearNextStopsMuids;
-(unsigned long long*)nextStopsMuids;
-(void)setNextStopsMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

