/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(long long)metricId;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEntryStandardDeviation:(int)arg1 ;
-(void)setExitStandardDeviation:(int)arg1 ;
-(void)setHasEntryStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasEntryStandardDeviation;
-(void)setHasExitStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasExitStandardDeviation;
-(int)entryStandardDeviation;
-(int)exitStandardDeviation;
@end

