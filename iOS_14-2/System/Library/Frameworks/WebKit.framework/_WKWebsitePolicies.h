/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKWebpagePreferences, NSDictionary, WKWebsiteDataStore, NSString;

@interface _WKWebsitePolicies : NSObject {

	RetainPtr<WKWebpagePreferences>* _webpagePreferences;

}

@property (nonatomic,readonly) WKWebpagePreferences * webpagePreferences; 
@property (assign,nonatomic) BOOL contentBlockersEnabled; 
@property (assign,nonatomic) unsigned long long allowedAutoplayQuirks; 
@property (assign,nonatomic) long long autoplayPolicy; 
@property (nonatomic,copy) NSDictionary * customHeaderFields; 
@property (assign,nonatomic) unsigned long long popUpPolicy; 
@property (nonatomic,retain) WKWebsiteDataStore * websiteDataStore; 
@property (nonatomic,copy) NSString * customUserAgent; 
@property (nonatomic,copy) NSString * customUserAgentAsSiteSpecificQuirks; 
@property (nonatomic,copy) NSString * customNavigatorPlatform; 
@property (assign,nonatomic) unsigned long long deviceOrientationAndMotionAccessPolicy; 
-(id)init;
-(void)setWebsiteDataStore:(WKWebsiteDataStore *)arg1 ;
-(id)description;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(Object*)_apiObject;
-(WKWebsiteDataStore *)websiteDataStore;
-(WKWebpagePreferences *)webpagePreferences;
-(void)setContentBlockersEnabled:(BOOL)arg1 ;
-(BOOL)contentBlockersEnabled;
-(void)setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(unsigned long long)allowedAutoplayQuirks;
-(void)setAutoplayPolicy:(long long)arg1 ;
-(long long)autoplayPolicy;
-(void)setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(unsigned long long)deviceOrientationAndMotionAccessPolicy;
-(void)setPopUpPolicy:(unsigned long long)arg1 ;
-(unsigned long long)popUpPolicy;
-(NSDictionary *)customHeaderFields;
-(void)setCustomHeaderFields:(NSDictionary *)arg1 ;
-(void)setCustomUserAgentAsSiteSpecificQuirks:(NSString *)arg1 ;
-(NSString *)customUserAgentAsSiteSpecificQuirks;
-(void)setCustomNavigatorPlatform:(NSString *)arg1 ;
-(NSString *)customNavigatorPlatform;
-(NSString *)customUserAgent;
@end

