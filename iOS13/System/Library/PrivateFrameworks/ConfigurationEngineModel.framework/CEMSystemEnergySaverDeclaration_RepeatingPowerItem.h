/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase {

	NSString* _payloadEventtype;
	NSNumber* _payloadWeekdays;
	NSNumber* _payloadTime;

}

@property (nonatomic,copy) NSString * payloadEventtype;              //@synthesize payloadEventtype=_payloadEventtype - In the implementation block
@property (nonatomic,copy) NSNumber * payloadWeekdays;               //@synthesize payloadWeekdays=_payloadWeekdays - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTime;                   //@synthesize payloadTime=_payloadTime - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEventtype:(id)arg1 withWeekdays:(id)arg2 withTime:(id)arg3 ;
+(id)buildRequiredOnlyWithEventtype:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEventtype:(NSString *)arg1 ;
-(void)setPayloadWeekdays:(NSNumber *)arg1 ;
-(void)setPayloadTime:(NSNumber *)arg1 ;
-(NSString *)payloadEventtype;
-(NSNumber *)payloadWeekdays;
-(NSNumber *)payloadTime;
@end

