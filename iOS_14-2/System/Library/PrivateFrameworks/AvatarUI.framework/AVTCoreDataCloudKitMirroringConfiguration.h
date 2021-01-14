/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTCoreDataCloudKitMirroringConfiguration : NSObject
+(id)createMirroringHandlerWithEnvironment:(id)arg1 ;
+(id)currentContainerIdentifier;
+(BOOL)manateeContainer:(id)arg1 ;
+(BOOL)cloudKitMirroringEnabled;
+(void)deviceConfigurationSupportsCloudKitMirroringWithLogger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)configureStoreDescriptionForMirroring:(id)arg1 logger:(id)arg2 ;
+(id)managedModelAttributesRequiredForMirroring;
+(void)configureMirroringRequestOptions:(id)arg1 discretionary:(BOOL)arg2 ;
+(void)configureMirroringRequestOptions:(id)arg1 ;
@end

