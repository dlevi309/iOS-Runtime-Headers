/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaClientTransportEventMetadata : PBCodable {

	NSString* _eventTransmittedTimestampRefId;
	long long _eventTransmittedRelativeToBootTimeTimestampNs;
	long long _serverArrivedTimestampNs;
	NSString* _arrivedServerPod;
	SCD_Struct_SI3 _has;
	BOOL _hasEventTransmittedTimestampRefId;
	BOOL _hasArrivedServerPod;

}

@property (nonatomic,copy) NSString * eventTransmittedTimestampRefId;                              //@synthesize eventTransmittedTimestampRefId=_eventTransmittedTimestampRefId - In the implementation block
@property (assign,nonatomic) BOOL hasEventTransmittedTimestampRefId;                               //@synthesize hasEventTransmittedTimestampRefId=_hasEventTransmittedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;              //@synthesize eventTransmittedRelativeToBootTimeTimestampNs=_eventTransmittedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasEventTransmittedRelativeToBootTimeTimestampNs; 
@property (assign,nonatomic) long long serverArrivedTimestampNs;                                   //@synthesize serverArrivedTimestampNs=_serverArrivedTimestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasServerArrivedTimestampNs; 
@property (nonatomic,copy) NSString * arrivedServerPod;                                            //@synthesize arrivedServerPod=_arrivedServerPod - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedServerPod;                                             //@synthesize hasArrivedServerPod=_hasArrivedServerPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(long long)eventTransmittedRelativeToBootTimeTimestampNs;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServerArrivedTimestampNs:(long long)arg1 ;
-(void)setArrivedServerPod:(NSString *)arg1 ;
-(NSString *)arrivedServerPod;
-(long long)serverArrivedTimestampNs;
-(BOOL)hasEventTransmittedTimestampRefId;
-(BOOL)hasEventTransmittedRelativeToBootTimeTimestampNs;
-(void)setHasEventTransmittedRelativeToBootTimeTimestampNs:(BOOL)arg1 ;
-(BOOL)hasServerArrivedTimestampNs;
-(void)setHasServerArrivedTimestampNs:(BOOL)arg1 ;
-(BOOL)hasArrivedServerPod;
-(void)setHasEventTransmittedTimestampRefId:(BOOL)arg1 ;
-(void)setHasArrivedServerPod:(BOOL)arg1 ;
@end

