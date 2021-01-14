/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying> {

	int _destination;
	int _origin;
	int _purpose;
	BOOL _navStarted;
	struct {
		unsigned has_destination : 1;
		unsigned has_origin : 1;
		unsigned has_purpose : 1;
		unsigned has_navStarted : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNavStarted; 
@property (assign,nonatomic) BOOL navStarted; 
@property (assign,nonatomic) BOOL hasPurpose; 
@property (assign,nonatomic) int purpose; 
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin; 
@property (assign,nonatomic) BOOL hasDestination; 
@property (assign,nonatomic) int destination; 
+(BOOL)isValid:(id)arg1 ;
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDestination:(int)arg1 ;
-(int)purpose;
-(void)setPurpose:(int)arg1 ;
-(int)origin;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)navStarted;
-(void)setHasNavStarted:(BOOL)arg1 ;
-(BOOL)hasNavStarted;
-(void)setHasDestination:(BOOL)arg1 ;
-(id)destinationAsString:(int)arg1 ;
-(int)StringAsDestination:(id)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPurpose;
-(void)setHasPurpose:(BOOL)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
-(unsigned long long)hash;
-(void)setNavStarted:(BOOL)arg1 ;
-(BOOL)hasDestination;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)destination;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)purposeAsString:(int)arg1 ;
@end

