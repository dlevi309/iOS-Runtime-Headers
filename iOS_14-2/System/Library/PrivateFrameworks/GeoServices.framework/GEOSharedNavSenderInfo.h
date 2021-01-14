/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOSharedNavSenderInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _fromDisplayName;
	NSString* _fromIdentifier;
	NSString* _localContactIdentifier;
	NSString* _localName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_fromDisplayName : 1;
		unsigned read_fromIdentifier : 1;
		unsigned read_localContactIdentifier : 1;
		unsigned read_localName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocalName; 
@property (nonatomic,retain) NSString * localName; 
@property (nonatomic,readonly) BOOL hasLocalContactIdentifier; 
@property (nonatomic,retain) NSString * localContactIdentifier; 
@property (nonatomic,readonly) BOOL hasFromIdentifier; 
@property (nonatomic,retain) NSString * fromIdentifier; 
@property (nonatomic,readonly) BOOL hasFromDisplayName; 
@property (nonatomic,retain) NSString * fromDisplayName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)localName;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)fromIdentifier;
-(NSString *)localContactIdentifier;
-(NSString *)fromDisplayName;
-(void)setLocalName:(NSString *)arg1 ;
-(void)setLocalContactIdentifier:(NSString *)arg1 ;
-(void)setFromIdentifier:(NSString *)arg1 ;
-(void)setFromDisplayName:(NSString *)arg1 ;
-(BOOL)hasLocalName;
-(BOOL)hasLocalContactIdentifier;
-(BOOL)hasFromIdentifier;
-(BOOL)hasFromDisplayName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

