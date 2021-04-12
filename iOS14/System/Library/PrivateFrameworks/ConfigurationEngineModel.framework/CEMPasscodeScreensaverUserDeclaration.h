/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMPasscodeScreensaverUserDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadModulePath;
	NSNumber* _payloadIdleTime;

}

@property (nonatomic,copy) NSString * payloadModulePath;              //@synthesize payloadModulePath=_payloadModulePath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadIdleTime;                //@synthesize payloadIdleTime=_payloadIdleTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withModulePath:(id)arg2 withIdleTime:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadModulePath:(NSString *)arg1 ;
-(void)setPayloadIdleTime:(NSNumber *)arg1 ;
-(NSString *)payloadModulePath;
-(NSNumber *)payloadIdleTime;
@end

