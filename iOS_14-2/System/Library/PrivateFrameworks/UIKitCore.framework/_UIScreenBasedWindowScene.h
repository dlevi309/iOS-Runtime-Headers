/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)alwaysKeepContexts;
+(BOOL)shouldAllowComponents;
+(id)_unassociatedWindowSceneForScreen:(id)arg1 create:(BOOL)arg2 ;
+(id)unassociationCache;
+(BOOL)autoinvalidates;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg1 ;
-(void)_screenDisconnected:(id)arg1 ;
-(void)_openURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldAllowFencing;
-(void)_attachWindow:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(CGRect)_referenceBoundsForOrientation:(long long)arg1 ;
-(id)_displayInfoProvider;
-(id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3 ;
-(void)_updateClientSettingsToInterfaceOrientation:(long long)arg1 withAnimationDuration:(double)arg2 ;
-(id)_synthesizedSettings;
-(id)screen;
-(void)_detachWindow:(id)arg1 ;
-(CGRect)_referenceBounds;
@end

