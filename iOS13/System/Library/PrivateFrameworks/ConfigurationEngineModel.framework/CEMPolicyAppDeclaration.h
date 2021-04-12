/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMPolicyAppDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadMode;
	NSArray* _payloadApps;

}

@property (nonatomic,copy) NSString * payloadMode;                  //@synthesize payloadMode=_payloadMode - In the implementation block
@property (nonatomic,copy) NSArray * payloadApps;                   //@synthesize payloadApps=_payloadApps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withApps:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(void)setPayloadApps:(NSArray *)arg1 ;
-(NSString *)payloadMode;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(NSArray *)payloadApps;
@end

