/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaLocation : PBCodable {

	float _latitude;
	float _longitude;
	float _horizontalAccuracyInMeters;

}

@property (assign,nonatomic) float latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) float longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float horizontalAccuracyInMeters;              //@synthesize horizontalAccuracyInMeters=_horizontalAccuracyInMeters - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(float)latitude;
-(float)longitude;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setHorizontalAccuracyInMeters:(float)arg1 ;
-(float)horizontalAccuracyInMeters;
@end

