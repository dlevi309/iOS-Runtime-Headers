/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _muids;
	NSMutableArray* _identifiers;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _resultProviderId;
	BOOL _enablePartialClientization;
	struct {
		unsigned has_resultProviderId : 1;
		unsigned has_enablePartialClientization : 1;
		unsigned read_unknownFields : 1;
		unsigned read_muids : 1;
		unsigned read_identifiers : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * identifiers; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (nonatomic,readonly) unsigned long long muidsCount; 
@property (nonatomic,readonly) unsigned long long* muids; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)identifierType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long*)muids;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(NSMutableArray *)identifiers;
-(void)setResultProviderId:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(void)addMuid:(unsigned long long)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(unsigned long long)hash;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)muidsCount;
-(void)clearMuids;
-(unsigned long long)identifiersCount;
-(void)addIdentifier:(id)arg1 ;
-(void)clearIdentifiers;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(void)setMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

