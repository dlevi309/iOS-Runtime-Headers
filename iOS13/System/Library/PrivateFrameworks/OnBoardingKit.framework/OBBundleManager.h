/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@interface OBBundleManager : NSObject
+(id)sharedManager;
-(id)allBundles;
-(id)bundleWithIdentifier:(id)arg1 ;
-(id)_bundleSearchPath;
-(id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)arg1 ;
-(id)_allPrivacyBundles;
-(id)orderedPrivacyBundles;
-(id)bundlesWithIdentifiers:(id)arg1 ;
@end

