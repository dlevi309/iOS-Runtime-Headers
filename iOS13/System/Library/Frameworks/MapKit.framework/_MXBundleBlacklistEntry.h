/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

