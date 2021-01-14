/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/MediaPlayerFramework.axbundle/MediaPlayerFramework
*/

#import <MediaPlayerFramework/MediaPlayerFramework-Structs.h>
#import <MediaPlayerFramework/__MPVideoPlaybackOverlayViewAccessibility_super.h>

@interface MPVideoPlaybackOverlayViewAccessibility : __MPVideoPlaybackOverlayViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_configureTransportControls;
-(void)_updateAirplayButton;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_axUpdatePlayPauseButton;
-(void)_axUpdatePictureInPictureButton;
-(void)_axUpdateScaleButton;
-(void)_axAnnotateLeftRightButtons;
-(void)_axUpdateAirplayButton;
-(void)_axAnnotateAllButtons;
@end

