/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeatureSettings.h>

@protocol _UISEGestureFeatureSettings
@property (nonatomic,readonly) double bottomEdgeAngleWindow; 
@property (nonatomic,readonly) double bottomEdgeRegionSize; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double cornerAngleWindow; 
@property (nonatomic,readonly) double edgeAngleWindow; 
@property (nonatomic,readonly) double edgeAngleWindowDecayTime; 
@property (nonatomic,readonly) double edgeRegionSize; 
@property (nonatomic,readonly) double hysteresis; 
@property (nonatomic,readonly) unsigned long long interfaceBottomEdge; 
@property (nonatomic,readonly) unsigned long long minimumNumberOfSubfeatures; 
@property (nonatomic,readonly) double maximumSwipeDuration; 
@property (nonatomic,readonly) unsigned long long targetEdges; 
@required
-(CGRect)bounds;
-(double)bottomEdgeRegionSize;
-(double)hysteresis;
-(unsigned long long)interfaceBottomEdge;
-(unsigned long long)minimumNumberOfSubfeatures;
-(double)edgeAngleWindow;
-(double)edgeAngleWindowDecayTime;
-(double)edgeRegionSize;
-(double)bottomEdgeAngleWindow;
-(unsigned long long)targetEdges;
-(double)maximumSwipeDuration;
-(double)cornerAngleWindow;

@end


@interface _UISEGestureFeatureSettings : NSObject <_UISEGestureFeatureSettings> {

	double _bottomEdgeAngleWindow;
	double _bottomEdgeRegionSize;
	double _cornerAngleWindow;
	double _edgeAngleWindow;
	double _edgeAngleWindowDecayTime;
	double _edgeRegionSize;
	double _hysteresis;
	unsigned long long _interfaceBottomEdge;
	unsigned long long _minimumNumberOfSubfeatures;
	double _maximumSwipeDuration;
	unsigned long long _targetEdges;
	CGRect _bounds;

}

@property (assign,nonatomic) double bottomEdgeAngleWindow;                               //@synthesize bottomEdgeAngleWindow=_bottomEdgeAngleWindow - In the implementation block
@property (assign,nonatomic) double bottomEdgeRegionSize;                                //@synthesize bottomEdgeRegionSize=_bottomEdgeRegionSize - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                              //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double cornerAngleWindow;                                   //@synthesize cornerAngleWindow=_cornerAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindow;                                     //@synthesize edgeAngleWindow=_edgeAngleWindow - In the implementation block
@property (assign,nonatomic) double edgeAngleWindowDecayTime;                            //@synthesize edgeAngleWindowDecayTime=_edgeAngleWindowDecayTime - In the implementation block
@property (assign,nonatomic) double edgeRegionSize;                                      //@synthesize edgeRegionSize=_edgeRegionSize - In the implementation block
@property (assign,nonatomic) double hysteresis;                                          //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceBottomEdge;                     //@synthesize interfaceBottomEdge=_interfaceBottomEdge - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfSubfeatures;              //@synthesize minimumNumberOfSubfeatures=_minimumNumberOfSubfeatures - In the implementation block
@property (assign,nonatomic) double maximumSwipeDuration;                                //@synthesize maximumSwipeDuration=_maximumSwipeDuration - In the implementation block
@property (assign,nonatomic) unsigned long long targetEdges;                             //@synthesize targetEdges=_targetEdges - In the implementation block
-(CGRect)bounds;
-(id)init;
-(double)bottomEdgeRegionSize;
-(double)hysteresis;
-(unsigned long long)interfaceBottomEdge;
-(void)setMaximumSwipeDuration:(double)arg1 ;
-(void)setTargetEdges:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfSubfeatures;
-(double)edgeAngleWindow;
-(void)setBounds:(CGRect)arg1 ;
-(void)setEdgeAngleWindow:(double)arg1 ;
-(void)setBottomEdgeRegionSize:(double)arg1 ;
-(void)setMinimumNumberOfSubfeatures:(unsigned long long)arg1 ;
-(double)edgeAngleWindowDecayTime;
-(void)setInterfaceBottomEdge:(unsigned long long)arg1 ;
-(double)edgeRegionSize;
-(double)bottomEdgeAngleWindow;
-(unsigned long long)targetEdges;
-(void)setHysteresis:(double)arg1 ;
-(void)setEdgeRegionSize:(double)arg1 ;
-(void)setBottomEdgeAngleWindow:(double)arg1 ;
-(void)setEdgeAngleWindowDecayTime:(double)arg1 ;
-(double)maximumSwipeDuration;
-(double)cornerAngleWindow;
-(void)setCornerAngleWindow:(double)arg1 ;
@end

