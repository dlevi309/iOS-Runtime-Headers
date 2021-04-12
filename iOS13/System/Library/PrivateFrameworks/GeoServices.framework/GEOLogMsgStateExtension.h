/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasRideBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasRideBookingAppInstalled;
-(void)setHasRideBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasRideBookingAppEnabled;
-(void)setHasTableBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasTableBookingAppInstalled;
-(void)setHasTableBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasTableBookingAppEnabled;
-(void)setHasHasRideBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasHasRideBookingAppInstalled;
-(void)setHasHasRideBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasHasRideBookingAppEnabled;
-(void)setHasHasTableBookingAppInstalled:(BOOL)arg1 ;
-(BOOL)hasHasTableBookingAppInstalled;
-(void)setHasHasTableBookingAppEnabled:(BOOL)arg1 ;
-(BOOL)hasHasTableBookingAppEnabled;
@end

