/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSArray;

@interface CEMPredicateCompositeBudget_TimeBudgetItem : CEMPayloadBase {

	NSNumber* _payloadSeconds;
	NSArray* _payloadDays;

}

@property (nonatomic,copy) NSNumber * payloadSeconds;              //@synthesize payloadSeconds=_payloadSeconds - In the implementation block
@property (nonatomic,copy) NSArray * payloadDays;                  //@synthesize payloadDays=_payloadDays - In the implementation block
+(id)buildWithSeconds:(id)arg1 withDays:(id)arg2 ;
+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSeconds:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSeconds:(NSNumber *)arg1 ;
-(void)setPayloadDays:(NSArray *)arg1 ;
-(NSNumber *)payloadSeconds;
-(NSArray *)payloadDays;
@end

