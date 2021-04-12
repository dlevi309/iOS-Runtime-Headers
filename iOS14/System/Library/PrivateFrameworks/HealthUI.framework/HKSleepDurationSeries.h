/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@class UIImage, NSArray, HKStrokeStyle, HKLineSeriesPointMarkerStyle;

@interface HKSleepDurationSeries : HKBarSeries {

	UIImage* _goalLineMarkerImage;
	BOOL _extendGoalLineToAxis;
	BOOL _hideInBedData;
	BOOL _hideAsleepData;
	NSArray* _defaultFillStyles;
	NSArray* _highlightedFillStyles;
	NSArray* _inactiveFillStyles;
	HKStrokeStyle* _goalLineStrokeStyle;
	HKLineSeriesPointMarkerStyle* _goalLineMarkerStyle;
	/*^block*/id _startOfDayTransform;

}

@property (nonatomic,copy) NSArray * defaultFillStyles;                                       //@synthesize defaultFillStyles=_defaultFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * highlightedFillStyles;                                   //@synthesize highlightedFillStyles=_highlightedFillStyles - In the implementation block
@property (nonatomic,copy) NSArray * inactiveFillStyles;                                      //@synthesize inactiveFillStyles=_inactiveFillStyles - In the implementation block
@property (nonatomic,copy) HKStrokeStyle * goalLineStrokeStyle;                               //@synthesize goalLineStrokeStyle=_goalLineStrokeStyle - In the implementation block
@property (nonatomic,retain) HKLineSeriesPointMarkerStyle * goalLineMarkerStyle;              //@synthesize goalLineMarkerStyle=_goalLineMarkerStyle - In the implementation block
@property (assign,nonatomic) BOOL extendGoalLineToAxis;                                       //@synthesize extendGoalLineToAxis=_extendGoalLineToAxis - In the implementation block
@property (nonatomic,copy) id startOfDayTransform;                                            //@synthesize startOfDayTransform=_startOfDayTransform - In the implementation block
@property (assign,nonatomic) BOOL hideInBedData;                                              //@synthesize hideInBedData=_hideInBedData - In the implementation block
@property (assign,nonatomic) BOOL hideAsleepData;                                             //@synthesize hideAsleepData=_hideAsleepData - In the implementation block
-(void)clearCaches;
-(id)init;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK12)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(BOOL)supportsMultiTouchSelection;
-(id)_stringForDuration:(double)arg1 ;
-(void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(CGAffineTransform)arg3 context:(CGContextRef)arg4 axisRect:(CGRect)arg5 ;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(CGRect)arg4 context:(CGContextRef)arg5 ;
-(void)_rebuildPointMarkerImages;
-(HKLineSeriesPointMarkerStyle *)goalLineMarkerStyle;
-(NSArray *)defaultFillStyles;
-(NSArray *)highlightedFillStyles;
-(NSArray *)inactiveFillStyles;
-(BOOL)_currentGoal:(id)arg1 differentFrom:(id)arg2 ;
-(HKStrokeStyle *)goalLineStrokeStyle;
-(BOOL)extendGoalLineToAxis;
-(void)_drawGoalLinePath:(id)arg1 context:(CGContextRef)arg2 ;
-(void)_drawGoalLineMarkers:(id)arg1 context:(CGContextRef)arg2 ;
-(void)_addGoalAnnotationAtLocation:(double)arg1 ;
-(void)_addAnnotationForValue:(double)arg1 ;
-(BOOL)_dataIsHidden:(long long)arg1 ;
-(BOOL)hideAsleepData;
-(BOOL)hideInBedData;
-(id)_durationShortFormatter;
-(id)_durationAbbreviatedFormatter;
-(void)setGoalLineMarkerStyle:(HKLineSeriesPointMarkerStyle *)arg1 ;
-(void)setDefaultFillStyles:(NSArray *)arg1 ;
-(void)setHighlightedFillStyles:(NSArray *)arg1 ;
-(void)setInactiveFillStyles:(NSArray *)arg1 ;
-(void)setGoalLineStrokeStyle:(HKStrokeStyle *)arg1 ;
-(void)setExtendGoalLineToAxis:(BOOL)arg1 ;
-(id)startOfDayTransform;
-(void)setStartOfDayTransform:(id)arg1 ;
-(void)setHideInBedData:(BOOL)arg1 ;
-(void)setHideAsleepData:(BOOL)arg1 ;
@end

