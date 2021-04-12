/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnAllowedCaptiveNetworkPlugin : CEMPayloadBase {

	NSString* _payloadBundleIdentifier;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;              //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithBundleIdentifier:(id)arg1 ;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
@end

