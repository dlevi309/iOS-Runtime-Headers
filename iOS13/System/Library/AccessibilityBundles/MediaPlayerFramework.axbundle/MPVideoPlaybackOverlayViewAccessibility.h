/*
* Generated on Monday, March 1, 2021 at 2:35:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/MediaPlayerFramework.axbundle/MediaPlayerFramework
*/

#import <MediaPlayerFramework/MediaPlayerFramework-Structs.h>
#import <MediaPlayerFramework/__MPVideoPlaybackOverlayViewAccessibility_super.h>

@interface MPVideoPlaybackOverlayViewAccessibility : __MPVideoPlaybackOverlayViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityAllowsSiblingsWhenOvergrown;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)_configureTransportControls;
-(void)_updateAirplayButton;
-(void)_axUpdatePlayPauseButton;
-(void)_axUpdatePictureInPictureButton;
-(void)_axUpdateScaleButton;
-(void)_axAnnotateLeftRightButtons;
-(void)_axUpdateAirplayButton;
-(void)_axAnnotateAllButtons;
@end

