/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@interface PXRelaxedScreenEdgePanGestureRecognizer : UIPanGestureRecognizer {

	CGPoint _initialTouchLocation;
	unsigned long long _edges;
	double _minAngleToEdge;
	unsigned long long _trackingEdge;
	UIEdgeInsets _edgeAllowances;

}

@property (assign,nonatomic) unsigned long long trackingEdge;              //@synthesize trackingEdge=_trackingEdge - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                     //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeAllowances;                  //@synthesize edgeAllowances=_edgeAllowances - In the implementation block
@property (assign,nonatomic) double minAngleToEdge;                        //@synthesize minAngleToEdge=_minAngleToEdge - In the implementation block
@property (assign,nonatomic) double minTranslation; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinTranslation:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setEdgeAllowances:(UIEdgeInsets)arg1 ;
-(unsigned long long)edges;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(double)minAngleToEdge;
-(void)setMinAngleToEdge:(double)arg1 ;
-(void)setTrackingEdge:(unsigned long long)arg1 ;
-(double)minTranslation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(UIEdgeInsets)edgeAllowances;
-(void)setEdges:(unsigned long long)arg1 ;
-(unsigned long long)trackingEdge;
-(double)translationDistanceInView:(id)arg1 ;
@end

