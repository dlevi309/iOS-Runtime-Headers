/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAttributionApp : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appBundleIdentifier;
	NSMutableArray* _handledSchemes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _restaurantReservationExtensionSupport;
	BOOL _supportsRestaurantQueueing;
	BOOL _supportsRestaurantReservations;
	struct {
		unsigned has_restaurantReservationExtensionSupport : 1;
		unsigned has_supportsRestaurantQueueing : 1;
		unsigned has_supportsRestaurantReservations : 1;
		unsigned read_appBundleIdentifier : 1;
		unsigned read_handledSchemes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * appBundleIdentifier; 
@property (nonatomic,retain) NSMutableArray * handledSchemes; 
@property (assign,nonatomic) BOOL hasSupportsRestaurantReservations; 
@property (assign,nonatomic) BOOL supportsRestaurantReservations; 
@property (assign,nonatomic) BOOL hasSupportsRestaurantQueueing; 
@property (assign,nonatomic) BOOL supportsRestaurantQueueing; 
@property (assign,nonatomic) BOOL hasRestaurantReservationExtensionSupport; 
@property (assign,nonatomic) int restaurantReservationExtensionSupport; 
+(Class)handledSchemesType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)handledSchemes;
-(void)addHandledSchemes:(id)arg1 ;
-(void)setSupportsRestaurantReservations:(BOOL)arg1 ;
-(void)setSupportsRestaurantQueueing:(BOOL)arg1 ;
-(unsigned long long)handledSchemesCount;
-(void)clearHandledSchemes;
-(id)handledSchemesAtIndex:(unsigned long long)arg1 ;
-(void)setHandledSchemes:(NSMutableArray *)arg1 ;
-(BOOL)supportsRestaurantReservations;
-(void)setHasSupportsRestaurantReservations:(BOOL)arg1 ;
-(BOOL)hasSupportsRestaurantReservations;
-(BOOL)supportsRestaurantQueueing;
-(BOOL)hasSupportsRestaurantQueueing;
-(void)setHasSupportsRestaurantQueueing:(BOOL)arg1 ;
-(void)setHasRestaurantReservationExtensionSupport:(BOOL)arg1 ;
-(BOOL)hasRestaurantReservationExtensionSupport;
-(id)restaurantReservationExtensionSupportAsString:(int)arg1 ;
-(int)StringAsRestaurantReservationExtensionSupport:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setRestaurantReservationExtensionSupport:(int)arg1 ;
-(int)restaurantReservationExtensionSupport;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

