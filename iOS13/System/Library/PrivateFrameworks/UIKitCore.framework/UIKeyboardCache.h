/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class TIImageCacheClient, NSSet, NSMutableSet, _UIActionWhenIdle;

@interface UIKeyboardCache : NSObject {

	TIImageCacheClient* _store;
	NSSet* _layouts;
	NSMutableSet* _activeRenderers;
	_UIActionWhenIdle* _idleAction;

}

@property (nonatomic,retain) _UIActionWhenIdle * idleAction;              //@synthesize idleAction=_idleAction - In the implementation block
+(id)sharedInstance;
+(BOOL)enabled;
-(id)init;
-(void)dealloc;
-(void)purge;
-(void)commitTransaction;
-(void)decrementExpectedRender:(id)arg1 ;
-(void)incrementExpectedRender:(id)arg1 ;
-(id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3 ;
-(CGImageRef)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 ;
-(void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(CGContextRef)arg3 ;
-(_UIActionWhenIdle *)idleAction;
-(void)_didIdle;
-(void)setIdleAction:(_UIActionWhenIdle *)arg1 ;
-(void)_didIdleAndShouldWait;
-(id)uniqueLayoutsFromInputModes:(id)arg1 ;
-(void)clearNonPersistentCache;
-(CGImageRef)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3 ;
-(void)updateCacheForInputModes:(id)arg1 ;
@end

