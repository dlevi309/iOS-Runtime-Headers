/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@interface MCDeviceCapabilities : NSObject {

	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;

}

@property (nonatomic,readonly) BOOL supportsBlockLevelEncryption;              //@synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileLevelEncryption;               //@synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption - In the implementation block
+(id)currentDevice;
-(id)init;
-(BOOL)_mediaDiskIsEncrypted;
-(BOOL)supportsFileLevelEncryption;
-(BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3 ;
-(BOOL)supportsBlockLevelEncryption;
@end

