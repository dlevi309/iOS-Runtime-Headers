/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HKDateCacheObserver.h>

@class HKElectrocardiogram, HKDateCache, HKRoundedHeaderView, UIView, UIImageView, UILabel, HKElectrocardiogramChartView, NSLayoutConstraint, NSArray, NSString;

@interface HKElectrocardiogramCardView : UIView <HKDateCacheObserver> {

	BOOL _onboarding;
	HKElectrocardiogram* _sample;
	HKDateCache* _dateCache;
	HKRoundedHeaderView* _headerView;
	UIView* _cellBackgroundView;
	UIImageView* _heartImageView;
	UILabel* _averageHeartRateLabel;
	UILabel* _symptomsLabel;
	HKElectrocardiogramChartView* _graphView;
	NSLayoutConstraint* _averageHeartRateLabelFirstBaselineConstraint;
	NSLayoutConstraint* _averageHeartRateLabelWidthConstraint;
	NSLayoutConstraint* _symptomsLabelFirstBaselineConstraint;
	NSLayoutConstraint* _graphTopConstraint;
	NSLayoutConstraint* _heartImageViewHeightConstraint;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (assign,nonatomic,__weak) HKDateCache * dateCache;                                                 //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,getter=isOnboarding,nonatomic) BOOL onboarding;                                            //@synthesize onboarding=_onboarding - In the implementation block
@property (nonatomic,retain) HKRoundedHeaderView * headerView;                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * cellBackgroundView;                                                    //@synthesize cellBackgroundView=_cellBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * heartImageView;                                                   //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) UILabel * averageHeartRateLabel;                                                //@synthesize averageHeartRateLabel=_averageHeartRateLabel - In the implementation block
@property (nonatomic,retain) UILabel * symptomsLabel;                                                        //@synthesize symptomsLabel=_symptomsLabel - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramChartView * graphView;                                       //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * averageHeartRateLabelFirstBaselineConstraint;              //@synthesize averageHeartRateLabelFirstBaselineConstraint=_averageHeartRateLabelFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * averageHeartRateLabelWidthConstraint;                      //@synthesize averageHeartRateLabelWidthConstraint=_averageHeartRateLabelWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * symptomsLabelFirstBaselineConstraint;                      //@synthesize symptomsLabelFirstBaselineConstraint=_symptomsLabelFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * graphTopConstraint;                                        //@synthesize graphTopConstraint=_graphTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartImageViewHeightConstraint;                            //@synthesize heartImageViewHeightConstraint=_heartImageViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                                   //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                                                 //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample;                                                   //@synthesize sample=_sample - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)estimatedHeight;
+(double)_graphHeight;
+(double)_headerBottomToAverageHeartRateBaseline;
+(double)_averageHeartRateBaselineToGraphTop;
+(double)_graphBottomToCardBottom;
+(id)_averageHeartRateSymptomsFont;
+(id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)arg1 ;
+(double)_averageHeartRateBaselineToSymptomBaseline;
+(id)_accessibilityContentSizeCategory;
+(id)_averageHeartRateSymptomsTextStyle;
+(id)_averageHeartRateSymptomsBoldFont;
-(void)dealloc;
-(HKDateCache *)dateCache;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(HKRoundedHeaderView *)headerView;
-(void)setHeaderView:(HKRoundedHeaderView *)arg1 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(void)_updateUI;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(NSArray *)regularConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)_setupConstraints;
-(void)_setupUI;
-(HKElectrocardiogramChartView *)graphView;
-(void)setGraphView:(HKElectrocardiogramChartView *)arg1 ;
-(id)_cardBackgroundColor;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2 ;
-(id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(NSLayoutConstraint *)heartImageViewHeightConstraint;
-(void)setHeartImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_setUpGraph;
-(id)_cardHeaderColor;
-(void)setCellBackgroundView:(UIView *)arg1 ;
-(UIView *)cellBackgroundView;
-(void)setHeartImageView:(UIImageView *)arg1 ;
-(UIImageView *)heartImageView;
-(void)setAverageHeartRateLabel:(UILabel *)arg1 ;
-(UILabel *)averageHeartRateLabel;
-(void)setSymptomsLabel:(UILabel *)arg1 ;
-(UILabel *)symptomsLabel;
-(void)setAverageHeartRateLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)averageHeartRateLabelFirstBaselineConstraint;
-(void)setAverageHeartRateLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)averageHeartRateLabelWidthConstraint;
-(void)setSymptomsLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)symptomsLabelFirstBaselineConstraint;
-(id)_chevronColor;
-(id)_graphBackgroundColor;
-(BOOL)_isLayingOutForAccessibility;
-(NSLayoutConstraint *)graphTopConstraint;
-(void)setGraphTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateTextConstraints;
-(void)_updateGraphTopConstraint;
-(BOOL)isOnboarding;
-(void)setOnboarding:(BOOL)arg1 ;
@end

