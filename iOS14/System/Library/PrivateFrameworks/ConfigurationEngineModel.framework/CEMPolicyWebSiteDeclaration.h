/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMPolicyWebSiteDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadMode;
	NSArray* _payloadHostnames;

}

@property (nonatomic,copy) NSString * payloadMode;                  //@synthesize payloadMode=_payloadMode - In the implementation block
@property (nonatomic,copy) NSArray * payloadHostnames;              //@synthesize payloadHostnames=_payloadHostnames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withHostnames:(id)arg3 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(void)setPayloadHostnames:(NSArray *)arg1 ;
-(NSString *)payloadMode;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSArray *)payloadHostnames;
@end

