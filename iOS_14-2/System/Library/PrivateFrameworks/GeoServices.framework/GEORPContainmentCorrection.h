/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEORPContainmentCorrection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _addedMuids;
	SCD_Struct_GE92* _originalMuids;
	SCD_Struct_GE92* _removedMuids;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addedMuids : 1;
		unsigned read_originalMuids : 1;
		unsigned read_removedMuids : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long addedMuidsCount; 
@property (nonatomic,readonly) unsigned long long* addedMuids; 
@property (nonatomic,readonly) unsigned long long removedMuidsCount; 
@property (nonatomic,readonly) unsigned long long* removedMuids; 
@property (nonatomic,readonly) unsigned long long originalMuidsCount; 
@property (nonatomic,readonly) unsigned long long* originalMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addAddedMuid:(unsigned long long)arg1 ;
-(void)addRemovedMuid:(unsigned long long)arg1 ;
-(void)addOriginalMuid:(unsigned long long)arg1 ;
-(unsigned long long)addedMuidsCount;
-(void)clearAddedMuids;
-(unsigned long long)addedMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removedMuidsCount;
-(void)clearRemovedMuids;
-(unsigned long long*)removedMuids;
-(unsigned long long)removedMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalMuidsCount;
-(void)clearOriginalMuids;
-(unsigned long long)originalMuidAtIndex:(unsigned long long)arg1 ;
-(void)setAddedMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setRemovedMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long*)originalMuids;
-(void)setOriginalMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long*)addedMuids;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

