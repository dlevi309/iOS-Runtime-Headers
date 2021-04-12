/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORequestOptions, NSArray;

@interface GEORouteDisplayHints : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _availablePaymentTypes;
	SCD_Struct_GE1* _availablePrioritizations;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_availablePaymentTypes : 1;
		unsigned wrote_availablePrioritizations : 1;
		unsigned wrote_transitSurchargeOptions : 1;
		unsigned wrote_showTransitSchedules : 1;
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
-(id)init;
-(void)dealloc;
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
-(BOOL)showTransitSchedules;
-(void)setShowTransitSchedules:(BOOL)arg1 ;
-(void)setHasShowTransitSchedules:(BOOL)arg1 ;
-(BOOL)hasShowTransitSchedules;
-(void)_readAvailablePrioritizations;
-(void)_addNoFlagsAvailablePrioritization:(int)arg1 ;
-(void)_readAvailablePaymentTypes;
-(void)_addNoFlagsAvailablePaymentType:(int)arg1 ;
-(void)_readTransitSurchargeOptions;
-(GEORequestOptions *)transitSurchargeOptions;
-(unsigned long long)availablePrioritizationsCount;
-(void)clearAvailablePrioritizations;
-(int)availablePrioritizationAtIndex:(unsigned long long)arg1 ;
-(void)addAvailablePrioritization:(int)arg1 ;
-(unsigned long long)availablePaymentTypesCount;
-(void)clearAvailablePaymentTypes;
-(int)availablePaymentTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAvailablePaymentType:(int)arg1 ;
-(void)setTransitSurchargeOptions:(GEORequestOptions *)arg1 ;
-(int*)availablePrioritizations;
-(void)setAvailablePrioritizations:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)availablePrioritizationsAsString:(int)arg1 ;
-(int)StringAsAvailablePrioritizations:(id)arg1 ;
-(int*)availablePaymentTypes;
-(void)setAvailablePaymentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)availablePaymentTypesAsString:(int)arg1 ;
-(int)StringAsAvailablePaymentTypes:(id)arg1 ;
-(BOOL)hasTransitSurchargeOptions;
-(id<GEOSurchargeOption>)surchargeOptions;
-(NSArray *)prioritizationOptions;
@end

