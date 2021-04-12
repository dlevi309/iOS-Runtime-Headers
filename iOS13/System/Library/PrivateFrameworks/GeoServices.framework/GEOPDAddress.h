/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_localizedAddress : 1;
		unsigned wrote_spokenNavigationAddress : 1;
		unsigned wrote_spokenStructuredAddress : 1;
		unsigned wrote_knownAccuracy : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * localizedAddress; 
@property (nonatomic,retain) NSMutableArray * spokenNavigationAddress; 
@property (nonatomic,retain) NSMutableArray * spokenStructuredAddress; 
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedAddressType;
+(Class)spokenNavigationAddressType;
+(Class)spokenStructuredAddressType;
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
-(void)_readLocalizedAddress;
-(void)_addNoFlagsLocalizedAddress:(id)arg1 ;
-(void)_readSpokenNavigationAddress;
-(void)_addNoFlagsSpokenNavigationAddress:(id)arg1 ;
-(void)_readSpokenStructuredAddress;
-(void)_addNoFlagsSpokenStructuredAddress:(id)arg1 ;
-(unsigned long long)localizedAddressCount;
-(void)clearLocalizedAddress;
-(id)localizedAddressAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedAddress:(id)arg1 ;
-(unsigned long long)spokenNavigationAddressCount;
-(void)clearSpokenNavigationAddress;
-(id)spokenNavigationAddressAtIndex:(unsigned long long)arg1 ;
-(void)addSpokenNavigationAddress:(id)arg1 ;
-(unsigned long long)spokenStructuredAddressCount;
-(void)clearSpokenStructuredAddress;
-(id)spokenStructuredAddressAtIndex:(unsigned long long)arg1 ;
-(void)addSpokenStructuredAddress:(id)arg1 ;
-(NSMutableArray *)localizedAddress;
-(NSMutableArray *)spokenNavigationAddress;
-(NSMutableArray *)spokenStructuredAddress;
-(void)setLocalizedAddress:(NSMutableArray *)arg1 ;
-(void)setSpokenNavigationAddress:(NSMutableArray *)arg1 ;
-(void)setSpokenStructuredAddress:(NSMutableArray *)arg1 ;
-(int)knownAccuracy;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(BOOL)hasKnownAccuracy;
-(id)knownAccuracyAsString:(int)arg1 ;
-(int)StringAsKnownAccuracy:(id)arg1 ;
@end

