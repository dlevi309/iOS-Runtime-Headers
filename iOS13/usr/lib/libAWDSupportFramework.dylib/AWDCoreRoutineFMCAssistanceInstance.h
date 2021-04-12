/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
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

