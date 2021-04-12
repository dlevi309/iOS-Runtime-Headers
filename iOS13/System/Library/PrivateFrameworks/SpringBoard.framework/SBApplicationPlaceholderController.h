/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderLifecycleObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSCountedSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSCountedSet* _removingPlaceholderProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isUsingNetwork;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(id)placeholderForDisplayID:(id)arg1 ;
-(BOOL)hasDownloadedStoreApplication;
-(id)placeholdersByDisplayID;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(BOOL)placeholderShouldAllowPausing:(id)arg1 ;
-(void)placeholderWantsUninstall:(id)arg1 ;
-(void)_processPendingProxies;
-(void)_addPlaceholders:(id)arg1 ;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_finishPlaceholder:(id)arg1 ;
@end

