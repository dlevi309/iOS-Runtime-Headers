/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class MTVisualStylingProvider, NSString;

@interface MediaControlsVolumeSlider : MPVolumeSlider <MTVisualStylingProviderObservingPrivate> {

	MTVisualStylingProvider* _visualStylingProvider;

}

@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(id)_thumbImageForStyle:(long long)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)setMinimumTrackVisualProvider:(id)arg1 ;
-(void)setMaximumTrackVisualProvider:(id)arg1 ;
@end

