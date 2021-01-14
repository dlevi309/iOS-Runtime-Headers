/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBApplicationRestrictionObserver.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/BKSTouchDeliveryObserving.h>

@class NSHashTable, SBLayoutStateTransitionCoordinator, NSString;

@interface SBMainDisplayWorkspaceAppInteractionEventSource : NSObject <SBApplicationRestrictionObserver, SBLayoutStateTransitionObserver, BKSTouchDeliveryObserving> {

	NSHashTable* _observers;
	SBLayoutStateTransitionCoordinator* _stateCoordinator;
	NSString* _currentFocusedBundleID;

}

@property (nonatomic,copy) NSString * currentFocusedBundleID;              //@synthesize currentFocusedBundleID=_currentFocusedBundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(NSString *)currentFocusedBundleID;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)touchUpOccuredForIdentifier:(unsigned)arg1 detached:(BOOL)arg2 context:(unsigned)arg3 pid:(int)arg4 ;
-(void)_notifyTransition:(id)arg1 beginning:(BOOL)arg2 ;
-(id)init;
-(void)_webBookmarkUninstalled:(id)arg1 ;
-(id)_bundleIDsForIcons:(id)arg1 ;
-(void)_displayLayoutDidUpdate:(id)arg1 ;
-(void)_userQuitApplication:(id)arg1 ;
-(void)touchDetachedForIdentifier:(unsigned)arg1 context:(unsigned)arg2 pid:(int)arg3 ;
-(void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3 ;
-(void)setCurrentFocusedBundleID:(NSString *)arg1 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_noteTouchForProcess:(int)arg1 ;
-(void)_iconVisibilityDidChange:(id)arg1 ;
-(void)_userRemovedSuggestion:(id)arg1 ;
-(void)dealloc;
@end

