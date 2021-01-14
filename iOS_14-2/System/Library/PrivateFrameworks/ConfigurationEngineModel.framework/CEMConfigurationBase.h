/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@interface CEMConfigurationBase : CEMDeclarationBase
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)declarationClass;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(id)synthesizeProfilePayloadOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
-(id)profilePayloadsByTypeWithAssetProviders:(id)arg1 ;
-(id)payloadUUIDWithIdentifier:(id)arg1 outUUIDs:(id)arg2 oldUUIDs:(id)arg3 ;
-(id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
@end

