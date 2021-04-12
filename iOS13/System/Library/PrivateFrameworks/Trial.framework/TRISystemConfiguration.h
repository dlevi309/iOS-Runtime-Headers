/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/


@interface TRISystemConfiguration : NSObject
+(id)osBuild;
+(BOOL)setDeviceIdentifier:(id)arg1 ;
+(id)osType;
+(id)deviceClass;
+(id)deviceLocale;
+(id)deviceId;
+(BOOL)isInternalBuild;
+(id)systemInfo;
+(id)deviceModelCode;
+(BOOL)isBetaBuild;
+(BOOL)isBetaUser;
+(BOOL)deleteDeviceIdentifier;
+(id)createPersistentDeviceIdentifier;
+(BOOL)deleteDeviceIdentifierWithPath:(id)arg1 ;
+(BOOL)setDeviceIdentifier:(id)arg1 path:(id)arg2 ;
+(id)readDeviceIdentifierWithPath:(id)arg1 ;
+(id)createDeviceIdentifierWithPath:(id)arg1 ;
+(id)storedDeviceIdentifier;
+(id)deviceInfoForQuestion:(id)arg1 ;
+(id)reloadSystemInfo;
+(BOOL)resetDeviceIdentifier;
+(id)reloadDeviceId;
@end

