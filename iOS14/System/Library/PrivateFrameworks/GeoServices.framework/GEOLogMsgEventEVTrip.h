/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgEventEVTrip : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _chargeLocationDetails;
	NSString* _metro;
	NSMutableArray* _stopAddedDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _outOfCharge;
	BOOL _outOfRangeAlertDisplayed;
	struct {
		unsigned has_outOfCharge : 1;
		unsigned has_outOfRangeAlertDisplayed : 1;
		unsigned read_chargeLocationDetails : 1;
		unsigned read_metro : 1;
		unsigned read_stopAddedDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOutOfCharge; 
@property (assign,nonatomic) BOOL outOfCharge; 
@property (assign,nonatomic) BOOL hasOutOfRangeAlertDisplayed; 
@property (assign,nonatomic) BOOL outOfRangeAlertDisplayed; 
@property (nonatomic,retain) NSMutableArray * chargeLocationDetails; 
@property (nonatomic,retain) NSMutableArray * stopAddedDetails; 
@property (nonatomic,readonly) BOOL hasMetro; 
@property (nonatomic,retain) NSString * metro; 
+(Class)chargeLocationDetailsType;
+(Class)stopAddedDetailsType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasMetro;
-(NSString *)metro;
-(void)readAll:(BOOL)arg1 ;
-(void)addChargeLocationDetails:(id)arg1 ;
-(void)addStopAddedDetails:(id)arg1 ;
-(unsigned long long)chargeLocationDetailsCount;
-(void)clearChargeLocationDetails;
-(id)chargeLocationDetailsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stopAddedDetailsCount;
-(BOOL)outOfCharge;
-(void)clearStopAddedDetails;
-(id)stopAddedDetailsAtIndex:(unsigned long long)arg1 ;
-(void)setHasOutOfCharge:(BOOL)arg1 ;
-(BOOL)hasOutOfCharge;
-(BOOL)outOfRangeAlertDisplayed;
-(void)setHasOutOfRangeAlertDisplayed:(BOOL)arg1 ;
-(BOOL)hasOutOfRangeAlertDisplayed;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setMetro:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setOutOfCharge:(BOOL)arg1 ;
-(void)setOutOfRangeAlertDisplayed:(BOOL)arg1 ;
-(NSMutableArray *)chargeLocationDetails;
-(void)setChargeLocationDetails:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stopAddedDetails;
-(void)setStopAddedDetails:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

