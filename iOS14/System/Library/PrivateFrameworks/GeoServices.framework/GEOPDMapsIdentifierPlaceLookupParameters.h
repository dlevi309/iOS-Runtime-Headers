/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _mapsIds;
	int _resultProviderId;
	BOOL _enablePartialClientization;
	struct {
		unsigned has_resultProviderId : 1;
		unsigned has_enablePartialClientization : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (nonatomic,retain) NSMutableArray * mapsIds; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mapsIdType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearMapsIds;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setResultProviderId:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setMapsIds:(NSMutableArray *)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)mapsIdsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)mapsIds;
-(void)addMapsId:(id)arg1 ;
-(id)description;
-(id)mapsIdAtIndex:(unsigned long long)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(unsigned long long)hash;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

