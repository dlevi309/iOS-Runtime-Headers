/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSArray, NSString;

@interface CEMSystemDashboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadWhiteListEnabled;
	NSArray* _payloadWhiteList;

}

@property (nonatomic,copy) NSNumber * payloadWhiteListEnabled;              //@synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled - In the implementation block
@property (nonatomic,copy) NSArray * payloadWhiteList;                      //@synthesize payloadWhiteList=_payloadWhiteList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)payloadWhiteListEnabled;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadWhiteListEnabled:(NSNumber *)arg1 ;
-(void)setPayloadWhiteList:(NSArray *)arg1 ;
-(NSArray *)payloadWhiteList;
@end

