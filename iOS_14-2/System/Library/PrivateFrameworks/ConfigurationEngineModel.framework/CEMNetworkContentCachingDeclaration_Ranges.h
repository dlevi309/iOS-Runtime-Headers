/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase {

	NSString* _payloadType;
	NSString* _payloadFirst;
	NSString* _payloadLast;

}

@property (nonatomic,copy) NSString * payloadType;               //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,copy) NSString * payloadFirst;              //@synthesize payloadFirst=_payloadFirst - In the implementation block
@property (nonatomic,copy) NSString * payloadLast;               //@synthesize payloadLast=_payloadLast - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3 ;
+(id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2 ;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadFirst:(NSString *)arg1 ;
-(void)setPayloadLast:(NSString *)arg1 ;
-(NSString *)payloadFirst;
-(NSString *)payloadLast;
@end

