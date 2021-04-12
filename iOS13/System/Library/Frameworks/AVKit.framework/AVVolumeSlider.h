/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UISlider.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UIImageView, NSNumber, AVVolumeWarningView, NSString;

@interface AVVolumeSlider : UISlider <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem> {

	BOOL _included;
	BOOL _collapsed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _removed;
	BOOL _animatingVolumeChange;
	BOOL _hasChangedLocationAtLeastOnce;
	BOOL _scrubsWhenTappedAnywhere;
	float _effectiveVolumeLimit;
	UIImageView* _thumbView;
	NSNumber* _unclampedValue;
	AVVolumeWarningView* _volumeWarningView;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,retain) UIImageView * thumbView;                                                //@synthesize thumbView=_thumbView - In the implementation block
@property (assign,nonatomic,__weak) AVVolumeWarningView * volumeWarningView;                         //@synthesize volumeWarningView=_volumeWarningView - In the implementation block
@property (assign,nonatomic) BOOL hasChangedLocationAtLeastOnce;                                     //@synthesize hasChangedLocationAtLeastOnce=_hasChangedLocationAtLeastOnce - In the implementation block
@property (assign,nonatomic) BOOL scrubsWhenTappedAnywhere;                                          //@synthesize scrubsWhenTappedAnywhere=_scrubsWhenTappedAnywhere - In the implementation block
@property (assign,getter=isAnimatingVolumeChange,nonatomic) BOOL animatingVolumeChange;              //@synthesize animatingVolumeChange=_animatingVolumeChange - In the implementation block
@property (assign,nonatomic) float effectiveVolumeLimit;                                             //@synthesize effectiveVolumeLimit=_effectiveVolumeLimit - In the implementation block
@property (nonatomic,retain) NSNumber * unclampedValue;                                              //@synthesize unclampedValue=_unclampedValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize extrinsicContentSize;                                            //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                          //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                      //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                        //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                            //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                           //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CGRect)hitRect;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(void)_endTracking;
-(UIImageView *)thumbView;
-(BOOL)isRemoved;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)_shouldTrackTouchAtPoint:(CGPoint)arg1 ;
-(BOOL)scrubsWhenTappedAnywhere;
-(void)setScrubsWhenTappedAnywhere:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(BOOL)hasChangedLocationAtLeastOnce;
-(void)setHasChangedLocationAtLeastOnce:(BOOL)arg1 ;
-(void)setEffectiveVolumeLimit:(float)arg1 ;
-(NSNumber *)unclampedValue;
-(void)setThumbView:(UIImageView *)arg1 ;
-(float)effectiveVolumeLimit;
-(void)setUnclampedValue:(NSNumber *)arg1 ;
-(BOOL)isAnimatingVolumeChange;
-(void)setAnimatingVolumeChange:(BOOL)arg1 ;
-(AVVolumeWarningView *)volumeWarningView;
-(void)setVolumeWarningView:(AVVolumeWarningView *)arg1 ;
@end

