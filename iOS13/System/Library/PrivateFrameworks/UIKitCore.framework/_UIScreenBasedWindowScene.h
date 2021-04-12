/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindowScene.h>

@protocol NSCopying;
@class UIScreen, UIMutableApplicationSceneSettings;

@interface _UIScreenBasedWindowScene : UIWindowScene {

	UIScreen* _screen;
	UIMutableApplicationSceneSettings* _synthesizedSettings;
	BOOL _invalidationHandlerRegistered;
	id<NSCopying> _lookupKey;

}
+(id)unassociationCacheAccessQueue;
+(id)unassociationCache;
+(BOOL)shouldAllowComponents;
+(BOOL)alwaysKeepContexts;
+(BOOL)autoinvalidates;
+(id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)screen;
-(BOOL)_shouldAllowFencing;
-(CGRect)_referenceBounds;
-(void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_synthesizedSettings;
-(id)_displayInfoProvider;
-(void)_invalidateScreen;
-(void)_detachWindow:(id)arg1 ;
-(id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3 ;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2 ;
@end

