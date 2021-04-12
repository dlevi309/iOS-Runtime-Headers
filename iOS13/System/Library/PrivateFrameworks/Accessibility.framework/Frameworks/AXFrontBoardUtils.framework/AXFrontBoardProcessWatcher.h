/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
*/

#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBProcessObserver.h>

@class AXDispatchTimer, NSSet, NSString;

@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver> {

	id _observerToken;
	AXDispatchTimer* _appTransitionTimer;
	NSSet* _cachedFocusedAppPIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)validateFocusedAppsWithEvent:(long long)arg1 ;
+(id)processForBundleIdentifier:(id)arg1 ;
+(id)accessibilitySpokenNameForProcess:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)processDidExit:(id)arg1 ;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)_validateFocusedApps:(long long)arg1 ;
-(id)_processDescriptionForPID:(int)arg1 ;
-(BOOL)_processStateChangeIsTaskStateChangeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_processStateChangeIsVisibilityStateChangeFrom:(id)arg1 to:(id)arg2 ;
@end

