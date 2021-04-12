/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPanGestureRecognizer.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>

@class _UISEGestureFeatureSettings, _UISEMuxGestureFeature, NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate> {

	_UISEGestureFeatureSettings* _settings;
	/*^block*/id _createFeatureBlock;
	_UISEMuxGestureFeature* _rootFeature;
	unsigned long long _touchedEdges;
	unsigned long long _edges;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(void)featureDidChangeState:(id)arg1 ;
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)_setHysteresis:(double)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(double)_bottomEdgeAngleWindow;
-(double)_bottomEdgeRegionSize;
-(double)_edgeRegionSize;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)_setBottomEdgeAngleWindow:(double)arg1 ;
-(void)_setBottomEdgeRegionSize:(double)arg1 ;
-(void)_setEdgeRegionSize:(double)arg1 ;
@end

