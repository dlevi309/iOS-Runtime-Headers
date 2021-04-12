/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerApMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _apAwakeDuration;
	unsigned _cpuPowerMicroWatt;
	NSMutableArray* _datas;
	unsigned _dramPowerMicroWatt;
	unsigned _gpuPowerMicroWatt;
	unsigned _socPowerMicroWatt;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCpuPowerMicroWatt; 
@property (assign,nonatomic) unsigned cpuPowerMicroWatt;                //@synthesize cpuPowerMicroWatt=_cpuPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasSocPowerMicroWatt; 
@property (assign,nonatomic) unsigned socPowerMicroWatt;                //@synthesize socPowerMicroWatt=_socPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasGpuPowerMicroWatt; 
@property (assign,nonatomic) unsigned gpuPowerMicroWatt;                //@synthesize gpuPowerMicroWatt=_gpuPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasDramPowerMicroWatt; 
@property (assign,nonatomic) unsigned dramPowerMicroWatt;               //@synthesize dramPowerMicroWatt=_dramPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasApAwakeDuration; 
@property (assign,nonatomic) unsigned apAwakeDuration;                  //@synthesize apAwakeDuration=_apAwakeDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * datas;                    //@synthesize datas=_datas - In the implementation block
+(Class)dataType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(void)addData:(id)arg1 ;
-(NSMutableArray *)datas;
-(void)setDatas:(NSMutableArray *)arg1 ;
-(void)setSocPowerMicroWatt:(unsigned)arg1 ;
-(void)setCpuPowerMicroWatt:(unsigned)arg1 ;
-(void)setGpuPowerMicroWatt:(unsigned)arg1 ;
-(void)setDramPowerMicroWatt:(unsigned)arg1 ;
-(void)setApAwakeDuration:(unsigned)arg1 ;
-(void)setHasCpuPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasCpuPowerMicroWatt;
-(void)setHasSocPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasSocPowerMicroWatt;
-(void)setHasGpuPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasGpuPowerMicroWatt;
-(void)setHasDramPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasDramPowerMicroWatt;
-(void)setHasApAwakeDuration:(BOOL)arg1 ;
-(BOOL)hasApAwakeDuration;
-(unsigned)cpuPowerMicroWatt;
-(unsigned)socPowerMicroWatt;
-(unsigned)gpuPowerMicroWatt;
-(unsigned)dramPowerMicroWatt;
-(unsigned)apAwakeDuration;
@end

