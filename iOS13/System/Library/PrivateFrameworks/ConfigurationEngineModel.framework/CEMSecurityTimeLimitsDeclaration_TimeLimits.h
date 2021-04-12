/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityTimeLimitsDeclaration_Allowance;

@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase {

	CEMSecurityTimeLimitsDeclaration_Allowance* _payloadWeekdayAllowance;
	CEMSecurityTimeLimitsDeclaration_Allowance* _payloadWeekdayCurfew;
	CEMSecurityTimeLimitsDeclaration_Allowance* _payloadWeekendAllowance;
	CEMSecurityTimeLimitsDeclaration_Allowance* _payloadWeekendCurfew;

}

@property (nonatomic,copy) CEMSecurityTimeLimitsDeclaration_Allowance * payloadWeekdayAllowance;              //@synthesize payloadWeekdayAllowance=_payloadWeekdayAllowance - In the implementation block
@property (nonatomic,copy) CEMSecurityTimeLimitsDeclaration_Allowance * payloadWeekdayCurfew;                 //@synthesize payloadWeekdayCurfew=_payloadWeekdayCurfew - In the implementation block
@property (nonatomic,copy) CEMSecurityTimeLimitsDeclaration_Allowance * payloadWeekendAllowance;              //@synthesize payloadWeekendAllowance=_payloadWeekendAllowance - In the implementation block
@property (nonatomic,copy) CEMSecurityTimeLimitsDeclaration_Allowance * payloadWeekendCurfew;                 //@synthesize payloadWeekendCurfew=_payloadWeekendCurfew - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithWeekdayAllowance:(id)arg1 withWeekdayCurfew:(id)arg2 withWeekendAllowance:(id)arg3 withWeekendCurfew:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadWeekdayAllowance:(CEMSecurityTimeLimitsDeclaration_Allowance *)arg1 ;
-(void)setPayloadWeekdayCurfew:(CEMSecurityTimeLimitsDeclaration_Allowance *)arg1 ;
-(void)setPayloadWeekendAllowance:(CEMSecurityTimeLimitsDeclaration_Allowance *)arg1 ;
-(void)setPayloadWeekendCurfew:(CEMSecurityTimeLimitsDeclaration_Allowance *)arg1 ;
-(CEMSecurityTimeLimitsDeclaration_Allowance *)payloadWeekdayAllowance;
-(CEMSecurityTimeLimitsDeclaration_Allowance *)payloadWeekdayCurfew;
-(CEMSecurityTimeLimitsDeclaration_Allowance *)payloadWeekendAllowance;
-(CEMSecurityTimeLimitsDeclaration_Allowance *)payloadWeekendCurfew;
@end
