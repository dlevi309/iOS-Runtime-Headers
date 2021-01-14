/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMManagementRetryActivatedConfigurationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadActivationIdentifier;
	NSString* _payloadConfigurationIdentifier;

}

@property (nonatomic,copy) NSString * payloadActivationIdentifier;                 //@synthesize payloadActivationIdentifier=_payloadActivationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadConfigurationIdentifier;              //@synthesize payloadConfigurationIdentifier=_payloadConfigurationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withActivationIdentifier:(id)arg2 withConfigurationIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadActivationIdentifier:(NSString *)arg1 ;
-(void)setPayloadConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)payloadActivationIdentifier;
-(NSString *)payloadConfigurationIdentifier;
@end

