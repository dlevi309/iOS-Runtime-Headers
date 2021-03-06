/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricExtendedTrapInfo : PBCodable <NSCopying> {

	SCD_Struct_AW21* _backplanes;
	SCD_Struct_AW21* _bus;
	SCD_Struct_AW21* _deepSleeps;
	SCD_Struct_AW21* _macEnabs;
	SCD_Struct_AW21* _macs;
	SCD_Struct_AW21* _memoryDumps;
	SCD_Struct_AW21* _pcieQueueStates;
	SCD_Struct_AW21* _phyTxErrThreshs;
	SCD_Struct_AW21* _phys;
	SCD_Struct_AW21* _psmWDs;
	SCD_Struct_AW21* _signatures;
	SCD_Struct_AW21* _stackTraces;
	SCD_Struct_AW21* _ucodeErrors;
	SCD_Struct_AW21* _wlcStates;
	unsigned _sequence;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasSequence; 
@property (assign,nonatomic) unsigned sequence;                                      //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned long long signaturesCount; 
@property (nonatomic,readonly) unsigned* signatures; 
@property (nonatomic,readonly) unsigned long long stackTracesCount; 
@property (nonatomic,readonly) unsigned* stackTraces; 
@property (nonatomic,readonly) unsigned long long ucodeErrorsCount; 
@property (nonatomic,readonly) unsigned* ucodeErrors; 
@property (nonatomic,readonly) unsigned long long memoryDumpsCount; 
@property (nonatomic,readonly) unsigned* memoryDumps; 
@property (nonatomic,readonly) unsigned long long deepSleepsCount; 
@property (nonatomic,readonly) unsigned* deepSleeps; 
@property (nonatomic,readonly) unsigned long long psmWDsCount; 
@property (nonatomic,readonly) unsigned* psmWDs; 
@property (nonatomic,readonly) unsigned long long physCount; 
@property (nonatomic,readonly) unsigned* phys; 
@property (nonatomic,readonly) unsigned long long busCount; 
@property (nonatomic,readonly) unsigned* bus; 
@property (nonatomic,readonly) unsigned long long macsCount; 
@property (nonatomic,readonly) unsigned* macs; 
@property (nonatomic,readonly) unsigned long long backplanesCount; 
@property (nonatomic,readonly) unsigned* backplanes; 
@property (nonatomic,readonly) unsigned long long pcieQueueStatesCount; 
@property (nonatomic,readonly) unsigned* pcieQueueStates; 
@property (nonatomic,readonly) unsigned long long wlcStatesCount; 
@property (nonatomic,readonly) unsigned* wlcStates; 
@property (nonatomic,readonly) unsigned long long macEnabsCount; 
@property (nonatomic,readonly) unsigned* macEnabs; 
@property (nonatomic,readonly) unsigned long long phyTxErrThreshsCount; 
@property (nonatomic,readonly) unsigned* phyTxErrThreshs; 
-(unsigned*)bus;
-(id)dictionaryRepresentation;
-(unsigned*)phys;
-(unsigned*)macs;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)sequence;
-(unsigned*)psmWDs;
-(void)addSignature:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequence:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned*)signatures;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasSequence:(BOOL)arg1 ;
-(BOOL)hasSequence;
-(unsigned long long)signaturesCount;
-(void)clearSignatures;
-(unsigned)signatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stackTracesCount;
-(void)clearStackTraces;
-(unsigned)stackTracesAtIndex:(unsigned long long)arg1 ;
-(void)addStackTraces:(unsigned)arg1 ;
-(unsigned long long)ucodeErrorsCount;
-(void)clearUcodeErrors;
-(unsigned)ucodeErrorsAtIndex:(unsigned long long)arg1 ;
-(void)addUcodeErrors:(unsigned)arg1 ;
-(unsigned long long)memoryDumpsCount;
-(void)clearMemoryDumps;
-(unsigned)memoryDumpAtIndex:(unsigned long long)arg1 ;
-(void)addMemoryDump:(unsigned)arg1 ;
-(unsigned long long)deepSleepsCount;
-(void)clearDeepSleeps;
-(unsigned)deepSleepAtIndex:(unsigned long long)arg1 ;
-(void)addDeepSleep:(unsigned)arg1 ;
-(unsigned long long)psmWDsCount;
-(void)clearPsmWDs;
-(unsigned)psmWDAtIndex:(unsigned long long)arg1 ;
-(void)addPsmWD:(unsigned)arg1 ;
-(unsigned long long)physCount;
-(void)clearPhys;
-(unsigned)phyAtIndex:(unsigned long long)arg1 ;
-(void)addPhy:(unsigned)arg1 ;
-(unsigned long long)busCount;
-(void)clearBus;
-(unsigned)busAtIndex:(unsigned long long)arg1 ;
-(void)addBus:(unsigned)arg1 ;
-(unsigned long long)macsCount;
-(void)clearMacs;
-(unsigned)macAtIndex:(unsigned long long)arg1 ;
-(void)addMac:(unsigned)arg1 ;
-(unsigned long long)backplanesCount;
-(void)clearBackplanes;
-(unsigned)backplaneAtIndex:(unsigned long long)arg1 ;
-(void)addBackplane:(unsigned)arg1 ;
-(unsigned long long)pcieQueueStatesCount;
-(void)clearPcieQueueStates;
-(unsigned)pcieQueueStateAtIndex:(unsigned long long)arg1 ;
-(void)addPcieQueueState:(unsigned)arg1 ;
-(unsigned long long)wlcStatesCount;
-(void)clearWlcStates;
-(unsigned)wlcStateAtIndex:(unsigned long long)arg1 ;
-(void)addWlcState:(unsigned)arg1 ;
-(unsigned long long)macEnabsCount;
-(void)clearMacEnabs;
-(unsigned)macEnabAtIndex:(unsigned long long)arg1 ;
-(void)addMacEnab:(unsigned)arg1 ;
-(unsigned long long)phyTxErrThreshsCount;
-(void)clearPhyTxErrThreshs;
-(unsigned)phyTxErrThreshAtIndex:(unsigned long long)arg1 ;
-(void)addPhyTxErrThresh:(unsigned)arg1 ;
-(void)setSignatures:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)stackTraces;
-(void)setStackTraces:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)ucodeErrors;
-(void)setUcodeErrors:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)memoryDumps;
-(void)setMemoryDumps:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)deepSleeps;
-(void)setDeepSleeps:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPsmWDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPhys:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setBus:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setMacs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)backplanes;
-(void)setBackplanes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)pcieQueueStates;
-(void)setPcieQueueStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)wlcStates;
-(void)setWlcStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)macEnabs;
-(void)setMacEnabs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)phyTxErrThreshs;
-(void)setPhyTxErrThreshs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

