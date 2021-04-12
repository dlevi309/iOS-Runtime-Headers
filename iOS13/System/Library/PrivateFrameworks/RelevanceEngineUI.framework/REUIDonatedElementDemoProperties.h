/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)bundleIdentifier;
-(id)intent;
-(id)appName;
-(id)appIcon;
@end

