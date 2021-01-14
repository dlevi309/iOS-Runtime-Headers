/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, UILabel, UIColor, NSArray;

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {

	NTKColoringLabel* _titleLabel;
	UILabel* _dailyHighLabel;
	UILabel* _dailyLowLabel;
	UIColor* _noDataTextColor;
	UIColor* _graphLabelAndGridColor;
	NSArray* _timeMarkerLabels;
	CGRect _cachedBounds;
	CGRect _graphRect;

}

@property (nonatomic,readonly) double timeMarkerPadding; 
@property (assign,nonatomic) CGRect cachedBounds;                             //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (assign,nonatomic) CGRect graphRect;                                //@synthesize graphRect=_graphRect - In the implementation block
@property (nonatomic,readonly) UIColor * noDataTextColor;                     //@synthesize noDataTextColor=_noDataTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * graphLabelAndGridColor;              //@synthesize graphLabelAndGridColor=_graphLabelAndGridColor - In the implementation block
@property (nonatomic,readonly) NSArray * timeMarkerLabels;                    //@synthesize timeMarkerLabels=_timeMarkerLabels - In the implementation block
@property (nonatomic,readonly) NTKColoringLabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * dailyHighLabel;                      //@synthesize dailyHighLabel=_dailyHighLabel - In the implementation block
@property (nonatomic,readonly) UILabel * dailyLowLabel;                       //@synthesize dailyLowLabel=_dailyLowLabel - In the implementation block
+(id)dailyFormattedNoData;
+(CGSize)graphSize;
-(NTKColoringLabel *)titleLabel;
-(id)init;
-(void)_addConstraints;
-(void)drawRect:(CGRect)arg1 ;
-(void)_addSubviews;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(CGRect)graphRect;
-(double)timeMarkerPadding;
-(void)_drawVerticalHourLines:(CGContextRef)arg1 rect:(CGRect)arg2 bottomLabelPadding:(double)arg3 ;
-(CGRect)drawableGraphRect;
-(void)drawGraph:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(UIColor *)noDataTextColor;
-(UILabel *)dailyHighLabel;
-(UILabel *)dailyLowLabel;
-(NSArray *)timeMarkerLabels;
-(UIColor *)graphLabelAndGridColor;
-(id)_datesForGraphInTimezone:(id)arg1 ;
-(void)_updateTimeMarkerLabelsForDates:(id)arg1 timezone:(id)arg2 ;
-(void)loadWithMetadata:(id)arg1 ;
-(double)_calculateGraphXBasedOnRect:(CGRect)arg1 constants:(SCD_Struct_NT6)arg2 ;
-(void)setGraphRect:(CGRect)arg1 ;
-(void)resetToNoDataState:(id)arg1 ;
-(double)_lineStrokeWidthGivenRect:(CGRect)arg1 ;
-(void)_applyPausedUpdate;
@end

