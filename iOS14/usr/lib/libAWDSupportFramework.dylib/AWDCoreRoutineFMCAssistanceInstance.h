/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineFMCAssistanceInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _assistanceType;
	int _assistanceValue;
	NSString* _parkingId;
	int _uiPlacement;
	SCD_Struct_AW1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                      //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasAssistanceType; 
@property (assign,nonatomic) int assistanceType;                        //@synthesize assistanceType=_assistanceType - In the implementation block
@property (assign,nonatomic) BOOL hasAssistanceValue; 
@property (assign,nonatomic) int assistanceValue;                       //@synthesize assistanceValue=_assistanceValue - In the implementation block
@property (assign,nonatomic) BOOL hasUiPlacement; 
@property (assign,nonatomic) int uiPlacement;                           //@synthesize uiPlacement=_uiPlacement - In the implementation block
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(int)uiPlacement;
-(int)assistanceType;
-(int)assistanceValue;
-(void)setUiPlacement:(int)arg1 ;
-(void)setAssistanceType:(int)arg1 ;
-(void)setAssistanceValue:(int)arg1 ;
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(void)setHasAssistanceType:(BOOL)arg1 ;
-(BOOL)hasAssistanceType;
-(void)setHasAssistanceValue:(BOOL)arg1 ;
-(BOOL)hasAssistanceValue;
-(void)setHasUiPlacement:(BOOL)arg1 ;
-(BOOL)hasUiPlacement;
-(NSString *)parkingId;
@end

