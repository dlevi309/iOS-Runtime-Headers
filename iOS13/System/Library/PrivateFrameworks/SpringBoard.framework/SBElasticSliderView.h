/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <MediaControls/MediaControlsVolumeSliderView.h>

@interface SBElasticSliderView : MediaControlsVolumeSliderView {

	double _additiveGlyphScaleFactor;

}

@property (assign,nonatomic) double additiveGlyphScaleFactor;              //@synthesize additiveGlyphScaleFactor=_additiveGlyphScaleFactor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAxis:(unsigned long long)arg1 ;
-(CGPoint)glyphCenter;
-(void)setAdditiveGlyphScaleFactor:(double)arg1 ;
-(double)additiveGlyphScaleFactor;
-(void)stopGlyphAnimations;
-(void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
@end

