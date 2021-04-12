/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
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

