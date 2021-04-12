/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {

	int _failure;
	int _intent;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasIntent; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL hasFailure; 
@property (assign,nonatomic) int failure; 
+(BOOL)isValid:(id)arg1 ;
-(int)intent;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setFailure:(int)arg1 ;
-(void)setIntent:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasFailure;
-(unsigned long long)hash;
-(int)failure;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIntent;
-(void)setHasIntent:(BOOL)arg1 ;
-(id)intentAsString:(int)arg1 ;
-(int)StringAsIntent:(id)arg1 ;
-(void)setHasFailure:(BOOL)arg1 ;
-(id)failureAsString:(int)arg1 ;
-(int)StringAsFailure:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

