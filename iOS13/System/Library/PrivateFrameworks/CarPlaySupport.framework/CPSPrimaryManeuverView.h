/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSAbridgableLabel, UIImageView, CPSAspectFitImageView, NSArray, UILayoutGuide, CPSPrimaryManeuverLayoutConfiguration, CPManeuver, CPTravelEstimates, UIView;

@interface CPSPrimaryManeuverView : UIView {

	BOOL _usesCustomBackgroundColor;
	BOOL _calculationViewIsSizing;
	CPSAbridgableLabel* _titleLabel;
	CPSAbridgableLabel* _subtitleLabel;
	UIImageView* _symbolImageView;
	CPSAspectFitImageView* _junctionImageView;
	NSArray* _activeLayoutConstraints;
	UILayoutGuide* _labelCenteringLayoutGuide;
	UILayoutGuide* _yCenteringGuide;
	UILayoutGuide* _centeringLayoutGuide;
	CPSPrimaryManeuverLayoutConfiguration* _activeLayoutConfiguration;
	CPManeuver* _maneuver;
	CPTravelEstimates* _currentTravelEstimates;
	NSArray* _layoutConfigurations;
	double _generatedWidth;
	UIView* _junctionImageBackgroundView;

}

@property (assign,nonatomic) BOOL calculationViewIsSizing;                                                   //@synthesize calculationViewIsSizing=_calculationViewIsSizing - In the implementation block
@property (assign,nonatomic) double generatedWidth;                                                          //@synthesize generatedWidth=_generatedWidth - In the implementation block
@property (nonatomic,retain) UIView * junctionImageBackgroundView;                                           //@synthesize junctionImageBackgroundView=_junctionImageBackgroundView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * subtitleLabel;                                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * symbolImageView;                                                  //@synthesize symbolImageView=_symbolImageView - In the implementation block
@property (nonatomic,retain) CPSAspectFitImageView * junctionImageView;                                      //@synthesize junctionImageView=_junctionImageView - In the implementation block
@property (nonatomic,retain) NSArray * activeLayoutConstraints;                                              //@synthesize activeLayoutConstraints=_activeLayoutConstraints - In the implementation block
@property (nonatomic,retain) UILayoutGuide * labelCenteringLayoutGuide;                                      //@synthesize labelCenteringLayoutGuide=_labelCenteringLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * yCenteringGuide;                                                //@synthesize yCenteringGuide=_yCenteringGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * centeringLayoutGuide;                                           //@synthesize centeringLayoutGuide=_centeringLayoutGuide - In the implementation block
@property (nonatomic,retain) CPSPrimaryManeuverLayoutConfiguration * activeLayoutConfiguration;              //@synthesize activeLayoutConfiguration=_activeLayoutConfiguration - In the implementation block
@property (nonatomic,readonly) CPManeuver * maneuver;                                                        //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * currentTravelEstimates;                                     //@synthesize currentTravelEstimates=_currentTravelEstimates - In the implementation block
@property (nonatomic,retain) NSArray * layoutConfigurations;                                                 //@synthesize layoutConfigurations=_layoutConfigurations - In the implementation block
@property (assign,nonatomic) BOOL usesCustomBackgroundColor;                                                 //@synthesize usesCustomBackgroundColor=_usesCustomBackgroundColor - In the implementation block
-(id)_init;
-(CGSize)intrinsicContentSize;
-(CPSAbridgableLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleFont;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(id)_subtitleFont;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)subtitleLabel;
-(CPManeuver *)maneuver;
-(UIImageView *)symbolImageView;
-(void)setSymbolImageView:(UIImageView *)arg1 ;
-(id)_minimalLayoutConstraints;
-(BOOL)centersManeuverInView;
-(double)symbolImageHeight;
-(BOOL)hasJunctionImageBackground;
-(id)junctionBackgroundColor;
-(BOOL)fitJunctionViewToHeight;
-(id)initWithManeuver:(id)arg1 ;
-(id)shortestJunctionViewlayoutConfigurationForSize:(CGSize)arg1 ;
-(id)layoutConfigurationForSize:(CGSize)arg1 ;
-(id)shortestInstructionlayoutConfigurationForSize:(CGSize)arg1 ;
-(void)setCurrentTravelEstimates:(CPTravelEstimates *)arg1 ;
-(void)_updateJunctionBackgroundColor;
-(void)_updateSubtitleTextColor;
-(void)_generateLayoutConfigurationsForSizeIfNecessary:(CGSize)arg1 force:(BOOL)arg2 ;
-(NSArray *)layoutConfigurations;
-(id)_formattedDistance;
-(CPSPrimaryManeuverLayoutConfiguration *)activeLayoutConfiguration;
-(BOOL)calculationViewIsSizing;
-(void)_switchToLayoutConfiguration:(id)arg1 ;
-(double)generatedWidth;
-(void)setCalculationViewIsSizing:(BOOL)arg1 ;
-(void)setGeneratedWidth:(double)arg1 ;
-(CPSAspectFitImageView *)junctionImageView;
-(void)_activateFullLayoutWideImageConstraints;
-(void)_activateFullLayoutConstraints;
-(void)_activateJunctionViewNoInstructionWideImageConstraints;
-(void)_activateJunctionViewNoInstructionConstraints;
-(void)_activateFullNoJunctionViewWideImageLayoutConstraints;
-(void)_activateFullNoJunctionViewLayoutConstraints;
-(void)_activateFullSubtitleNextToImageConstraints;
-(void)_activateMinimalWideImageLayoutConstraints;
-(void)_activateMinimalLayoutConstraints;
-(long long)_compareInstruction:(id)arg1 toInstruction:(id)arg2 ;
-(void)setLayoutConfigurations:(NSArray *)arg1 ;
-(id)_fullLayoutConstraints;
-(void)setActiveLayoutConstraints:(NSArray *)arg1 ;
-(id)_fullLayoutWideImageConstraints;
-(id)_junctionViewNoInstructionConstraints;
-(id)_junctionViewNoInstructionWideImageConstraints;
-(id)_fullLayoutNoJunctionViewConstraints;
-(id)_fullLayoutNoJunctionViewWideImageConstraints;
-(id)_minimalLayoutWideImageConstraints;
-(id)_fullSubtitleNextToImageConstraints;
-(UILayoutGuide *)centeringLayoutGuide;
-(UILayoutGuide *)yCenteringGuide;
-(UILayoutGuide *)labelCenteringLayoutGuide;
-(void)setActiveLayoutConfiguration:(CPSPrimaryManeuverLayoutConfiguration *)arg1 ;
-(CPTravelEstimates *)currentTravelEstimates;
-(BOOL)usesCustomBackgroundColor;
-(UIView *)junctionImageBackgroundView;
-(void)setUsesCustomBackgroundColor:(BOOL)arg1 ;
-(void)setJunctionImageView:(CPSAspectFitImageView *)arg1 ;
-(NSArray *)activeLayoutConstraints;
-(void)setLabelCenteringLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setYCenteringGuide:(UILayoutGuide *)arg1 ;
-(void)setCenteringLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setJunctionImageBackgroundView:(UIView *)arg1 ;
@end

