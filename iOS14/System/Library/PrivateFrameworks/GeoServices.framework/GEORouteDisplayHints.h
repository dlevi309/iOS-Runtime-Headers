/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORequestOptions, NSArray;

@interface GEORouteDisplayHints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _availablePaymentTypes;
	SCD_Struct_GE90* _availablePrioritizations;
	GEORequestOptions* _transitSurchargeOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _showTransitSchedules;
	struct {
		unsigned has_showTransitSchedules : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availablePaymentTypes : 1;
		unsigned read_availablePrioritizations : 1;
		unsigned read_transitSurchargeOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) id<GEOSurchargeOption> surchargeOptions; 
@property (nonatomic,readonly) NSArray * prioritizationOptions; 
@property (assign,nonatomic) BOOL hasShowTransitSchedules; 
@property (assign,nonatomic) BOOL showTransitSchedules; 
@property (nonatomic,readonly) unsigned long long availablePrioritizationsCount; 
@property (nonatomic,readonly) int* availablePrioritizations; 
@property (nonatomic,readonly) unsigned long long availablePaymentTypesCount; 
@property (nonatomic,readonly) int* availablePaymentTypes; 
@property (nonatomic,readonly) BOOL hasTransitSurchargeOptions; 
@property (nonatomic,retain) GEORequestOptions * transitSurchargeOptions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)showTransitSchedules;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addAvailablePrioritization:(int)arg1 ;
-(void)addAvailablePaymentType:(int)arg1 ;
-(void)setTransitSurchargeOptions:(GEORequestOptions *)arg1 ;
-(void)clearAvailablePrioritizations;
-(unsigned long long)availablePaymentTypesCount;
-(void)clearAvailablePaymentTypes;
-(int)availablePaymentTypeAtIndex:(unsigned long long)arg1 ;
-(int*)availablePrioritizations;
-(void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)availablePrioritizationsAsString:(int)arg1 ;
-(int*)availablePaymentTypes;
-(int)StringAsAvailablePrioritizations:(id)arg1 ;
-(void)setAvailablePaymentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasTransitSurchargeOptions;
-(id)availablePaymentTypesAsString:(int)arg1 ;
-(int)StringAsAvailablePaymentTypes:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(GEORequestOptions *)transitSurchargeOptions;
-(unsigned long long)availablePrioritizationsCount;
-(int)availablePrioritizationAtIndex:(unsigned long long)arg1 ;
-(id<GEOSurchargeOption>)surchargeOptions;
-(NSArray *)prioritizationOptions;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

