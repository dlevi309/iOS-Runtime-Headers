/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSTimer;

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS {

	_UIStatusBarDisplayItemPlacement* _backgroundActivityDetailPlacement;
	_UIStatusBarDisplayItemPlacement* _pillIconPlacement;
	_UIStatusBarRegion* _pillRegion;
	NSTimer* _backgroundActivityDetailTimer;

}

@property (nonatomic,retain) NSTimer * backgroundActivityDetailTimer;                                           //@synthesize backgroundActivityDetailTimer=_backgroundActivityDetailTimer - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * backgroundActivityDetailPlacement;              //@synthesize backgroundActivityDetailPlacement=_backgroundActivityDetailPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * pillIconPlacement;                              //@synthesize pillIconPlacement=_pillIconPlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegion * pillRegion;                                                   //@synthesize pillRegion=_pillRegion - In the implementation block
+(Class)visualProviderSubclassForScreen:(id)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(id)_animationForBackgroundActivityPill;
-(void)setBackgroundActivityDetailPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)backgroundActivityDetailPlacement;
-(void)updateDataForBackgroundActivity:(id)arg1 ;
-(id)_animationForBackgroundActivityIcon;
-(_UIStatusBarRegion *)pillRegion;
-(void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(BOOL)arg3 ;
-(NSTimer *)backgroundActivityDetailTimer;
-(void)setBackgroundActivityDetailTimer:(NSTimer *)arg1 ;
-(void)_hideActivityDetailAndUpdate:(BOOL)arg1 ;
-(id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2 ;
-(void)setPillRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setPillIconPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)updatePill;
-(_UIStatusBarDisplayItemPlacement *)pillIconPlacement;
@end

