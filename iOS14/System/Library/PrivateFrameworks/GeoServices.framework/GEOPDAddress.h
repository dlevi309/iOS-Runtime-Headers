/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedAddress;
	NSMutableArray* _spokenNavigationAddress;
	NSMutableArray* _spokenStructuredAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _knownAccuracy;
	struct {
		unsigned has_knownAccuracy : 1;
		unsigned read_unknownFields : 1;
		unsigned read_localizedAddress : 1;
		unsigned read_spokenNavigationAddress : 1;
		unsigned read_spokenStructuredAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedAddress; 
@property (nonatomic,retain) NSMutableArray * spokenNavigationAddress; 
@property (nonatomic,retain) NSMutableArray * spokenStructuredAddress; 
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spokenNavigationAddressType;
+(Class)spokenStructuredAddressType;
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedAddressType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)spokenNavigationAddress;
-(void)addSpokenNavigationAddress:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setSpokenNavigationAddress:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)spokenNavigationAddressCount;
-(unsigned long long)spokenStructuredAddressCount;
-(id)init;
-(id)jsonRepresentation;
-(void)addSpokenStructuredAddress:(id)arg1 ;
-(id)knownAccuracyAsString:(int)arg1 ;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasKnownAccuracy;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)localizedAddressCount;
-(unsigned long long)hash;
-(int)StringAsKnownAccuracy:(id)arg1 ;
-(NSMutableArray *)spokenStructuredAddress;
-(void)clearSpokenNavigationAddress;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSpokenStructuredAddress:(NSMutableArray *)arg1 ;
-(void)addLocalizedAddress:(id)arg1 ;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(NSMutableArray *)localizedAddress;
-(void)clearLocalizedAddress;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)spokenNavigationAddressAtIndex:(unsigned long long)arg1 ;
-(id)spokenStructuredAddressAtIndex:(unsigned long long)arg1 ;
-(void)clearSpokenStructuredAddress;
@end

