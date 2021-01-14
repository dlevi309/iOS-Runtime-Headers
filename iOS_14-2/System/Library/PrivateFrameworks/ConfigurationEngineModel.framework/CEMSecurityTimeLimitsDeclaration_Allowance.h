/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase {

	NSNumber* _payloadEnabled;
	NSNumber* _payloadRangeType;
	NSString* _payloadStart;
	NSString* _payloadEnd;
	NSNumber* _payloadSecondsPerDay;

}

@property (nonatomic,copy) NSNumber * payloadEnabled;                    //@synthesize payloadEnabled=_payloadEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRangeType;                  //@synthesize payloadRangeType=_payloadRangeType - In the implementation block
@property (nonatomic,copy) NSString * payloadStart;                      //@synthesize payloadStart=_payloadStart - In the implementation block
@property (nonatomic,copy) NSString * payloadEnd;                        //@synthesize payloadEnd=_payloadEnd - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSecondsPerDay;              //@synthesize payloadSecondsPerDay=_payloadSecondsPerDay - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5 ;
+(id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEnabled:(NSNumber *)arg1 ;
-(void)setPayloadRangeType:(NSNumber *)arg1 ;
-(void)setPayloadStart:(NSString *)arg1 ;
-(void)setPayloadEnd:(NSString *)arg1 ;
-(void)setPayloadSecondsPerDay:(NSNumber *)arg1 ;
-(NSNumber *)payloadEnabled;
-(NSNumber *)payloadRangeType;
-(NSString *)payloadStart;
-(NSString *)payloadEnd;
-(NSNumber *)payloadSecondsPerDay;
@end

