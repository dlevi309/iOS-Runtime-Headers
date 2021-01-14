/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAudioStopRecording : PBCodable {

	int _endpointType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int endpointType;                  //@synthesize endpointType=_endpointType - In the implementation block
@property (assign,nonatomic) BOOL hasEndpointType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(void)setEndpointType:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(int)endpointType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasEndpointType;
-(void)setHasEndpointType:(BOOL)arg1 ;
@end

