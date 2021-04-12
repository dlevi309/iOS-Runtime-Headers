/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemCameraDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowCamera;
	NSNumber* _payloadAllowScreenShot;
	NSNumber* _payloadAllowScreenRecording;

}

@property (nonatomic,copy) NSNumber * payloadAllowCamera;                       //@synthesize payloadAllowCamera=_payloadAllowCamera - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowScreenShot;                   //@synthesize payloadAllowScreenShot=_payloadAllowScreenShot - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowScreenRecording;              //@synthesize payloadAllowScreenRecording=_payloadAllowScreenRecording - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowCamera:(id)arg2 withAllowScreenShot:(id)arg3 withAllowScreenRecording:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowCamera:(NSNumber *)arg1 ;
-(void)setPayloadAllowScreenShot:(NSNumber *)arg1 ;
-(void)setPayloadAllowScreenRecording:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowCamera;
-(NSNumber *)payloadAllowScreenShot;
-(NSNumber *)payloadAllowScreenRecording;
@end

