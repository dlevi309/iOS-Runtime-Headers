/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMSystemTVRemoteDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadAllowedRemotes;
	NSArray* _payloadAllowedTVs;

}

@property (nonatomic,copy) NSArray * payloadAllowedRemotes;              //@synthesize payloadAllowedRemotes=_payloadAllowedRemotes - In the implementation block
@property (nonatomic,copy) NSArray * payloadAllowedTVs;                  //@synthesize payloadAllowedTVs=_payloadAllowedTVs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowedRemotes:(id)arg2 withAllowedTVs:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowedRemotes:(NSArray *)arg1 ;
-(void)setPayloadAllowedTVs:(NSArray *)arg1 ;
-(NSArray *)payloadAllowedRemotes;
-(NSArray *)payloadAllowedTVs;
@end

