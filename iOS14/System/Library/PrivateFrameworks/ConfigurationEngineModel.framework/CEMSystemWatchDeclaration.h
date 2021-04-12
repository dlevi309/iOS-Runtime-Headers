/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemWatchDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadForceWatchWristDetection;
	NSNumber* _payloadAllowPairedWatch;

}

@property (nonatomic,copy) NSNumber * payloadForceWatchWristDetection;              //@synthesize payloadForceWatchWristDetection=_payloadForceWatchWristDetection - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPairedWatch;                      //@synthesize payloadAllowPairedWatch=_payloadAllowPairedWatch - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withForceWatchWristDetection:(id)arg2 withAllowPairedWatch:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadForceWatchWristDetection:(NSNumber *)arg1 ;
-(void)setPayloadAllowPairedWatch:(NSNumber *)arg1 ;
-(NSNumber *)payloadForceWatchWristDetection;
-(NSNumber *)payloadAllowPairedWatch;
@end

