/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABDebugPanelExperimentBranch, NSString;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOABDebugPanelExperimentBranch* _debugExperimentBranch;
	NSString* _offlineAbJson;
	NSString* _querySubstring;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeRequestType;
	int _serviceType;
	struct {
		unsigned has_placeRequestType : 1;
		unsigned has_serviceType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_debugExperimentBranch : 1;
		unsigned read_offlineAbJson : 1;
		unsigned read_querySubstring : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType; 
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasQuerySubstring; 
@property (nonatomic,retain) NSString * querySubstring; 
@property (nonatomic,readonly) BOOL hasDebugExperimentBranch; 
@property (nonatomic,retain) GEOABDebugPanelExperimentBranch * debugExperimentBranch; 
@property (nonatomic,readonly) BOOL hasOfflineAbJson; 
@property (nonatomic,retain) NSString * offlineAbJson; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)StringAsServiceType:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(id)init;
-(void)setPlaceRequestType:(int)arg1 ;
-(id)jsonRepresentation;
-(GEOABDebugPanelExperimentBranch *)debugExperimentBranch;
-(BOOL)hasPlaceRequestType;
-(void)mergeFrom:(id)arg1 ;
-(void)setDebugExperimentBranch:(GEOABDebugPanelExperimentBranch *)arg1 ;
-(BOOL)hasDebugExperimentBranch;
-(NSString *)offlineAbJson;
-(void)setQuerySubstring:(NSString *)arg1 ;
-(void)setOfflineAbJson:(NSString *)arg1 ;
-(BOOL)hasQuerySubstring;
-(BOOL)hasOfflineAbJson;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(id)description;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(int)placeRequestType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)serviceType;
-(BOOL)hasServiceType;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)querySubstring;
-(id)serviceTypeAsString:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

