/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {

	ObjectStorage<API::WebsitePolicies> _websitePolicies;

}

@property (assign,nonatomic) long long preferredContentMode; 
@property (assign,nonatomic) BOOL allowsContentJavaScript; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPreferences;
-(void)_setMouseEventPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_allowedAutoplayQuirks;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(id)_userContentController;
-(id)init;
-(unsigned long long)_popUpPolicy;
-(unsigned long long)_mouseEventPolicy;
-(BOOL)allowsContentJavaScript;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(unsigned long long)_deviceOrientationAndMotionAccessPolicy;
-(id)_customUserAgent;
-(void)_setAutoplayPolicy:(long long)arg1 ;
-(id)_websiteDataStore;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1 ;
-(void)_setCustomHeaderFields:(id)arg1 ;
-(void)_setCustomUserAgent:(id)arg1 ;
-(void)_setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(id)_customNavigatorPlatform;
-(void)setAllowsContentJavaScript:(BOOL)arg1 ;
-(long long)_autoplayPolicy;
-(void)_setPopUpPolicy:(unsigned long long)arg1 ;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg1 ;
-(void)_setCustomNavigatorPlatform:(id)arg1 ;
-(Object*)_apiObject;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(long long)preferredContentMode;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1 ;
-(void)_setContentBlockersEnabled:(BOOL)arg1 ;
-(id)_customHeaderFields;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(BOOL)_contentBlockersEnabled;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(void)setPreferredContentMode:(long long)arg1 ;
-(void)dealloc;
-(void)_setUserContentController:(id)arg1 ;
@end

