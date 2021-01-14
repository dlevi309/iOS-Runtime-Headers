/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView {

	double _additiveGlyphScaleFactor;

}

@property (assign,nonatomic) double additiveGlyphScaleFactor;              //@synthesize additiveGlyphScaleFactor=_additiveGlyphScaleFactor - In the implementation block
-(void)setAxis:(unsigned long long)arg1 ;
-(id)createBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)additiveGlyphScaleFactor;
-(void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
-(void)setAdditiveGlyphScaleFactor:(double)arg1 ;
-(void)stopGlyphAnimations;
-(CGPoint)glyphCenter;
@end

