/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaActiveStatus : PBCodable {

	NSArray* _audioDevicesActiveWithin24Hours;
	BOOL _carPlayActiveWithin24Hours;
	SCD_Struct_SI1 _has;

}

@property (nonatomic,copy) NSArray * audioDevicesActiveWithin24Hours;              //@synthesize audioDevicesActiveWithin24Hours=_audioDevicesActiveWithin24Hours - In the implementation block
@property (assign,nonatomic) BOOL carPlayActiveWithin24Hours;                      //@synthesize carPlayActiveWithin24Hours=_carPlayActiveWithin24Hours - In the implementation block
@property (assign,nonatomic) BOOL hasCarPlayActiveWithin24Hours; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addAudioDevicesActiveWithin24Hours:(id)arg1 ;
-(void)setCarPlayActiveWithin24Hours:(BOOL)arg1 ;
-(NSArray *)audioDevicesActiveWithin24Hours;
-(BOOL)carPlayActiveWithin24Hours;
-(void)clearAudioDevicesActiveWithin24Hours;
-(unsigned long long)audioDevicesActiveWithin24HoursCount;
-(id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCarPlayActiveWithin24Hours;
-(void)setHasCarPlayActiveWithin24Hours:(BOOL)arg1 ;
-(void)setAudioDevicesActiveWithin24Hours:(NSArray *)arg1 ;
@end

