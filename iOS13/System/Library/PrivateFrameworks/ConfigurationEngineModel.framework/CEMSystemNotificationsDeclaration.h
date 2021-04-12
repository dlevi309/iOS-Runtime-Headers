/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemNotificationsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSArray* _payloadNotificationSettings;
	NSNumber* _payloadAllowNotificationsModification;

}

@property (nonatomic,copy) NSArray * payloadNotificationSettings;                         //@synthesize payloadNotificationSettings=_payloadNotificationSettings - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowNotificationsModification;              //@synthesize payloadAllowNotificationsModification=_payloadAllowNotificationsModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2 withAllowNotificationsModification:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withNotificationSettings:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadNotificationSettings:(NSArray *)arg1 ;
-(void)setPayloadAllowNotificationsModification:(NSNumber *)arg1 ;
-(NSArray *)payloadNotificationSettings;
-(NSNumber *)payloadAllowNotificationsModification;
@end

