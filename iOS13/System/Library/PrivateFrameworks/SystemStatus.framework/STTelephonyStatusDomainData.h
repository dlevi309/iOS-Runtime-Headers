/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STTelephonyStatusDomainSIMInfo, NSString;

@interface STTelephonyStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STTelephonyStatusDomainSIMInfo* _SIMOneInfo;
	STTelephonyStatusDomainSIMInfo* _SIMTwoInfo;
	BOOL _cellularRadioCapabilityEnabled;
	BOOL _dualSIMEnabled;
	BOOL _radioModuleDead;

}

@property (setter=IMOneInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMOneInfo;                        //@synthesize SIMOneInfo=_SIMOneInfo - In the implementation block
@property (setter=IMTwoInfo,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * SIMTwoInfo;                        //@synthesize SIMTwoInfo=_SIMTwoInfo - In the implementation block
@property (getter=isCellularRadioCapabilityEnabled,nonatomic,readonly) BOOL cellularRadioCapabilityEnabled;              //@synthesize cellularRadioCapabilityEnabled=_cellularRadioCapabilityEnabled - In the implementation block
@property (getter=isDualSIMEnabled,nonatomic,readonly) BOOL dualSIMEnabled;                                              //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (getter=isRadioModuleDead,nonatomic,readonly) BOOL radioModuleDead;                                            //@synthesize radioModuleDead=_radioModuleDead - In the implementation block
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * primarySIMInfo; 
@property (nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfo * secondarySIMInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isDualSIMEnabled;
-(BOOL)isRadioModuleDead;
-(id)diffFromData:(id)arg1 ;
-(id)dataByApplyingDiff:(id)arg1 ;
-(STTelephonyStatusDomainSIMInfo *)SIMOneInfo;
-(STTelephonyStatusDomainSIMInfo *)SIMTwoInfo;
-(BOOL)isCellularRadioCapabilityEnabled;
-(id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(BOOL)arg3 dualSIMEnabled:(BOOL)arg4 radioModuleDead:(BOOL)arg5 ;
-(id)_dataPreferredSIMInfoIfSIMPresent;
-(id)_anySIMInfoWithSIMPresent;
-(STTelephonyStatusDomainSIMInfo *)primarySIMInfo;
-(id)_otherSIMInfoIfSIMPresent:(id)arg1 ;
-(STTelephonyStatusDomainSIMInfo *)secondarySIMInfo;
@end

