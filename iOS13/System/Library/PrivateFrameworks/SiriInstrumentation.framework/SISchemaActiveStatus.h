/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaActiveStatus : PBCodable {

	BOOL _carPlayActiveWithin24Hours;
	NSArray* _audioDevicesActiveWithin24Hours;

}

@property (nonatomic,copy) NSArray * audioDevicesActiveWithin24Hours;              //@synthesize audioDevicesActiveWithin24Hours=_audioDevicesActiveWithin24Hours - In the implementation block
@property (assign,nonatomic) BOOL carPlayActiveWithin24Hours;                      //@synthesize carPlayActiveWithin24Hours=_carPlayActiveWithin24Hours - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addAudioDevicesActiveWithin24Hours:(id)arg1 ;
-(void)setCarPlayActiveWithin24Hours:(BOOL)arg1 ;
-(BOOL)carPlayActiveWithin24Hours;
-(NSArray *)audioDevicesActiveWithin24Hours;
-(void)clearAudioDevicesActiveWithin24Hours;
-(unsigned long long)audioDevicesActiveWithin24HoursCount;
-(id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)arg1 ;
-(void)setAudioDevicesActiveWithin24Hours:(NSArray *)arg1 ;
@end

