/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMSystemTimeServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadTimeServer;
	NSString* _payloadTimeZone;

}

@property (nonatomic,copy) NSString * payloadTimeServer;              //@synthesize payloadTimeServer=_payloadTimeServer - In the implementation block
@property (nonatomic,copy) NSString * payloadTimeZone;                //@synthesize payloadTimeZone=_payloadTimeZone - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withTimeServer:(id)arg2 withTimeZone:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTimeServer:(NSString *)arg1 ;
-(void)setPayloadTimeZone:(NSString *)arg1 ;
-(NSString *)payloadTimeServer;
-(NSString *)payloadTimeZone;
@end

