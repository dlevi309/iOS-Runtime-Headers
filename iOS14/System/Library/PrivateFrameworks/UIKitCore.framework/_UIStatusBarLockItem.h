/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>
#import <UIKitCore/_UIBasicAnimationFactory.h>

@class _UIStatusBarLockView, _UIExpandingGlyphsView, NSTimer, NSString;

@interface _UIStatusBarLockItem : _UIStatusBarItem <_UIBasicAnimationFactory> {

	BOOL _showsLock;
	_UIStatusBarLockView* _lockView;
	_UIExpandingGlyphsView* _stringView;
	NSTimer* _lockDisappearanceTimer;
	long long _unlockFailureCount;

}

@property (nonatomic,retain) _UIStatusBarLockView * lockView;                  //@synthesize lockView=_lockView - In the implementation block
@property (nonatomic,retain) _UIExpandingGlyphsView * stringView;              //@synthesize stringView=_stringView - In the implementation block
@property (nonatomic,retain) NSTimer * lockDisappearanceTimer;                 //@synthesize lockDisappearanceTimer=_lockDisappearanceTimer - In the implementation block
@property (assign,nonatomic) BOOL showsLock;                                   //@synthesize showsLock=_showsLock - In the implementation block
@property (assign,nonatomic) long long unlockFailureCount;                     //@synthesize unlockFailureCount=_unlockFailureCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setUnlockFailureCount:(long long)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarLockView *)lockView;
-(long long)unlockFailureCount;
-(void)_create_stringView;
-(void)setShowsLock:(BOOL)arg1 ;
-(void)_create_lockView;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setStringView:(_UIExpandingGlyphsView *)arg1 ;
-(void)setLockDisappearanceTimer:(NSTimer *)arg1 ;
-(BOOL)showsLock;
-(_UIExpandingGlyphsView *)stringView;
-(NSTimer *)lockDisappearanceTimer;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)setLockView:(_UIStatusBarLockView *)arg1 ;
@end

