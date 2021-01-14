/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WAAQIViewDelegate;
@class UILabel, WAAQIScaleView, WAAQIViewStyler, City, WAAQIAttributionStringBuilder;

@interface WAAQIView : UIView {

	BOOL _hideCitationString;
	BOOL _hideRecommendationString;
	BOOL _forceHideThisEntireView;
	BOOL _initialized;
	id<WAAQIViewDelegate> _delegate;
	UILabel* _aqiLabel;
	UILabel* _aqiIndexLabel;
	UILabel* _aqiAgencyLabel;
	UILabel* _dash;
	WAAQIScaleView* _aqiScaleView;
	UILabel* _aqiCategoryLabel;
	UILabel* _airQualityMetadataGradeLabel;
	UILabel* _airQualityRecommendationLabel;
	UILabel* _aqiCitationLabel;
	WAAQIViewStyler* _styler;
	City* _city;
	WAAQIAttributionStringBuilder* _attributionStringBuilder;
	unsigned long long _layoutMode;

}

@property (nonatomic,retain) UILabel * aqiLabel;                                                    //@synthesize aqiLabel=_aqiLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiIndexLabel;                                               //@synthesize aqiIndexLabel=_aqiIndexLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiAgencyLabel;                                              //@synthesize aqiAgencyLabel=_aqiAgencyLabel - In the implementation block
@property (nonatomic,retain) UILabel * dash;                                                        //@synthesize dash=_dash - In the implementation block
@property (nonatomic,retain) WAAQIScaleView * aqiScaleView;                                         //@synthesize aqiScaleView=_aqiScaleView - In the implementation block
@property (nonatomic,retain) UILabel * aqiCategoryLabel;                                            //@synthesize aqiCategoryLabel=_aqiCategoryLabel - In the implementation block
@property (nonatomic,retain) UILabel * airQualityMetadataGradeLabel;                                //@synthesize airQualityMetadataGradeLabel=_airQualityMetadataGradeLabel - In the implementation block
@property (nonatomic,retain) UILabel * airQualityRecommendationLabel;                               //@synthesize airQualityRecommendationLabel=_airQualityRecommendationLabel - In the implementation block
@property (nonatomic,retain) UILabel * aqiCitationLabel;                                            //@synthesize aqiCitationLabel=_aqiCitationLabel - In the implementation block
@property (nonatomic,retain) WAAQIViewStyler * styler;                                              //@synthesize styler=_styler - In the implementation block
@property (nonatomic,retain) City * city;                                                           //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) WAAQIAttributionStringBuilder * attributionStringBuilder;              //@synthesize attributionStringBuilder=_attributionStringBuilder - In the implementation block
@property (assign,nonatomic) BOOL hideCitationString;                                               //@synthesize hideCitationString=_hideCitationString - In the implementation block
@property (assign,nonatomic) BOOL hideRecommendationString;                                         //@synthesize hideRecommendationString=_hideRecommendationString - In the implementation block
@property (assign,nonatomic) BOOL forceHideThisEntireView;                                          //@synthesize forceHideThisEntireView=_forceHideThisEntireView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                         //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                      //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic,__weak) id<WAAQIViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
+(id)createWeatherLabelWithLightColor:(BOOL)arg1 ;
-(WAAQIViewStyler *)styler;
-(void)initialize;
-(id)accessibilityLabel;
-(City *)city;
-(void)setAqiScaleView:(WAAQIScaleView *)arg1 ;
-(void)setCity:(City *)arg1 ;
-(double)contentMarginFromTop;
-(void)hideEverything;
-(BOOL)isAccessibilityElement;
-(CGSize)sizeForLayoutWithoutScaleViewThatFits:(CGSize)arg1 ;
-(id<WAAQIViewDelegate>)delegate;
-(void)setHideCitationString:(BOOL)arg1 ;
-(UILabel *)airQualityMetadataGradeLabel;
-(CGRect)rtlAdjustFrame:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(void)setAqiCitationLabel:(UILabel *)arg1 ;
-(id)sourceForScale:(id)arg1 countryCode:(id)arg2 ;
-(void)layoutForTwoLinesLayoutWithScaleInPlatterView:(BOOL)arg1 ;
-(UILabel *)airQualityRecommendationLabel;
-(void)handleTapGesture:(id)arg1 ;
-(CGSize)sizeForExtendedLayoutWithScaleViewThatFits:(CGSize)arg1 ;
-(CGSize)sizeForCompactOneLineLayoutWithScaleViewThatFits:(CGSize)arg1 platterView:(BOOL)arg2 ;
-(BOOL)accessibilityElementsHidden;
-(CGSize)sizeForAQITemporarilyUnavailableThatFits:(CGSize)arg1 ;
-(void)layoutForCompactModeWithScaleInPlatterView:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setAirQualityRecommendationLabel:(UILabel *)arg1 ;
-(void)updateWithCity:(id)arg1 layoutMode:(unsigned long long)arg2 ;
-(BOOL)initialized;
-(void)setAqiAgencyLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<WAAQIViewDelegate>)arg1 ;
-(UILabel *)aqiLabel;
-(BOOL)forceHideThisEntireView;
-(void)layoutSubviews;
-(void)setAttributionStringBuilder:(WAAQIAttributionStringBuilder *)arg1 ;
-(void)layoutForModeWithoutScale;
-(id)accessibilityValue;
-(void)setupForLayoutTemporarilyUnavailable;
-(void)layoutForExtendedModeWithScale;
-(BOOL)hideCitationString;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAqiLabel:(UILabel *)arg1 ;
-(WAAQIScaleView *)aqiScaleView;
-(UILabel *)aqiCategoryLabel;
-(UILabel *)dash;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)setupForLayoutExtendedNoScaleView;
-(void)setAqiIndexLabel:(UILabel *)arg1 ;
-(void)setAqiCategoryLabel:(UILabel *)arg1 ;
-(void)layoutForModeAQITemporarilyUnavailable;
-(void)setupForLayoutCompactScaleViewOneLinePlatterView:(BOOL)arg1 ;
-(CGSize)sizeForAQIAvailableThatFits:(CGSize)arg1 ;
-(UILabel *)aqiCitationLabel;
-(void)setupForLayoutCompactScaleViewTwoLinesPlatterView:(BOOL)arg1 ;
-(unsigned long long)layoutMode;
-(id)scaleFromScaleIdentifier:(id)arg1 countryCode:(id)arg2 ;
-(void)setHideRecommendationString:(BOOL)arg1 ;
-(void)setAirQualityMetadataGradeLabel:(UILabel *)arg1 ;
-(void)setDash:(UILabel *)arg1 ;
-(void)setStyler:(WAAQIViewStyler *)arg1 ;
-(UILabel *)aqiIndexLabel;
-(void)setInitialized:(BOOL)arg1 ;
-(UILabel *)aqiAgencyLabel;
-(void)setupForLayoutExtendedScaleView;
-(void)setForceHideThisEntireView:(BOOL)arg1 ;
-(CGSize)sizeForTwoLineLayoutWithScaleViewTheFits:(CGSize)arg1 platterView:(BOOL)arg2 ;
-(CGRect)adjustedFrame:(CGRect)arg1 basedOnFont:(id)arg2 desiredBaseline:(double)arg3 ;
-(WAAQIAttributionStringBuilder *)attributionStringBuilder;
-(BOOL)hideRecommendationString;
@end

