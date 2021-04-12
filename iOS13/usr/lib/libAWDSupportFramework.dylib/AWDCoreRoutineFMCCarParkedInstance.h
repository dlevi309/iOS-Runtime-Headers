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

@interface AWDCoreRoutineFMCCarParkedInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _horizontalAccuracy;
	int _locationType;
	NSString* _parkingId;
	int _qualityIndicator;
	int _triggerTypes;
	BOOL _userAssistanceRequired;
	SCD_Struct_AW11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasParkingId; 
@property (nonatomic,retain) NSString * parkingId;                        //@synthesize parkingId=_parkingId - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerTypes; 
@property (assign,nonatomic) int triggerTypes;                            //@synthesize triggerTypes=_triggerTypes - In the implementation block
@property (assign,nonatomic) BOOL hasUserAssistanceRequired; 
@property (assign,nonatomic) BOOL userAssistanceRequired;                 //@synthesize userAssistanceRequired=_userAssistanceRequired - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) int horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasQualityIndicator; 
@property (assign,nonatomic) int qualityIndicator;                        //@synthesize qualityIndicator=_qualityIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                            //@synthesize locationType=_locationType - In the implementation block
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
-(int)horizontalAccuracy;
-(void)setHorizontalAccuracy:(int)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)locationType;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(void)setQualityIndicator:(int)arg1 ;
-(int)qualityIndicator;
-(int)triggerTypes;
-(BOOL)userAssistanceRequired;
-(void)setTriggerTypes:(int)arg1 ;
-(void)setUserAssistanceRequired:(BOOL)arg1 ;
-(void)setHasTriggerTypes:(BOOL)arg1 ;
-(BOOL)hasTriggerTypes;
-(void)setParkingId:(NSString *)arg1 ;
-(BOOL)hasParkingId;
-(NSString *)parkingId;
-(void)setHasUserAssistanceRequired:(BOOL)arg1 ;
-(BOOL)hasUserAssistanceRequired;
-(void)setHasQualityIndicator:(BOOL)arg1 ;
-(BOOL)hasQualityIndicator;
@end

