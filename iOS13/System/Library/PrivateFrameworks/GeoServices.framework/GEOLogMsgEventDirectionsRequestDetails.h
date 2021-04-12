/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)destination;
-(void)setDestination:(int)arg1 ;
-(int)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPurpose:(int)arg1 ;
-(int)purpose;
-(void)setOrigin:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasDestination;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)setNavStarted:(BOOL)arg1 ;
-(void)setHasPurpose:(BOOL)arg1 ;
-(BOOL)hasPurpose;
-(id)purposeAsString:(int)arg1 ;
-(int)StringAsPurpose:(id)arg1 ;
-(BOOL)navStarted;
-(void)setHasNavStarted:(BOOL)arg1 ;
-(BOOL)hasNavStarted;
-(void)setHasDestination:(BOOL)arg1 ;
-(id)destinationAsString:(int)arg1 ;
-(int)StringAsDestination:(id)arg1 ;
@end

