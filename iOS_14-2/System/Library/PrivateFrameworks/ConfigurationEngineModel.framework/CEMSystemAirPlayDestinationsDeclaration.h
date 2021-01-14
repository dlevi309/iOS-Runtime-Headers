/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMSystemAirPlayDestinationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadWhitelist;
	NSArray* _payloadPasswords;

}

@property (nonatomic,copy) NSArray * payloadWhitelist;              //@synthesize payloadWhitelist=_payloadWhitelist - In the implementation block
@property (nonatomic,copy) NSArray * payloadPasswords;              //@synthesize payloadPasswords=_payloadPasswords - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withWhitelist:(id)arg2 withPasswords:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadWhitelist:(NSArray *)arg1 ;
-(void)setPayloadPasswords:(NSArray *)arg1 ;
-(NSArray *)payloadWhitelist;
-(NSArray *)payloadPasswords;
@end

