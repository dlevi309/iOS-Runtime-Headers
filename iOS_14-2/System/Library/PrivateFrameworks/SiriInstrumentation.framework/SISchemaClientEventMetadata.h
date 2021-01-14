/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaClientEventMetadata : PBCodable {

	NSData* _turnID;
	NSData* _siriDeviceID;
	NSString* _eventGeneratedTimestampRefId;
	long long _eventGeneratedRelativeToBootTimeTimestampNs;
	SCD_Struct_SI1 _has;
	BOOL _hasTurnID;
	BOOL _hasSiriDeviceID;
	BOOL _hasEventGeneratedTimestampRefId;

}

@property (nonatomic,copy) NSData * turnID;                                                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) BOOL hasTurnID;                                                     //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (nonatomic,copy) NSData * siriDeviceID;                                                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceID;                                               //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * eventGeneratedTimestampRefId;                              //@synthesize eventGeneratedTimestampRefId=_eventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) BOOL hasEventGeneratedTimestampRefId;                               //@synthesize hasEventGeneratedTimestampRefId=_hasEventGeneratedTimestampRefId - In the implementation block
@property (assign,nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;              //@synthesize eventGeneratedRelativeToBootTimeTimestampNs=_eventGeneratedRelativeToBootTimeTimestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasEventGeneratedRelativeToBootTimeTimestampNs; 
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
-(void)setEventGeneratedTimestampRefId:(NSString *)arg1 ;
-(void)setEventGeneratedRelativeToBootTimeTimestampNs:(long long)arg1 ;
-(NSData *)siriDeviceID;
-(NSString *)eventGeneratedTimestampRefId;
-(long long)eventGeneratedRelativeToBootTimeTimestampNs;
-(BOOL)hasSiriDeviceID;
-(BOOL)hasEventGeneratedTimestampRefId;
-(BOOL)hasEventGeneratedRelativeToBootTimeTimestampNs;
-(void)setHasEventGeneratedRelativeToBootTimeTimestampNs:(BOOL)arg1 ;
-(void)setHasTurnID:(BOOL)arg1 ;
-(void)setHasSiriDeviceID:(BOOL)arg1 ;
-(void)setHasEventGeneratedTimestampRefId:(BOOL)arg1 ;
@end

