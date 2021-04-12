/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase {

	NSString* _payloadServiceName;
	NSString* _payloadAction;

}

@property (nonatomic,copy) NSString * payloadServiceName;              //@synthesize payloadServiceName=_payloadServiceName - In the implementation block
@property (nonatomic,copy) NSString * payloadAction;                   //@synthesize payloadAction=_payloadAction - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithServiceName:(id)arg1 withAction:(id)arg2 ;
+(id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAction:(NSString *)arg1 ;
-(NSString *)payloadAction;
-(void)setPayloadServiceName:(NSString *)arg1 ;
-(NSString *)payloadServiceName;
@end

