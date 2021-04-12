/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)enabled;
+(id)sharedInstance;
-(id)init;
-(void)decrementExpectedRender:(id)arg1 ;
-(CGImageRef)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 ;
-(void)incrementExpectedRender:(id)arg1 ;
-(void)commitTransaction;
-(void)clearNonPersistentCache;
-(id)uniqueLayoutsFromInputModes:(id)arg1 ;
-(void)setIdleAction:(_UIActionWhenIdle *)arg1 ;
-(void)updateCacheForInputModes:(id)arg1 ;
-(void)_didIdle;
-(void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3 ;
-(CGImageRef)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3 ;
-(_UIActionWhenIdle *)idleAction;
-(void)_didIdleAndShouldWait;
-(void)purge;
-(void)dealloc;
@end

