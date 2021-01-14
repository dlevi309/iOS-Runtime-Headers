/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UISlider.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UIImageView, NSNumber, AVLayoutItemAttributes, AVVolumeWarningView, NSString;

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
	AVLayoutItemAttributes* _layoutAttributes;
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
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                            //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(CGRect)hitRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)extrinsicContentSize;
-(BOOL)_shouldTrackTouchAtPoint:(CGPoint)arg1 ;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(BOOL)scrubsWhenTappedAnywhere;
-(void)setScrubsWhenTappedAnywhere:(BOOL)arg1 ;
-(BOOL)hasChangedLocationAtLeastOnce;
-(void)setHasChangedLocationAtLeastOnce:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_endTracking;
-(void)setEffectiveVolumeLimit:(float)arg1 ;
-(NSNumber *)unclampedValue;
-(float)effectiveVolumeLimit;
-(void)setUnclampedValue:(NSNumber *)arg1 ;
-(BOOL)isAnimatingVolumeChange;
-(void)setAnimatingVolumeChange:(BOOL)arg1 ;
-(AVVolumeWarningView *)volumeWarningView;
-(void)setVolumeWarningView:(AVVolumeWarningView *)arg1 ;
-(void)layoutAttributesDidChange;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setThumbView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setIncluded:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(BOOL)hasAlternateAppearance;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(id)createThumbView;
-(BOOL)isCollapsedOrExcluded;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(UIImageView *)thumbView;
@end

