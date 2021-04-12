/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STTelephonyStatusDomainSIMInfo.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,getter=isSIMPresent,nonatomic) BOOL SIMPresent; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * shortLabel; 
@property (assign,nonatomic) unsigned long long signalStrengthBars; 
@property (assign,nonatomic) unsigned long long maxSignalStrengthBars; 
@property (assign,nonatomic) unsigned long long serviceState; 
@property (assign,nonatomic) unsigned long long cellularServiceState; 
@property (nonatomic,copy) NSString * serviceDescription; 
@property (nonatomic,copy) NSString * secondaryServiceDescription; 
@property (assign,nonatomic) unsigned long long dataNetworkType; 
@property (assign,getter=isProvidingDataConnection,nonatomic) BOOL providingDataConnection; 
@property (assign,getter=isPreferredForDataConnections,nonatomic) BOOL preferredForDataConnections; 
@property (assign,getter=isRegisteredWithoutCellular,nonatomic) BOOL registeredWithoutCellular; 
@property (assign,getter=isCallForwardingEnabled,nonatomic) BOOL callForwardingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(void)setServiceDescription:(NSString *)arg1 ;
-(void)setServiceState:(unsigned long long)arg1 ;
-(void)setSignalStrengthBars:(unsigned long long)arg1 ;
-(void)setPreferredForDataConnections:(BOOL)arg1 ;
-(void)setProvidingDataConnection:(BOOL)arg1 ;
-(void)setRegisteredWithoutCellular:(BOOL)arg1 ;
-(void)setMaxSignalStrengthBars:(unsigned long long)arg1 ;
-(void)setSIMPresent:(BOOL)arg1 ;
-(void)setShortLabel:(NSString *)arg1 ;
-(void)setCellularServiceState:(unsigned long long)arg1 ;
-(void)setSecondaryServiceDescription:(NSString *)arg1 ;
-(void)setDataNetworkType:(unsigned long long)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
@end

