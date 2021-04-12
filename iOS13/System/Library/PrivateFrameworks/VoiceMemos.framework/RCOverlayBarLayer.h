/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <QuartzCore/CALayer.h>

@class CALayer, UIColor, UIImage;

@interface RCOverlayBarLayer : CALayer {

	CALayer* _topKnob;
	CALayer* _bar;
	CALayer* _bottomKnob;
	UIColor* _color;
	BOOL _barWidthMatchesKnobs;
	UIImage* _barGlyph;
	double _widthMultiplier;

}

@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * barGlyph;                     //@synthesize barGlyph=_barGlyph - In the implementation block
@property (assign,nonatomic) double widthMultiplier;                 //@synthesize widthMultiplier=_widthMultiplier - In the implementation block
@property (assign,nonatomic) BOOL barWidthMatchesKnobs;              //@synthesize barWidthMatchesKnobs=_barWidthMatchesKnobs - In the implementation block
+(double)selectionKnobRadius;
+(double)selectionBarWidth;
+(double)_internalSelectionBarWidth;
+(double)_internalSelectionKnobRadius;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSublayers;
-(double)selectionKnobRadius;
-(double)selectionBarWidth;
-(id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 widthMultiplier:(double)arg5 barWidthMatchesKnobs:(BOOL)arg6 ;
-(void)setBarGlyph:(UIImage *)arg1 ;
-(void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 ;
-(BOOL)barWidthMatchesKnobs;
-(id)barComponents;
-(UIImage *)barGlyph;
-(double)widthMultiplier;
-(void)setWidthMultiplier:(double)arg1 ;
-(void)setBarWidthMatchesKnobs:(BOOL)arg1 ;
@end

