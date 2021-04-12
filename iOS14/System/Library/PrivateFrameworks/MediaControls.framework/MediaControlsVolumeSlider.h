/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setMaximumTrackVisualProvider:(id)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setMinimumTrackVisualProvider:(id)arg1 ;
-(id)_thumbImageForStyle:(long long)arg1 ;
@end

