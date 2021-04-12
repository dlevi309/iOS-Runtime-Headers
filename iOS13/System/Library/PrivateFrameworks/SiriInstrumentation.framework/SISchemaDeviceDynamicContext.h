/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocation, NSString, NSData;

@interface SISchemaDeviceDynamicContext : PBCodable {

	SISchemaLocation* _location;
	NSString* _countryCode;
	double _timeIntervalSince1970;

}

@property (nonatomic,retain) SISchemaLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;              //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(double)timeIntervalSince1970;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(SISchemaLocation *)location;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocation:(SISchemaLocation *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setTimeIntervalSince1970:(double)arg1 ;
@end

