/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineTransitionMotionType : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned _coreRoutineTransitionMotionTypeAutomotive;
	unsigned _coreRoutineTransitionMotionTypeCycling;
	unsigned _coreRoutineTransitionMotionTypeRunning;
	unsigned _coreRoutineTransitionMotionTypeStationary;
	unsigned _coreRoutineTransitionMotionTypeUnknown;
	unsigned _coreRoutineTransitionMotionTypeWalking;
	SCD_Struct_AW11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeStationary; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeStationary;              //@synthesize coreRoutineTransitionMotionTypeStationary=_coreRoutineTransitionMotionTypeStationary - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeWalking; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeWalking;                 //@synthesize coreRoutineTransitionMotionTypeWalking=_coreRoutineTransitionMotionTypeWalking - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeRunning; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeRunning;                 //@synthesize coreRoutineTransitionMotionTypeRunning=_coreRoutineTransitionMotionTypeRunning - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeAutomotive; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeAutomotive;              //@synthesize coreRoutineTransitionMotionTypeAutomotive=_coreRoutineTransitionMotionTypeAutomotive - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeCycling; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeCycling;                 //@synthesize coreRoutineTransitionMotionTypeCycling=_coreRoutineTransitionMotionTypeCycling - In the implementation block
@property (assign,nonatomic) BOOL hasCoreRoutineTransitionMotionTypeUnknown; 
@property (assign,nonatomic) unsigned coreRoutineTransitionMotionTypeUnknown;                 //@synthesize coreRoutineTransitionMotionTypeUnknown=_coreRoutineTransitionMotionTypeUnknown - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeAutomotive;
-(void)setCoreRoutineTransitionMotionTypeAutomotive:(unsigned)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeRunning;
-(void)setCoreRoutineTransitionMotionTypeRunning:(unsigned)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeWalking;
-(void)setCoreRoutineTransitionMotionTypeWalking:(unsigned)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeCycling;
-(void)setCoreRoutineTransitionMotionTypeCycling:(unsigned)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeStationary;
-(void)setCoreRoutineTransitionMotionTypeStationary:(unsigned)arg1 ;
-(unsigned)coreRoutineTransitionMotionTypeUnknown;
-(void)setCoreRoutineTransitionMotionTypeUnknown:(unsigned)arg1 ;
-(void)setHasCoreRoutineTransitionMotionTypeStationary:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeStationary;
-(void)setHasCoreRoutineTransitionMotionTypeWalking:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeWalking;
-(void)setHasCoreRoutineTransitionMotionTypeRunning:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeRunning;
-(void)setHasCoreRoutineTransitionMotionTypeAutomotive:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeAutomotive;
-(void)setHasCoreRoutineTransitionMotionTypeCycling:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeCycling;
-(void)setHasCoreRoutineTransitionMotionTypeUnknown:(BOOL)arg1 ;
-(BOOL)hasCoreRoutineTransitionMotionTypeUnknown;
@end

