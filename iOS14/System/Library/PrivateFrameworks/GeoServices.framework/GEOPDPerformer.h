/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLocalizedString;

@interface GEOPDPerformer : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _itunesId;
	NSString* _itunesUrl;
	GEOLocalizedString* _name;
	NSString* _performerId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_itunesId : 1;
		unsigned read_itunesUrl : 1;
		unsigned read_name : 1;
		unsigned read_performerId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOLocalizedString * name; 
@property (nonatomic,readonly) BOOL hasPerformerId; 
@property (nonatomic,retain) NSString * performerId; 
@property (nonatomic,readonly) BOOL hasItunesId; 
@property (nonatomic,retain) NSString * itunesId; 
@property (nonatomic,readonly) BOOL hasItunesUrl; 
@property (nonatomic,retain) NSString * itunesUrl; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)itunesUrl;
-(NSString *)itunesId;
-(id)initWithData:(id)arg1 ;
-(NSString *)performerId;
-(void)setPerformerId:(NSString *)arg1 ;
-(void)setItunesId:(NSString *)arg1 ;
-(void)setItunesUrl:(NSString *)arg1 ;
-(BOOL)hasPerformerId;
-(BOOL)hasItunesId;
-(BOOL)hasItunesUrl;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLocalizedString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(GEOLocalizedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

