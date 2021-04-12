/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowGameCenter;
	NSNumber* _payloadAllowMultiplayerGaming;
	NSNumber* _payloadAllowAddingGameCenterFriends;

}

@property (nonatomic,copy) NSNumber * payloadAllowGameCenter;                           //@synthesize payloadAllowGameCenter=_payloadAllowGameCenter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowMultiplayerGaming;                    //@synthesize payloadAllowMultiplayerGaming=_payloadAllowMultiplayerGaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAddingGameCenterFriends;              //@synthesize payloadAllowAddingGameCenterFriends=_payloadAllowAddingGameCenterFriends - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowGameCenter:(NSNumber *)arg1 ;
-(void)setPayloadAllowMultiplayerGaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowAddingGameCenterFriends:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowGameCenter;
-(NSNumber *)payloadAllowMultiplayerGaming;
-(NSNumber *)payloadAllowAddingGameCenterFriends;
@end

