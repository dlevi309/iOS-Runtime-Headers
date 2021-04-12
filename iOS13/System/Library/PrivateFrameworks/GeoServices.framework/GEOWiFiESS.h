/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOWiFiESS : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _attributes;
	SCD_Struct_GE1* _authTraits;
	NSMutableArray* _bss;
	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _qualities;
	long long _uniqueIdentifier;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_uniqueIdentifier : 1;
		unsigned read_attributes : 1;
		unsigned read_authTraits : 1;
		unsigned read_bss : 1;
		unsigned read_identifier : 1;
		unsigned read_name : 1;
		unsigned read_qualities : 1;
		unsigned wrote_attributes : 1;
		unsigned wrote_authTraits : 1;
		unsigned wrote_bss : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_name : 1;
		unsigned wrote_qualities : 1;
		unsigned wrote_uniqueIdentifier : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)qualitiesType;
+(Class)bssType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(int*)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)uniqueIdentifier;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(void)_readName;
-(void)_readQualities;
-(void)_addNoFlagsQualities:(id)arg1 ;
-(unsigned long long)qualitiesCount;
-(void)clearQualities;
-(id)qualitiesAtIndex:(unsigned long long)arg1 ;
-(void)addQualities:(id)arg1 ;
-(NSMutableArray *)qualities;
-(void)setQualities:(NSMutableArray *)arg1 ;
-(BOOL)hasIdentifier;
-(void)_readIdentifier;
-(void)_readBss;
-(void)_addNoFlagsBss:(id)arg1 ;
-(void)_readAuthTraits;
-(void)_addNoFlagsAuthTraits:(int)arg1 ;
-(void)_readAttributes;
-(void)_addNoFlagsAttributes:(int)arg1 ;
-(unsigned long long)bssCount;
-(void)clearBss;
-(id)bssAtIndex:(unsigned long long)arg1 ;
-(void)addBss:(id)arg1 ;
-(unsigned long long)authTraitsCount;
-(void)clearAuthTraits;
-(int)authTraitsAtIndex:(unsigned long long)arg1 ;
-(void)addAuthTraits:(int)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(int)attributesAtIndex:(unsigned long long)arg1 ;
-(void)addAttributes:(int)arg1 ;
-(NSMutableArray *)bss;
-(void)setBss:(NSMutableArray *)arg1 ;
-(int*)authTraits;
-(void)setAuthTraits:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)authTraitsAsString:(int)arg1 ;
-(int)StringAsAuthTraits:(id)arg1 ;
-(void)setAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributesAsString:(int)arg1 ;
-(int)StringAsAttributes:(id)arg1 ;
-(void)setHasUniqueIdentifier:(BOOL)arg1 ;
-(BOOL)hasUniqueIdentifier;
@end

