/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateExtension : PBCodable <NSCopying> {

	BOOL _hasRideBookingAppEnabled;
	BOOL _hasRideBookingAppInstalled;
	BOOL _hasTableBookingAppEnabled;
	BOOL _hasTableBookingAppInstalled;
	struct {
		unsigned has_hasRideBookingAppEnabled : 1;
		unsigned has_hasRideBookingAppInstalled : 1;
		unsigned has_hasTableBookingAppEnabled : 1;
		unsigned has_hasTableBookingAppInstalled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHasRideBookingAppInstalled; 
@property (assign,nonatomic) BOOL hasRideBookingAppInstalled; 
@property (assign,nonatomic) BOOL hasHasRideBookingAppEnabled; 
@property (assign,nonatomic) BOOL hasRideBookingAppEnabled; 
@property (assign,nonatomic) BOOL hasHasTableBookingAppInstalled; 
@property (assign,nonatomic) BOOL hasTableBookingAppInstalled; 
@property (assign,nonatomic) BOOL hasHasTableBookingAppEnabled; 
@property (assign,nonatomic) BOOL hasTableBookingAppEnabled; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasHasRideBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasHasRideBookingAppInstalled;
-(void)setHasHasRideBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasHasRideBookingAppEnabled;
-(BOOL)hasHasTableBookingAppInstalled;
-(void)setHasHasTableBookingAppInstalled:(BOOL)arg1 ;
-(void)setHasHasTableBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasHasTableBookingAppEnabled;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasTableBookingAppInstalled;
-(void)setHasTableBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasTableBookingAppEnabled;
-(void)setHasTableBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasRideBookingAppInstalled;
-(void)setHasRideBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasRideBookingAppEnabled;
-(void)setHasRideBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

