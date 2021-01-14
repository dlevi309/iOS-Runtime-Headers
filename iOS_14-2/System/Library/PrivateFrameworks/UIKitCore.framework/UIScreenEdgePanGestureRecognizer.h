/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_edgeRegionSize;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(unsigned long long)touchedEdges;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_setBottomEdgeAngleWindow:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)_setEdgeRegionSize:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)edges;
-(double)_bottomEdgeRegionSize;
-(id)debugDictionary;
-(double)_bottomEdgeAngleWindow;
-(long long)_touchInterfaceOrientation;
-(void)featureDidChangeState:(id)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)_setHysteresis:(double)arg1 ;
-(void)_setBottomEdgeRegionSize:(double)arg1 ;
@end

