/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadHostName;
	NSString* _payloadAccountDescription;
	NSArray* _payloadConfiguredAccounts;
	NSString* _payloadCredentials;

}

@property (nonatomic,copy) NSString * payloadHostName;                        //@synthesize payloadHostName=_payloadHostName - In the implementation block
@property (nonatomic,copy) NSString * payloadAccountDescription;              //@synthesize payloadAccountDescription=_payloadAccountDescription - In the implementation block
@property (nonatomic,copy) NSArray * payloadConfiguredAccounts;               //@synthesize payloadConfiguredAccounts=_payloadConfiguredAccounts - In the implementation block
@property (nonatomic,copy) NSString * payloadCredentials;                     //@synthesize payloadCredentials=_payloadCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withHostName:(id)arg2 withAccountDescription:(id)arg3 withConfiguredAccounts:(id)arg4 withCredentials:(id)arg5 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withHostName:(id)arg2 withConfiguredAccounts:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAccountDescription:(NSString *)arg1 ;
-(NSString *)payloadAccountDescription;
-(NSString *)payloadCredentials;
-(void)setPayloadHostName:(NSString *)arg1 ;
-(void)setPayloadConfiguredAccounts:(NSArray *)arg1 ;
-(void)setPayloadCredentials:(NSString *)arg1 ;
-(NSString *)payloadHostName;
-(NSArray *)payloadConfiguredAccounts;
@end

