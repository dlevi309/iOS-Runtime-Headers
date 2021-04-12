/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@interface RMProfilesAdapter : NSObject
-(id)allInstalledProfileIdentifiers;
-(void)installProfileData:(id)arg1 configuration:(id)arg2 deviceChannel:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uninstallProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)profileNameForIdentifier:(id)arg1 ;
@end

