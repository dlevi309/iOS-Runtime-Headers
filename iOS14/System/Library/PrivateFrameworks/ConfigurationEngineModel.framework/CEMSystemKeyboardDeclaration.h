/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemKeyboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowPredictiveKeyboard;
	NSNumber* _payloadAllowAutoCorrection;
	NSNumber* _payloadAllowSpellCheck;
	NSNumber* _payloadAllowKeyboardShortcuts;

}

@property (nonatomic,copy) NSNumber * payloadAllowPredictiveKeyboard;              //@synthesize payloadAllowPredictiveKeyboard=_payloadAllowPredictiveKeyboard - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAutoCorrection;                  //@synthesize payloadAllowAutoCorrection=_payloadAllowAutoCorrection - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowSpellCheck;                      //@synthesize payloadAllowSpellCheck=_payloadAllowSpellCheck - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowKeyboardShortcuts;               //@synthesize payloadAllowKeyboardShortcuts=_payloadAllowKeyboardShortcuts - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAllowPredictiveKeyboard:(id)arg2 withAllowAutoCorrection:(id)arg3 withAllowSpellCheck:(id)arg4 withAllowKeyboardShortcuts:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowPredictiveKeyboard:(NSNumber *)arg1 ;
-(void)setPayloadAllowAutoCorrection:(NSNumber *)arg1 ;
-(void)setPayloadAllowSpellCheck:(NSNumber *)arg1 ;
-(void)setPayloadAllowKeyboardShortcuts:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowPredictiveKeyboard;
-(NSNumber *)payloadAllowAutoCorrection;
-(NSNumber *)payloadAllowSpellCheck;
-(NSNumber *)payloadAllowKeyboardShortcuts;
@end

