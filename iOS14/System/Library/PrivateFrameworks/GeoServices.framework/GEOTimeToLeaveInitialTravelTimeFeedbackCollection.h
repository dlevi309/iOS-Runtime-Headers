/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying> {

	int _travelTime;
	struct {
		unsigned has_travelTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) int travelTime; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)travelTime;
-(void)setTravelTime:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasTravelTime;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(id)travelTimeAsString:(int)arg1 ;
-(int)StringAsTravelTime:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

