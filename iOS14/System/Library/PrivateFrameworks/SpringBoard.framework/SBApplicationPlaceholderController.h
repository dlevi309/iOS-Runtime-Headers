/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLeafIconObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderLifecycleObserver.h>
#import <libobjc.A.dylib/SBApplicationPlaceholderDelegate.h>

@class SBApplicationController, SBApplicationLibraryObserver, NSMutableDictionary, NSMutableSet, NSCountedSet, NSString;

@interface SBApplicationPlaceholderController : NSObject <SBLeafIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate> {

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
-(BOOL)isUsingNetwork;
-(void)applicationPlaceholdersInstalled:(id)arg1 ;
-(id)init;
-(void)_removePlaceholders:(id)arg1 forInstall:(BOOL)arg2 ;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3 ;
-(void)_processPendingProxies;
-(BOOL)hasDownloadedStoreApplication;
-(BOOL)placeholderShouldAllowPausing:(id)arg1 ;
-(void)placeholderWantsUninstall:(id)arg1 ;
-(void)_finishPlaceholder:(id)arg1 ;
-(void)applicationPlaceholdersAdded:(id)arg1 ;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)arg1 ;
-(id)placeholdersByDisplayID;
-(void)_addPlaceholders:(id)arg1 ;
-(id)placeholderForDisplayID:(id)arg1 ;
-(void)applicationPlaceholdersCancelled:(id)arg1 ;
-(void)dealloc;
@end

