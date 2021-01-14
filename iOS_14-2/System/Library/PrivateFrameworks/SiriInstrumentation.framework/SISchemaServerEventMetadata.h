/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaServerEventMetadata : PBCodable {

	NSData* _turnID;
	long long _timestampNs;
	NSData* _siriDeviceID;
	NSString* _serverPod;
	SCD_Struct_SI1 _has;
	BOOL _hasTurnID;
	BOOL _hasSiriDeviceID;
	BOOL _hasServerPod;

}

@property (nonatomic,copy) NSData * turnID;                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) BOOL hasTurnID;                     //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (assign,nonatomic) long long timestampNs;              //@synthesize timestampNs=_timestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampNs; 
@property (nonatomic,copy) NSData * siriDeviceID;                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceID;               //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * serverPod;                 //@synthesize serverPod=_serverPod - In the implementation block
@property (assign,nonatomic) BOOL hasServerPod;                  //@synthesize hasServerPod=_hasServerPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)turnID;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTurnID:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTurnID;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(NSData *)siriDeviceID;
-(BOOL)hasSiriDeviceID;
-(void)setHasTurnID:(BOOL)arg1 ;
-(void)setHasSiriDeviceID:(BOOL)arg1 ;
-(void)setTimestampNs:(long long)arg1 ;
-(void)setServerPod:(NSString *)arg1 ;
-(NSString *)serverPod;
-(long long)timestampNs;
-(BOOL)hasTimestampNs;
-(void)setHasTimestampNs:(BOOL)arg1 ;
-(BOOL)hasServerPod;
-(void)setHasServerPod:(BOOL)arg1 ;
@end

