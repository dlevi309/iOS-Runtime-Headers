/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettings.h>

@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings {

	double _hysteresis;
	double _edgeRegionSize;
	double _bottomEdgeRegionSize;
	double _edgeAngleWindow;
	double _edgeAngleWindowDecayTime;
	double _maximumSwipeDuration;

}

@property (assign,nonatomic) double hysteresis;                            //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                        //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double bottomEdgeRegionSize;                  //@synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize - In the implementation block
@property (assign,nonatomic) double edgeAngleWindow;                       //@synthesize edgeAngleWindow=_edgeAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindowDegreees; 
@property (assign,nonatomic) double edgeAngleWindowDecayTime;              //@synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime - In the implementation block
@property (assign,nonatomic) double maximumSwipeDuration;                  //@synthesize maximumSwipeDuration=_maximumSwipeDuration - In the implementation block
+(id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)bottomEdgeRegionSize;
-(double)hysteresis;
-(void)setMaximumSwipeDuration:(double)arg1 ;
-(double)edgeAngleWindowDegreees;
-(void)setEdgeAngleWindowDegreees:(double)arg1 ;
-(double)edgeAngleWindow;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setBottomEdgeRegionSize:(double)arg1 ;
-(double)edgeAngleWindowDecayTime;
-(double)edgeRegionSize;
-(void)setHysteresis:(double)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setEdgeAngleWindowDecayTime:(double)arg1 ;
-(double)maximumSwipeDuration;
@end

