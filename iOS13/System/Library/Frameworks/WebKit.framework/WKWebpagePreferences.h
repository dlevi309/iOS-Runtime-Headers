/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {

	ObjectStorage<API::WebsitePolicies> _websitePolicies;

}

@property (assign,nonatomic) long long preferredContentMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)defaultPreferences;
-(id)init;
-(void)dealloc;
-(Object*)_apiObject;
-(id)_customUserAgent;
-(void)_setCustomUserAgent:(id)arg1 ;
-(id)_websiteDataStore;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(void)_setContentBlockersEnabled:(BOOL)arg1 ;
-(BOOL)_contentBlockersEnabled;
-(void)_setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(unsigned long long)_allowedAutoplayQuirks;
-(void)_setAutoplayPolicy:(long long)arg1 ;
-(long long)_autoplayPolicy;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_deviceOrientationAndMotionAccessPolicy;
-(void)_setPopUpPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_popUpPolicy;
-(id)_customHeaderFields;
-(void)_setCustomHeaderFields:(id)arg1 ;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1 ;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(void)_setCustomNavigatorPlatform:(id)arg1 ;
-(id)_customNavigatorPlatform;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg1 ;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1 ;
-(void)setPreferredContentMode:(long long)arg1 ;
-(long long)preferredContentMode;
@end

