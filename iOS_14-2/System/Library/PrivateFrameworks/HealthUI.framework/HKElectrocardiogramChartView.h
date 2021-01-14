/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKElectrocardiogramGridView, HKElectrocardiogramWaveformView, UIView, HKElectrocardiogram, NSArray, UIColor;

@interface HKElectrocardiogramChartView : UIView {

	BOOL _edgeMaskEnabled;
	BOOL _allowsScrolling;
	HKElectrocardiogramGridView* _gridView;
	HKElectrocardiogramWaveformView* _waveformView;
	UIView* _waveformContainerView;
	HKElectrocardiogram* _sample;
	CGSize _lastSize;

}

@property (nonatomic,retain) HKElectrocardiogramGridView * gridView;                                  //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,retain) HKElectrocardiogramWaveformView * waveformView;                          //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) UIView * waveformContainerView;                                          //@synthesize waveformContainerView=_waveformContainerView - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample;                                            //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL allowsScrolling;                                                    //@synthesize allowsScrolling=_allowsScrolling - In the implementation block
@property (assign,nonatomic) CGSize lastSize;                                                         //@synthesize lastSize=_lastSize - In the implementation block
@property (nonatomic,readonly) CGSize gridSize; 
@property (nonatomic,copy,readonly) NSArray * gridOptions; 
@property (nonatomic,readonly) double pointsPerSecond; 
@property (nonatomic,readonly) double pointsPerMillivolt; 
@property (assign,nonatomic) double lineWidth; 
@property (nonatomic,retain) UIColor * lineColor; 
@property (assign,getter=isDisplayingControlSignal,nonatomic) BOOL displayControlSignal; 
@property (nonatomic,readonly) double controlSignalDuration; 
@property (assign,getter=isEdgeMaskEnabled,nonatomic) BOOL edgeMaskEnabled;                           //@synthesize edgeMaskEnabled=_edgeMaskEnabled - In the implementation block
+(id)defaultGridOptions;
+(id)printedGridOptions;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(HKElectrocardiogramGridView *)gridView;
-(void)setAllowsScrolling:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(HKElectrocardiogram *)sample;
-(BOOL)allowsScrolling;
-(void)layoutSubviews;
-(void)setGridView:(HKElectrocardiogramGridView *)arg1 ;
-(UIColor *)lineColor;
-(CGSize)lastSize;
-(void)setLineColor:(UIColor *)arg1 ;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(CGSize)gridSize;
-(void)_setUpUI;
-(HKElectrocardiogramWaveformView *)waveformView;
-(void)setLastSize:(CGSize)arg1 ;
-(void)setWaveformView:(HKElectrocardiogramWaveformView *)arg1 ;
-(id)initWithGridSize:(CGSize)arg1 ;
-(void)displayElectrocardiogram:(id)arg1 allowsScrolling:(BOOL)arg2 ;
-(void)setEdgeMaskEnabled:(BOOL)arg1 ;
-(double)pointsPerSecond;
-(NSArray *)gridOptions;
-(id)initWithGridSize:(CGSize)arg1 gridOptions:(id)arg2 ;
-(UIView *)waveformContainerView;
-(double)pointsPerMillivolt;
-(double)controlSignalDuration;
-(BOOL)isEdgeMaskEnabled;
-(void)_updateChartForSizeChange;
-(void)setWaveformPaths:(id)arg1 ;
-(BOOL)isDisplayingControlSignal;
-(void)setDisplayControlSignal:(BOOL)arg1 ;
-(void)setWaveformPath:(id)arg1 ;
-(void)setWaveformContainerView:(UIView *)arg1 ;
@end

