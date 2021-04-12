/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLocation : PBCodable {

	float _latitude;
	float _longitude;
	float _horizontalAccuracyInMeters;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) float latitude;                                  //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) float longitude;                                 //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) float horizontalAccuracyInMeters;                //@synthesize horizontalAccuracyInMeters=_horizontalAccuracyInMeters - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracyInMeters; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(float)latitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(float)longitude;
-(NSData *)jsonData;
-(void)setLongitude:(float)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHorizontalAccuracyInMeters:(float)arg1 ;
-(float)horizontalAccuracyInMeters;
-(BOOL)hasHorizontalAccuracyInMeters;
-(void)setHasHorizontalAccuracyInMeters:(BOOL)arg1 ;
@end

