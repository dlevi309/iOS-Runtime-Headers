/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadBundleIdentifier;
	NSNumber* _payloadImmediate;

}

@property (nonatomic,copy) NSString * payloadBundleIdentifier;              //@synthesize payloadBundleIdentifier=_payloadBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * payloadImmediate;                     //@synthesize payloadImmediate=_payloadImmediate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 withImmediate:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)mustBeSupervised;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBundleIdentifier:(NSString *)arg1 ;
-(NSString *)payloadBundleIdentifier;
-(int)executionLevel;
-(void)setPayloadImmediate:(NSNumber *)arg1 ;
-(NSNumber *)payloadImmediate;
@end

