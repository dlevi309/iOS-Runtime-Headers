/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaClientTransportEventMetadata : PBCodable {

	NSString* _eventTransmittedTimestampRefId;
	long long _eventTransmittedRelativeToBootTimeTimestampNs;
	long long _serverArrivedTimestampNs;
	NSString* _arrivedServerPod;

}

@property (nonatomic,copy) NSString * eventTransmittedTimestampRefId;                              //@synthesize eventTransmittedTimestampRefId=_eventTransmittedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;              //@synthesize eventTransmittedRelativeToBootTimeTimestampNs=_eventTransmittedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) long long serverArrivedTimestampNs;                                   //@synthesize serverArrivedTimestampNs=_serverArrivedTimestampNs - In the implementation block
@property (nonatomic,copy) NSString * arrivedServerPod;                                            //@synthesize arrivedServerPod=_arrivedServerPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(long long)eventTransmittedRelativeToBootTimeTimestampNs;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(void)setServerArrivedTimestampNs:(long long)arg1 ;
-(void)setArrivedServerPod:(NSString *)arg1 ;
-(long long)serverArrivedTimestampNs;
-(NSString *)arrivedServerPod;
@end

