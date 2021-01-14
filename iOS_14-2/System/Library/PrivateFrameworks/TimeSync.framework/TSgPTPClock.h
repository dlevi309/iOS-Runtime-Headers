/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSKernelClock.h>

@class NSArray;

@interface TSgPTPClock : TSKernelClock {

	NSArray* _gptpPath;
	unsigned long long _grandmasterIdentity;

}

@property (nonatomic,copy) NSArray * gptpPath;                                    //@synthesize gptpPath=_gptpPath - In the implementation block
@property (assign,nonatomic) unsigned long long grandmasterIdentity;              //@synthesize grandmasterIdentity=_grandmasterIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ports; 
@property (nonatomic,readonly) unsigned long long clockIdentity; 
@property (nonatomic,readonly) unsigned char clockPriority1; 
@property (nonatomic,readonly) unsigned char clockPriority2; 
@property (nonatomic,readonly) unsigned char clockClass; 
@property (nonatomic,readonly) unsigned char clockAccuracy; 
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg1 ;
+(id)availablegPTPClockIdentifiers;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(id)_gptpPath;
-(BOOL)convertFrom32BitASTime:(unsigned*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned char)clockPriority2;
-(void)setGrandmasterIdentity:(unsigned long long)arg1 ;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addReverseSyncOnInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 syncInterval:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(unsigned char)clockPriority1;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(void)_handleInterestNotification:(unsigned)arg1 withArgument:(void*)arg2 ;
-(BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(id)portWithPortNumber:(unsigned short)arg1 ;
-(unsigned long long)grandmasterIdentity;
-(id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1 ;
-(BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 withFlags:(unsigned*)arg2 ;
-(SCD_Struct_TS0)convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(unsigned long long)clockIdentity;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 portNumber:(unsigned short*)arg6 withError:(id*)arg7 ;
-(id)clockName;
-(NSArray *)ports;
-(BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)removeReverseSyncFromInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 error:(id*)arg3 ;
-(unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(SCD_Struct_TS0)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(NSArray *)gptpPath;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(unsigned char)clockAccuracy;
-(BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(void)setGptpPath:(NSArray *)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3 ;
-(void)_handleNotification:(unsigned)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 allocatedPortNumber:(unsigned short*)arg2 error:(id*)arg3 ;
-(unsigned long long)machAbsoluteFromgPTPTime:(id)arg1 ;
-(BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(unsigned long long)_grandmasterIdentity;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4 ;
-(BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char*)arg2 error:(id*)arg3 ;
-(unsigned char)clockClass;
-(void)dealloc;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 ;
@end

