/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadSanName;
	NSArray* _payloadSanConfigURLs;
	NSArray* _payloadFsnameservers;
	NSString* _payloadSanAuthMethod;
	NSString* _payloadSharedSecret;

}

@property (nonatomic,copy) NSString * payloadSanName;                    //@synthesize payloadSanName=_payloadSanName - In the implementation block
@property (nonatomic,copy) NSArray * payloadSanConfigURLs;               //@synthesize payloadSanConfigURLs=_payloadSanConfigURLs - In the implementation block
@property (nonatomic,copy) NSArray * payloadFsnameservers;               //@synthesize payloadFsnameservers=_payloadFsnameservers - In the implementation block
@property (nonatomic,copy) NSString * payloadSanAuthMethod;              //@synthesize payloadSanAuthMethod=_payloadSanAuthMethod - In the implementation block
@property (nonatomic,copy) NSString * payloadSharedSecret;               //@synthesize payloadSharedSecret=_payloadSharedSecret - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSanAuthMethod:(id)arg5 withSharedSecret:(id)arg6 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSharedSecret:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSharedSecret:(NSString *)arg1 ;
-(NSString *)payloadSharedSecret;
-(void)setPayloadSanName:(NSString *)arg1 ;
-(void)setPayloadSanConfigURLs:(NSArray *)arg1 ;
-(void)setPayloadFsnameservers:(NSArray *)arg1 ;
-(void)setPayloadSanAuthMethod:(NSString *)arg1 ;
-(NSString *)payloadSanName;
-(NSArray *)payloadSanConfigURLs;
-(NSArray *)payloadFsnameservers;
-(NSString *)payloadSanAuthMethod;
@end

