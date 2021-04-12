/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase {

	NSString* _payloadMode;
	NSNumber* _payloadDuration;
	NSString* _payloadStartTime;
	NSString* _payloadEndTime;

}

@property (nonatomic,copy) NSString * payloadMode;                   //@synthesize payloadMode=_payloadMode - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDuration;               //@synthesize payloadDuration=_payloadDuration - In the implementation block
@property (nonatomic,copy) NSString * payloadStartTime;              //@synthesize payloadStartTime=_payloadStartTime - In the implementation block
@property (nonatomic,copy) NSString * payloadEndTime;                //@synthesize payloadEndTime=_payloadEndTime - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4 ;
+(id)buildRequiredOnlyWithMode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(NSString *)payloadMode;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDuration:(NSNumber *)arg1 ;
-(void)setPayloadStartTime:(NSString *)arg1 ;
-(void)setPayloadEndTime:(NSString *)arg1 ;
-(NSNumber *)payloadDuration;
-(NSString *)payloadStartTime;
-(NSString *)payloadEndTime;
@end

