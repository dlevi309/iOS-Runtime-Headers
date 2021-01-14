/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, _MXVersion;

@interface _MXBundleBlacklistEntry : NSObject {

	NSString* _bundleIdentifier;
	_MXVersion* _minimum;
	_MXVersion* _maximum;

}
+(id)blacklistEntriesFromDefaultsValue:(id)arg1 ;
-(BOOL)_isVersionValueAllowed:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 minimumDisallowedVersion:(id)arg2 maximumDisallowedVersion:(id)arg3 ;
-(BOOL)isBundleProxyAllowed:(id)arg1 ;
-(BOOL)isExtensionAllowed:(id)arg1 ;
@end

