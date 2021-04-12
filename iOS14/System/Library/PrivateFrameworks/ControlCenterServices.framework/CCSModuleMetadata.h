/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)associatedBundleMinimumVersion;
-(NSString *)associatedBundleIdentifier;
-(NSSet *)supportedDeviceFamilies;
-(NSString *)moduleIdentifier;
-(id)description;
-(id)_initWithModuleIdentifier:(id)arg1 supportedDeviceFamilies:(id)arg2 requiredDeviceCapabilities:(id)arg3 associatedBundleIdentifier:(id)arg4 associatedBundleMinimumVersion:(id)arg5 visibilityPreference:(unsigned long long)arg6 moduleBundleURL:(id)arg7 ;
-(NSURL *)moduleBundleURL;
-(unsigned long long)visibilityPreference;
-(unsigned long long)hash;
-(NSSet *)requiredDeviceCapabilities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

