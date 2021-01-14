/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMApplicationRemoveApplicationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadBundleIdentifier;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;              //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
-(int)executionLevel;
@end

