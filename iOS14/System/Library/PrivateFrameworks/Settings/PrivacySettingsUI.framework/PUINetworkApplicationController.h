/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <PrivacySettingsUI/PUINetworkController.h>

@class NSString, LSApplicationProxy;

@interface PUINetworkApplicationController : PUINetworkController {

	NSString* _bundleIdentifier;
	LSApplicationProxy* _application;

}

@property (retain) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (retain) LSApplicationProxy * application;              //@synthesize application=_application - In the implementation block
-(void)setApplication:(LSApplicationProxy *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifiers;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(LSApplicationProxy *)application;
-(id)isLocalNetworkEnabled:(id)arg1 ;
-(void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)pathRuleCreate:(BOOL)arg1 ;
@end

