/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
-(id)willUpdateWithData:(id)arg1 ;
-(id)_animationForBackgroundActivityPill;
-(void)setBackgroundActivityDetailPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarRegion *)pillRegion;
-(_UIStatusBarDisplayItemPlacement *)backgroundActivityDetailPlacement;
-(void)updatePill;
-(_UIStatusBarDisplayItemPlacement *)pillIconPlacement;
-(NSTimer *)backgroundActivityDetailTimer;
-(id)_animationForBackgroundActivityIcon;
-(void)setBackgroundActivityDetailTimer:(NSTimer *)arg1 ;
-(void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(BOOL)arg3 ;
-(void)_hideActivityDetailAndUpdate:(BOOL)arg1 ;
-(void)setPillIconPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2 ;
-(void)setPillRegion:(_UIStatusBarRegion *)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(void)updateDataForBackgroundActivity:(id)arg1 ;
@end

