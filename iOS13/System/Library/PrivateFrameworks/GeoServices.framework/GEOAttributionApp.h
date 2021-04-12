/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_appBundleIdentifier : 1;
		unsigned wrote_handledSchemes : 1;
		unsigned wrote_restaurantReservationExtensionSupport : 1;
		unsigned wrote_supportsRestaurantQueueing : 1;
		unsigned wrote_supportsRestaurantReservations : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)handledSchemesType;
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
-(NSString *)appBundleIdentifier;
-(void)readAll:(BOOL)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setRestaurantReservationExtensionSupport:(int)arg1 ;
-(int)restaurantReservationExtensionSupport;
-(NSMutableArray *)handledSchemes;
-(void)_readAppBundleIdentifier;
-(void)_readHandledSchemes;
-(void)_addNoFlagsHandledSchemes:(id)arg1 ;
-(unsigned long long)handledSchemesCount;
-(void)clearHandledSchemes;
-(id)handledSchemesAtIndex:(unsigned long long)arg1 ;
-(void)addHandledSchemes:(id)arg1 ;
-(void)setHandledSchemes:(NSMutableArray *)arg1 ;
-(BOOL)supportsRestaurantReservations;
-(void)setSupportsRestaurantReservations:(BOOL)arg1 ;
-(void)setHasSupportsRestaurantReservations:(BOOL)arg1 ;
-(BOOL)hasSupportsRestaurantReservations;
-(BOOL)supportsRestaurantQueueing;
-(void)setSupportsRestaurantQueueing:(BOOL)arg1 ;
-(void)setHasSupportsRestaurantQueueing:(BOOL)arg1 ;
-(BOOL)hasSupportsRestaurantQueueing;
-(void)setHasRestaurantReservationExtensionSupport:(BOOL)arg1 ;
-(BOOL)hasRestaurantReservationExtensionSupport;
-(id)restaurantReservationExtensionSupportAsString:(int)arg1 ;
-(int)StringAsRestaurantReservationExtensionSupport:(id)arg1 ;
@end

