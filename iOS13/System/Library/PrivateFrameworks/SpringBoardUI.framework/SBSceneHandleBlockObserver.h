/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>

@class NSMutableDictionary, NSString;

@interface SBSceneHandleBlockObserver : NSObject <BSInvalidatable, SBSceneHandleObserver> {

	NSMutableDictionary* _createBlocks;
	NSMutableDictionary* _destroyBlocks;
	NSMutableDictionary* _didUpdateContentStateBlocks;
	NSMutableDictionary* _didUpdateSettingsBlocks;
	NSMutableDictionary* _didUpdateClientSettingsBlocks;
	NSMutableDictionary* _didUpdatePairingStatusBlocks;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)removeObserverForToken:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2 ;
-(id)observeCreate:(/*^block*/id)arg1 ;
-(id)observeDestroy:(/*^block*/id)arg1 ;
-(id)observeDidUpdateContentState:(/*^block*/id)arg1 ;
-(id)observeDidUpdateSettings:(/*^block*/id)arg1 ;
-(id)observeDidUpdateClientSettings:(/*^block*/id)arg1 ;
-(id)observeDidUpdatePairingStatusForExternalIdentifiers:(/*^block*/id)arg1 ;
@end

