/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXComponentView, NSDate;

@interface SXComponentExposureTracking : NSObject {

	SXComponentView* _componentView;
	unsigned long long _traits;
	/*^block*/id _exposureStateChangeBlock;
	/*^block*/id _conditionBlock;
	double _visibilityFactor;
	double _minimumVisibleY;
	double _maximumVisibleY;
	long long _lastObservedVisibilityState;
	NSDate* _lastStateChange;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) unsigned long long traits;                           //@synthesize traits=_traits - In the implementation block
@property (nonatomic,copy,readonly) id exposureStateChangeBlock;                    //@synthesize exposureStateChangeBlock=_exposureStateChangeBlock - In the implementation block
@property (nonatomic,copy,readonly) id conditionBlock;                              //@synthesize conditionBlock=_conditionBlock - In the implementation block
@property (nonatomic,readonly) double visibilityFactor;                             //@synthesize visibilityFactor=_visibilityFactor - In the implementation block
@property (assign,nonatomic) double minimumVisibleY;                                //@synthesize minimumVisibleY=_minimumVisibleY - In the implementation block
@property (assign,nonatomic) double maximumVisibleY;                                //@synthesize maximumVisibleY=_maximumVisibleY - In the implementation block
@property (assign,nonatomic) long long lastObservedVisibilityState;                 //@synthesize lastObservedVisibilityState=_lastObservedVisibilityState - In the implementation block
@property (nonatomic,readonly) NSDate * lastStateChange;                            //@synthesize lastStateChange=_lastStateChange - In the implementation block
+(id)exposureTrackingWithComponent:(id)arg1 traits:(unsigned long long)arg2 exposureStateChangeBlock:(/*^block*/id)arg3 conditionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)traits;
-(SXComponentView *)componentView;
-(id)initWithComponent:(id)arg1 traits:(unsigned long long)arg2 exposureStateChangeBlock:(/*^block*/id)arg3 conditionBlock:(/*^block*/id)arg4 ;
-(void)calculateVisibilityFactor;
-(double)maximumVisibleY;
-(double)minimumVisibleY;
-(void)setMinimumVisibleY:(double)arg1 ;
-(void)setMaximumVisibleY:(double)arg1 ;
-(void)setLastObservedVisibilityState:(long long)arg1 ;
-(id)exposureStateChangeBlock;
-(id)conditionBlock;
-(double)visibilityFactor;
-(long long)lastObservedVisibilityState;
-(NSDate *)lastStateChange;
@end

