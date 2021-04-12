/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaServerEventMetadata : PBCodable {

	NSData* _turnID;
	long long _timestampNs;
	NSData* _siriDeviceID;
	NSString* _serverPod;

}

@property (nonatomic,copy) NSData * turnID;                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) long long timestampNs;              //@synthesize timestampNs=_timestampNs - In the implementation block
@property (nonatomic,copy) NSData * siriDeviceID;                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * serverPod;                 //@synthesize serverPod=_serverPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(NSData *)siriDeviceID;
-(void)setTimestampNs:(long long)arg1 ;
-(void)setServerPod:(NSString *)arg1 ;
-(long long)timestampNs;
-(NSString *)serverPod;
@end

