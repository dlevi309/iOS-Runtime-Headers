/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMDeviceWallpaperDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadLockScreenAsset;
	NSString* _payloadHomeScreenAsset;
	NSNumber* _payloadAllowWallpaperModification;

}

@property (nonatomic,copy) NSString * payloadLockScreenAsset;                         //@synthesize payloadLockScreenAsset=_payloadLockScreenAsset - In the implementation block
@property (nonatomic,copy) NSString * payloadHomeScreenAsset;                         //@synthesize payloadHomeScreenAsset=_payloadHomeScreenAsset - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowWallpaperModification;              //@synthesize payloadAllowWallpaperModification=_payloadAllowWallpaperModification - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withLockScreenAsset:(id)arg2 withHomeScreenAsset:(id)arg3 withAllowWallpaperModification:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadLockScreenAsset:(NSString *)arg1 ;
-(void)setPayloadHomeScreenAsset:(NSString *)arg1 ;
-(void)setPayloadAllowWallpaperModification:(NSNumber *)arg1 ;
-(NSString *)payloadLockScreenAsset;
-(NSString *)payloadHomeScreenAsset;
-(NSNumber *)payloadAllowWallpaperModification;
@end
