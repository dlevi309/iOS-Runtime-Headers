/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class UIView, CAGradientLayer, CALayer, NTKBezierPathView, NTKSolarTimeModel, NTKSolarPath, NTKBezierPathPointModel, NSDictionary, NSNumber, CLKDevice, CLLocation, NSDate, NSString;

@interface NTKSolarRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {

	SCD_Struct_NT33 _layoutConstants;
	UIView* _backgroundView;
	CAGradientLayer* _gradientLayer;
	CALayer* _gradientAdjustmentLayer;
	UIView* _lineView;
	NTKBezierPathView* _pathView;
	NTKSolarTimeModel* _solarTimeModel;
	NTKSolarPath* _solarPath;
	NTKBezierPathPointModel* _pointModel;
	CALayer* _strokeDiskMaskLayer;
	CALayer* _strokeDiskBorderLayer;
	CALayer* _fillDiskLayer;
	CALayer* _fillDiskHaloLayer;
	CALayer* _belowHorizonLayer;
	UIView* _fillDiskHaloContainerView;
	NSDictionary* _waypoints;
	double _horizonYInCurve;
	double _sunsetXInCurve;
	CGRect _solarPathViewRect;
	double _prevDiskTimePercentage;
	NSNumber* _clockTimerToken;
	CLKDevice* _device;
	BOOL _paused;
	BOOL _solarPathNeedsUpdate;
	BOOL _usingIdealizedTime;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLLocation* _location;
	NSDate* _timeTravelDate;

}

@property (nonatomic,readonly) CLLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL usingIdealizedTime;                                          //@synthesize usingIdealizedTime=_usingIdealizedTime - In the implementation block
@property (nonatomic,retain) NSDate * timeTravelDate;                                            //@synthesize timeTravelDate=_timeTravelDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(void)dealloc;
-(CLLocation *)location;
-(void)layoutSubviews;
-(void)_didReceiveSignificantTimeChangeNotification;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(NSDate *)timeTravelDate;
-(void)_stopClockUpdates;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)_startClockUpdates;
-(void)setTimeTravelDate:(NSDate *)arg1 ;
-(void)_updateWaypoints;
-(void)updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_setSolarPathNeedsUpdate;
-(void)_didReceiveTimeZoneDidChangeNotification;
-(void)_dateDidUpdate;
-(void)_updateSolarPathWithAnimated:(BOOL)arg1 ;
-(void)_updateSolarDiskWithUsingIdealizedTime:(BOOL)arg1 forceUpdate:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateGradientBackgroundWithYPosition:(double)arg1 xPercentage:(double)arg2 topDistanceAboveHorizonLine:(double)arg3 bottomDistanceBelowHorizonLine:(double)arg4 ;
-(BOOL)usingIdealizedTime;
@end

