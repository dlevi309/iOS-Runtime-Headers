/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <Cards/CRBundleManager.h>

@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {

	NSMutableSet* _providerBundles;

}
+(id)sharedInstance;
+(Class)bundleClass;
+(id)bundleDirectoryName;
-(void)getProviderBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

