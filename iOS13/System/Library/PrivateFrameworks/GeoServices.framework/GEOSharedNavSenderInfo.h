/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_fromDisplayName : 1;
		unsigned wrote_fromIdentifier : 1;
		unsigned wrote_localContactIdentifier : 1;
		unsigned wrote_localName : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLocalName;
-(void)_readLocalContactIdentifier;
-(void)_readFromIdentifier;
-(void)_readFromDisplayName;
-(NSString *)localName;
-(NSString *)localContactIdentifier;
-(NSString *)fromIdentifier;
-(NSString *)fromDisplayName;
-(void)setLocalName:(NSString *)arg1 ;
-(void)setLocalContactIdentifier:(NSString *)arg1 ;
-(void)setFromIdentifier:(NSString *)arg1 ;
-(void)setFromDisplayName:(NSString *)arg1 ;
-(BOOL)hasLocalName;
-(BOOL)hasLocalContactIdentifier;
-(BOOL)hasFromIdentifier;
-(BOOL)hasFromDisplayName;
@end

