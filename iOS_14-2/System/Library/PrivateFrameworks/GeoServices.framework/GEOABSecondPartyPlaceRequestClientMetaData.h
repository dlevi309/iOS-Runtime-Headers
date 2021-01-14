/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _clientConfigs;
	GEOPDABClientDatasetMetadata* _clientDatasetMetadata;
	NSMutableArray* _serverAbAssignments;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientConfigs : 1;
		unsigned read_clientDatasetMetadata : 1;
		unsigned read_serverAbAssignments : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * serverAbAssignments; 
@property (nonatomic,retain) NSMutableArray * clientConfigs; 
@property (nonatomic,readonly) BOOL hasClientDatasetMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * clientDatasetMetadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)serverAbAssignmentType;
+(Class)clientConfigType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)clientConfigs;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)clientConfigsCount;
-(unsigned long long)serverAbAssignmentsCount;
-(id)init;
-(id)jsonRepresentation;
-(void)clearServerAbAssignments;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(void)addClientConfig:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDABClientDatasetMetadata *)clientDatasetMetadata;
-(BOOL)hasClientDatasetMetadata;
-(id)initWithData:(id)arg1 ;
-(void)setClientDatasetMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)clearClientConfigs;
-(void)addServerAbAssignment:(id)arg1 ;
-(NSMutableArray *)serverAbAssignments;
-(id)serverAbAssignmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setServerAbAssignments:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

