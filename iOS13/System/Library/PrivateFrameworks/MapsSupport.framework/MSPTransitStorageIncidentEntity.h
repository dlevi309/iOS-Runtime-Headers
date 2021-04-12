/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, PBUnknownFields, NSString;

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_MS7* _nextStopsMuids;
	unsigned long long _muid;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                               //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) unsigned long long nextStopsMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopsMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;
-(id)initWithIncidentEntity:(id)arg1 ;
-(void)addNextStopsMuids:(unsigned long long)arg1 ;
-(unsigned long long)nextStopsMuidsCount;
-(unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1 ;
-(void)clearNextStopsMuids;
-(unsigned long long*)nextStopsMuids;
-(void)setNextStopsMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

