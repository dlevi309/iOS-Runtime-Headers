/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _addressIdentifier;
	NSString* _name;
	NSString* _spokenName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressType;
	BOOL _isMe;
	struct {
		unsigned has_addressType : 1;
		unsigned has_isMe : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressIdentifier : 1;
		unsigned read_name : 1;
		unsigned read_spokenName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressIdentifier : 1;
		unsigned wrote_name : 1;
		unsigned wrote_spokenName : 1;
		unsigned wrote_addressType : 1;
		unsigned wrote_isMe : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName; 
@property (assign,nonatomic) BOOL hasIsMe; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,readonly) BOOL hasAddressIdentifier; 
@property (nonatomic,retain) NSString * addressIdentifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readSpokenName;
-(NSString *)spokenName;
-(void)setSpokenName:(NSString *)arg1 ;
-(BOOL)hasSpokenName;
-(void)_readAddressIdentifier;
-(NSString *)addressIdentifier;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(int)addressType;
-(void)setAddressType:(int)arg1 ;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setHasIsMe:(BOOL)arg1 ;
-(BOOL)hasIsMe;
-(BOOL)hasAddressIdentifier;
@end

