/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <Cards/CRBundleManager.h>

@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {

	NSMutableSet* _providerBundles;

}
+(id)bundleDirectoryName;
+(id)sharedInstance;
+(Class)bundleClass;
-(void)getProviderBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

