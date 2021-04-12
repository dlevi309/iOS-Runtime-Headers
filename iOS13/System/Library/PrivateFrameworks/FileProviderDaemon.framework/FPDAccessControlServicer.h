/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDAccessControlServicing.h>

@class FPDExtensionManager, FPDAccessControlStore;

@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing> {

	FPDExtensionManager* _extensionManager;
	FPDAccessControlStore* _accessStore;

}

@property (assign,nonatomic,__weak) FPDAccessControlStore * accessStore;                 //@synthesize accessStore=_accessStore - In the implementation block
@property (assign,nonatomic,__weak) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
-(void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(/*^block*/id)arg1 ;
-(void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchEnumeratorForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)revokeAccessToAllBundlesCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExtensionManager:(FPDExtensionManager *)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(id)_lowerToUpperBundleIdentifiers;
-(id)initWithExtensionManager:(id)arg1 accessStore:(id)arg2 ;
-(void)accessibleItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(FPDAccessControlStore *)accessStore;
-(void)setAccessStore:(FPDAccessControlStore *)arg1 ;
@end

