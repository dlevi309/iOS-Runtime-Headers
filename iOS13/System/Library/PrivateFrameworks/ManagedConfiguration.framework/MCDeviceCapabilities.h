/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id*)arg3 ;
-(BOOL)supportsBlockLevelEncryption;
-(BOOL)supportsFileLevelEncryption;
@end

