/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STTelephonyStatusDomainSIMInfo : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	BOOL _SIMPresent;
	NSString* _label;
	NSString* _shortLabel;
	unsigned long long _signalStrengthBars;
	unsigned long long _maxSignalStrengthBars;
	unsigned long long _serviceState;
	unsigned long long _cellularServiceState;
	NSString* _serviceDescription;
	NSString* _secondaryServiceDescription;
	unsigned long long _dataNetworkType;
	BOOL _providingDataConnection;
	BOOL _preferredForDataConnections;
	BOOL _registeredWithoutCellular;
	BOOL _callForwardingEnabled;

}

@property (setter=IMPresent,getter=isSIMPresent,nonatomic,readonly) BOOL SIMPresent;                               //@synthesize SIMPresent=_SIMPresent - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortLabel;                                                         //@synthesize shortLabel=_shortLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long signalStrengthBars;                                              //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSignalStrengthBars;                                           //@synthesize maxSignalStrengthBars=_maxSignalStrengthBars - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceState;                                                    //@synthesize serviceState=_serviceState - In the implementation block
@property (nonatomic,readonly) unsigned long long cellularServiceState;                                            //@synthesize cellularServiceState=_cellularServiceState - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceDescription;                                                 //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryServiceDescription;                                        //@synthesize secondaryServiceDescription=_secondaryServiceDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long dataNetworkType;                                                 //@synthesize dataNetworkType=_dataNetworkType - In the implementation block
@property (getter=isProvidingDataConnection,nonatomic,readonly) BOOL providingDataConnection;                      //@synthesize providingDataConnection=_providingDataConnection - In the implementation block
@property (getter=isPreferredForDataConnections,nonatomic,readonly) BOOL preferredForDataConnections;              //@synthesize preferredForDataConnections=_preferredForDataConnections - In the implementation block
@property (getter=isRegisteredWithoutCellular,nonatomic,readonly) BOOL registeredWithoutCellular;                  //@synthesize registeredWithoutCellular=_registeredWithoutCellular - In the implementation block
@property (getter=isCallForwardingEnabled,nonatomic,readonly) BOOL callForwardingEnabled;                          //@synthesize callForwardingEnabled=_callForwardingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)initWithSIMInfo:(id)arg1 ;
-(id)init;
-(NSString *)serviceDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)signalStrengthBars;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSIMPresent:(BOOL)arg1 label:(id)arg2 shortLabel:(id)arg3 signalStrengthBars:(unsigned long long)arg4 maxSignalStrengthBars:(unsigned long long)arg5 serviceState:(unsigned long long)arg6 cellularServiceState:(unsigned long long)arg7 serviceDescription:(id)arg8 secondaryServiceDescription:(id)arg9 dataNetworkType:(unsigned long long)arg10 providingDataConnection:(BOOL)arg11 preferredForDataConnections:(BOOL)arg12 registeredWithoutCellular:(BOOL)arg13 callForwardingEnabled:(BOOL)arg14 ;
-(BOOL)isCallForwardingEnabled;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maxSignalStrengthBars;
-(BOOL)isPreferredForDataConnections;
-(NSString *)description;
-(BOOL)isRegisteredWithoutCellular;
-(BOOL)isProvidingDataConnection;
-(NSString *)shortLabel;
-(unsigned long long)cellularServiceState;
-(BOOL)isSIMPresent;
-(id)diffFromData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dataNetworkType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)secondaryServiceDescription;
-(id)succinctDescriptionBuilder;
-(id)dataByApplyingDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)serviceState;
@end

