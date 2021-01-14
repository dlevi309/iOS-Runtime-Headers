/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

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
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg1 toData:(id)arg2 ;
-(BSSettings *)changes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dataByApplyingToData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(void)applyToMutableData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSIMOneInfoDiff:(id)arg1 SIMTwoInfoDiff:(id)arg2 changes:(id)arg3 ;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMOneInfoDiff;
-(STTelephonyStatusDomainSIMInfoDiff *)SIMTwoInfoDiff;
@end

