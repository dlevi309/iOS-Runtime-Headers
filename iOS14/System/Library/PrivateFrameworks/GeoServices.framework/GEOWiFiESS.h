/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOWiFiESS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _attributes;
	SCD_Struct_GE90* _authTraits;
	NSMutableArray* _bss;
	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _ownerIdentifiers;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _networkType;
	int _venueGroup;
	unsigned _venueType;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned has_networkType : 1;
		unsigned has_venueGroup : 1;
		unsigned has_venueType : 1;
		unsigned read_attributes : 1;
		unsigned read_authTraits : 1;
		unsigned read_bss : 1;
		unsigned read_identifier : 1;
		unsigned read_name : 1;
		unsigned read_ownerIdentifiers : 1;
		unsigned read_qualities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSMutableArray * bss; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) unsigned long long authTraitsCount; 
@property (nonatomic,readonly) int* authTraits; 
@property (nonatomic,retain) NSMutableArray * qualities; 
@property (nonatomic,readonly) unsigned long long attributesCount; 
@property (nonatomic,readonly) int* attributes; 
@property (assign,nonatomic) BOOL hasUniqueIdentifier; 
@property (assign,nonatomic) long long uniqueIdentifier; 
@property (nonatomic,retain) NSMutableArray * ownerIdentifiers; 
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType; 
@property (assign,nonatomic) BOOL hasVenueGroup; 
@property (assign,nonatomic) int venueGroup; 
@property (assign,nonatomic) BOOL hasVenueType; 
@property (assign,nonatomic) unsigned venueType; 
+(Class)bssType;
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
+(Class)ownerIdentifierType;
-(NSMutableArray *)bss;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(int)venueGroup;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasUniqueIdentifier;
-(BOOL)hasIdentifier;
-(BOOL)hasNetworkType;
-(long long)uniqueIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)addBss:(id)arg1 ;
-(void)setBss:(NSMutableArray *)arg1 ;
-(void)clearAttributes;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(NSString *)name;
-(int*)attributes;
-(id)description;
-(unsigned long long)bssCount;
-(void)clearBss;
-(void)addAttributes:(int)arg1 ;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)venueType;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)attributesCount;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)qualities;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addQualities:(id)arg1 ;
-(int*)authTraits;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(NSMutableArray *)ownerIdentifiers;
-(void)addAuthTraits:(int)arg1 ;
-(void)addOwnerIdentifier:(id)arg1 ;
-(void)setVenueGroup:(int)arg1 ;
-(void)setVenueType:(unsigned)arg1 ;
-(id)bssAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)authTraitsCount;
-(BOOL)hasVenueType;
-(void)clearAuthTraits;
-(int)authTraitsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ownerIdentifiersCount;
-(void)clearOwnerIdentifiers;
-(id)ownerIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)setAuthTraits:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)authTraitsAsString:(int)arg1 ;
-(int)StringAsAuthTraits:(id)arg1 ;
-(void)setOwnerIdentifiers:(NSMutableArray *)arg1 ;
-(void)setHasVenueGroup:(BOOL)arg1 ;
-(BOOL)hasVenueGroup;
-(void)setHasVenueType:(BOOL)arg1 ;
-(id)venueGroupAsString:(int)arg1 ;
-(int)StringAsVenueGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

