/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)settingsControllerModule;
+(id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
-(void)setDefaultValues;
-(double)bottomEdgeRegionSize;
-(double)edgeRegionSize;
-(double)hysteresis;
-(double)edgeAngleWindow;
-(double)edgeAngleWindowDecayTime;
-(double)maximumSwipeDuration;
-(void)setBottomEdgeRegionSize:(double)arg1 ;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setEdgeAngleWindowDecayTime:(double)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setHysteresis:(double)arg1 ;
-(void)setMaximumSwipeDuration:(double)arg1 ;
-(double)edgeAngleWindowDegreees;
-(void)setEdgeAngleWindowDegreees:(double)arg1 ;
@end

