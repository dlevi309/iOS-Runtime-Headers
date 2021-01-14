/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _appIdentifier;
	NSString* _requestingAppId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _purpose;
	int _source;
	struct {
		unsigned has_purpose : 1;
		unsigned has_source : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_requestingAppId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose; 
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAppIdentifier;
-(id)dictionaryRepresentation;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)hasRequestingAppId;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)requestingAppId;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasSource;
-(int)purpose;
-(void)setPurpose:(int)arg1 ;
-(NSString *)appIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)description;
-(BOOL)hasPurpose;
-(id)initWithPurpose:(int)arg1 ;
-(void)setHasPurpose:(BOOL)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(id)purposeAsString:(int)arg1 ;
@end

