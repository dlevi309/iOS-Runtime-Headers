/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXComponentView;

@interface SXComponentExposureTracking : NSObject {

	SXComponentView* _componentView;
	/*^block*/id _exposureStateChangeBlock;
	/*^block*/id _conditionBlock;
	double _visibilityFactor;
	double _minimumVisibleY;
	double _maximumVisibleY;
	long long _lastObservedVisibilityState;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,copy,readonly) id exposureStateChangeBlock;                    //@synthesize exposureStateChangeBlock=_exposureStateChangeBlock - In the implementation block
@property (nonatomic,copy,readonly) id conditionBlock;                              //@synthesize conditionBlock=_conditionBlock - In the implementation block
@property (nonatomic,readonly) double visibilityFactor;                             //@synthesize visibilityFactor=_visibilityFactor - In the implementation block
@property (assign,nonatomic) double minimumVisibleY;                                //@synthesize minimumVisibleY=_minimumVisibleY - In the implementation block
@property (assign,nonatomic) double maximumVisibleY;                                //@synthesize maximumVisibleY=_maximumVisibleY - In the implementation block
@property (assign,nonatomic) long long lastObservedVisibilityState;                 //@synthesize lastObservedVisibilityState=_lastObservedVisibilityState - In the implementation block
+(id)exposureTrackingWithComponent:(id)arg1 exposureStateChangeBlock:(/*^block*/id)arg2 conditionBlock:(/*^block*/id)arg3 ;
-(SXComponentView *)componentView;
-(id)initWithComponent:(id)arg1 exposureStateChangeBlock:(/*^block*/id)arg2 conditionBlock:(/*^block*/id)arg3 ;
-(void)calculateVisibilityFactor;
-(double)maximumVisibleY;
-(double)minimumVisibleY;
-(void)setMinimumVisibleY:(double)arg1 ;
-(void)setMaximumVisibleY:(double)arg1 ;
-(id)exposureStateChangeBlock;
-(id)conditionBlock;
-(double)visibilityFactor;
-(long long)lastObservedVisibilityState;
-(void)setLastObservedVisibilityState:(long long)arg1 ;
@end

