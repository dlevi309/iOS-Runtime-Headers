/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocation, NSString, NSData;

@interface SISchemaDeviceDynamicContext : PBCodable {

	SISchemaLocation* _location;
	NSString* _countryCode;
	double _timeIntervalSince1970;
	SCD_Struct_SI1 _has;
	BOOL _hasLocation;
	BOOL _hasCountryCode;

}

@property (nonatomic,retain) SISchemaLocation * location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                           //@synthesize hasLocation=_hasLocation - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasCountryCode;                        //@synthesize hasCountryCode=_hasCountryCode - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSince1970; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(SISchemaLocation *)location;
-(BOOL)hasTimeIntervalSince1970;
-(NSData *)jsonData;
-(void)setHasTimeIntervalSince1970:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(SISchemaLocation *)arg1 ;
-(double)timeIntervalSince1970;
-(BOOL)hasLocation;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCountryCode:(BOOL)arg1 ;
@end

