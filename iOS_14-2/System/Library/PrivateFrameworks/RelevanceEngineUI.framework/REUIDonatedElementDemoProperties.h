/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/REUIDonatedElementProperties.h>

@class NSString, INIntent, UIImage;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {

	NSString* _demoBundleIdentifier;
	INIntent* _demoIntent;
	NSString* _demoAppName;
	UIImage* _demoAppIcon;

}
+(id)createWithIntent:(id)arg1 bundleIdentifier:(id)arg2 appName:(id)arg3 appIcon:(id)arg4 ;
-(id)intent;
-(id)bundleIdentifier;
-(id)appName;
-(id)appIcon;
@end

