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

@interface AWDCoreRoutineModelConsistencyReconsolidation : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	int _countOfReconsolidatedLOIs;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfReconsolidatedLOIs; 
@property (assign,nonatomic) int countOfReconsolidatedLOIs;                  //@synthesize countOfReconsolidatedLOIs=_countOfReconsolidatedLOIs - In the implementation block
-(BOOL)valid:(id*)arg1 ;
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
-(void)setCountOfReconsolidatedLOIs:(int)arg1 ;
-(void)setHasCountOfReconsolidatedLOIs:(BOOL)arg1 ;
-(BOOL)hasCountOfReconsolidatedLOIs;
-(int)countOfReconsolidatedLOIs;
@end

