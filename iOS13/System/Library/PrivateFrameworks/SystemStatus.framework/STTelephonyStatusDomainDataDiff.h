/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDiff.h>

@class STTelephonyStatusDomainSIMInfoDiff, BSSettings, NSString;

@interface STTelephonyStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {

	STTelephonyStatusDomainSIMInfoDiff* _SIMOneInfoDiff;
	STTelephonyStatusDomainSIMInfoDiff* _SIMTwoInfoDiff;
	BSSettings* _changes;

}

@property (setter=IMOneInfoDiff,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfoDiff * SIMOneInfoDiff;              //@synthesize SIMOneInfoDiff=_SIMOneInfoDiff - In the implementation block
@property (setter=IMTwoInfoDiff,nonatomic,copy,readonly) STTelephonyStatusDomainSIMInfoDiff * SIMTwoInfoDiff;              //@synthesize SIMTwoInfoDiff=_SIMTwoInfoDiff - In the implementation block
@property (nonatomic,copy,readonly) BSSettings * changes;                                                                  //@synthesize changes=_changes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg1 toData:(id)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSSettings *)changes;
-(void)applyToMutableData:(id)arg1 ;
-(id)initWithSIMOneInfoDiff:(id)arg1 SIMTwoInfoDiff:(id)arg2 changes:(id)arg3 ;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMOneInfoDiff;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMTwoInfoDiff;
-(id)dataByApplyingToData:(id)arg1 ;
@end

