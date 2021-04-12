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

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _entryStandardDeviation;
	int _exitStandardDeviation;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEntryStandardDeviation; 
@property (assign,nonatomic) int entryStandardDeviation;                  //@synthesize entryStandardDeviation=_entryStandardDeviation - In the implementation block
@property (assign,nonatomic) BOOL hasExitStandardDeviation; 
@property (assign,nonatomic) int exitStandardDeviation;                   //@synthesize exitStandardDeviation=_exitStandardDeviation - In the implementation block
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
-(void)setEntryStandardDeviation:(int)arg1 ;
-(void)setExitStandardDeviation:(int)arg1 ;
-(void)setHasEntryStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasEntryStandardDeviation;
-(void)setHasExitStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasExitStandardDeviation;
-(int)entryStandardDeviation;
-(int)exitStandardDeviation;
@end

