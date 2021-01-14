/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@interface FPAccessControlManager : NSObject
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)_killBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)collectionForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)revokeAccessToAllBundles;
-(void)revokeAccessToAllBundlesCompletionHandler:(/*^block*/id)arg1 ;
@end

