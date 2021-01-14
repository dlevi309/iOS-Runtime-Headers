/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


#import <Trial/Trial-Structs.h>
@class NSString;

@interface TRISystemConfiguration : NSObject {

	NSString* _persistentDeviceIdentifierPath;
	NSString* _cachedDeviceIdentifier;

}
+(id)sharedInstance;
+(id)_sharedSystemInfo;
-(BOOL)setDeviceIdentifier:(id)arg1 ;
-(id)enabledInputModeIdentifiers;
-(id)init;
-(id)osBuild;
-(id)osType;
-(BOOL)isBetaBuild;
-(id)deviceClass;
-(BOOL)isInternalBuild;
-(id)initWithPaths:(id)arg1 ;
-(id)deviceModelCode;
-(id)trialVersionTag;
-(BOOL)isBetaUserWithIsStale:(BOOL*)arg1 ;
-(id)userSettingsLanguageCode;
-(id)userSettingsRegionCode;
-(id)_systemInfoWithIsStale:(BOOL*)arg1 ;
-(id)_trialVersion;
-(BOOL)deleteDeviceIdentifier;
-(id)createPersistentDeviceIdentifier;
-(BOOL)deleteDeviceIdentifierWithPath:(id)arg1 ;
-(BOOL)setDeviceIdentifier:(id)arg1 path:(id)arg2 ;
-(id)readDeviceIdentifierWithPath:(id)arg1 ;
-(id)createDeviceIdentifierWithPath:(id)arg1 ;
-(id)storedDeviceIdentifier;
-(id)deviceInfoForQuestion:(id)arg1 ;
-(int)populationType;
-(id)reloadSystemInfo;
-(unsigned long long)trialVersionMajor;
-(unsigned long long)trialVersionMinor;
-(BOOL)resetDeviceIdentifier;
-(id)reloadDeviceId;
-(SCD_Struct_TR4)marketingOSVersion;
-(id)systemInfo;
-(id)deviceId;
@end

