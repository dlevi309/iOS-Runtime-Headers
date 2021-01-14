/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaAudioFirstBufferRecorded : PBCodable {

	int _audioInputRoute;
	SISchemaHardwareInterfaceIdentifier* _hardwareInterfaceVendorID;
	SCD_Struct_SI1 _has;
	BOOL _hasHardwareInterfaceVendorID;

}

@property (assign,nonatomic) int audioInputRoute;                                                          //@synthesize audioInputRoute=_audioInputRoute - In the implementation block
@property (assign,nonatomic) BOOL hasAudioInputRoute; 
@property (nonatomic,retain) SISchemaHardwareInterfaceIdentifier * hardwareInterfaceVendorID;              //@synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareInterfaceVendorID;                                            //@synthesize hasHardwareInterfaceVendorID=_hasHardwareInterfaceVendorID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHardwareInterfaceVendorID:(SISchemaHardwareInterfaceIdentifier *)arg1 ;
-(void)setAudioInputRoute:(int)arg1 ;
-(SISchemaHardwareInterfaceIdentifier *)hardwareInterfaceVendorID;
-(int)audioInputRoute;
-(BOOL)hasAudioInputRoute;
-(void)setHasAudioInputRoute:(BOOL)arg1 ;
-(BOOL)hasHardwareInterfaceVendorID;
-(void)setHasHardwareInterfaceVendorID:(BOOL)arg1 ;
@end

