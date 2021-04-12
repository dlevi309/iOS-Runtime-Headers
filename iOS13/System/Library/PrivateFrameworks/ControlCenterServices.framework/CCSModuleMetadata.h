/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSURL;

@interface CCSModuleMetadata : NSObject <NSCopying> {

	NSString* _moduleIdentifier;
	NSSet* _supportedDeviceFamilies;
	NSSet* _requiredDeviceCapabilities;
	NSString* _associatedBundleIdentifier;
	NSString* _associatedBundleMinimumVersion;
	unsigned long long _visibilityPreference;
	NSURL* _moduleBundleURL;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                            //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedDeviceFamilies;                        //@synthesize supportedDeviceFamilies=_supportedDeviceFamilies - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requiredDeviceCapabilities;                     //@synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedBundleIdentifier;                  //@synthesize associatedBundleIdentifier=_associatedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedBundleMinimumVersion;              //@synthesize associatedBundleMinimumVersion=_associatedBundleMinimumVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityPreference;                     //@synthesize visibilityPreference=_visibilityPreference - In the implementation block
@property (nonatomic,copy,readonly) NSURL * moduleBundleURL;                                //@synthesize moduleBundleURL=_moduleBundleURL - In the implementation block
+(id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)arg1 ;
+(id)_requiredCapabilitiesForInfoDictionary:(id)arg1 ;
+(id)metadataForBundleAtURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)requiredDeviceCapabilities;
-(NSString *)associatedBundleIdentifier;
-(NSString *)moduleIdentifier;
-(NSURL *)moduleBundleURL;
-(id)_initWithModuleIdentifier:(id)arg1 supportedDeviceFamilies:(id)arg2 requiredDeviceCapabilities:(id)arg3 associatedBundleIdentifier:(id)arg4 associatedBundleMinimumVersion:(id)arg5 visibilityPreference:(unsigned long long)arg6 moduleBundleURL:(id)arg7 ;
-(NSSet *)supportedDeviceFamilies;
-(NSString *)associatedBundleMinimumVersion;
-(unsigned long long)visibilityPreference;
@end

