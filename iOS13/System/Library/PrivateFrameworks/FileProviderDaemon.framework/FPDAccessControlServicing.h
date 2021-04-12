/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPDAccessControlServicing
@required
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchEnumeratorForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)revokeAccessToAllBundlesCompletionHandler:(/*^block*/id)arg1;

@end

