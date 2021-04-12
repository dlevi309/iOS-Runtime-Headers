/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, NSObject, NSString;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSDictionary* _appProxies;
	NSArray* _allAppBundleIdentifiers;
	NSArray* _installedAppBundleIdentifiers;
	NSArray* _subscribedAppBundleIdentifiers;
	NSArray* _testAppBundleIdentifiers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	BOOL _appLibraryNeedsRefresh;
	long long _ignoreAppLibraryChangesCount;
	int _didChangeNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultAppLibrary;
-(id)init;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)refresh;
-(id)allAppBundleIdentifiers;
-(void)beginIgnoringAppLibraryChanges;
-(void)endIgnoringAppLibraryChanges;
-(id)localizedNameForBundle:(id)arg1 ;
-(id)subscribedAppBundleIdentifiers;
-(id)subscriptionInfoForBundle:(id)arg1 ;
-(BOOL)isTVAppInstalled;
-(id)_refreshAppLibrary;
-(void)_subscriptionsDidChangeNotification:(id)arg1 ;
-(id)installedAppBundleIdentifiers;
-(id)_bundleIdentifiersfromProxies:(id)arg1 ;
-(void)_handleInvalidationWithReason:(id)arg1 ;
-(id)testAppBundleIdentifiers;
-(id)installedAppProxies;
-(id)subscribedAppProxies;
-(id)testAppProxies;
-(id)allAppProxies;
@end

