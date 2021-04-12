/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaTextToSpeechBegin : PBCodable {

	int _audioOutputRoute;
	NSString* _aceID;
	SISchemaHardwareInterfaceIdentifier* _hardwareInterfaceVendorID;

}

@property (nonatomic,copy) NSString * aceID;                                                               //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) int audioOutputRoute;                                                         //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (nonatomic,retain) SISchemaHardwareInterfaceIdentifier * hardwareInterfaceVendorID;              //@synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(int)audioOutputRoute;
-(void)setAudioOutputRoute:(int)arg1 ;
-(void)setAceID:(NSString *)arg1 ;
-(void)setHardwareInterfaceVendorID:(SISchemaHardwareInterfaceIdentifier *)arg1 ;
-(SISchemaHardwareInterfaceIdentifier *)hardwareInterfaceVendorID;
-(NSString *)aceID;
@end

