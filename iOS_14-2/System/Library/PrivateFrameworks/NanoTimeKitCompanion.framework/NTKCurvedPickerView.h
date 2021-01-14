/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKEditOptionContainerView.h>

@class NSMutableDictionary, NSString;

@interface NTKCurvedPickerView : UIView <NTKEditOptionContainerView> {

	NSMutableDictionary* _sideViews;
	unsigned long long _activeSide;
	unsigned long long _transitioningSide;
	double _currentFraction;
	BOOL _interior;
	double _circleRadius;
	double _centerAngle;
	CGPoint _circleCenter;

}

@property (nonatomic,readonly) double circleRadius;                                  //@synthesize circleRadius=_circleRadius - In the implementation block
@property (nonatomic,readonly) double centerAngle;                                   //@synthesize centerAngle=_centerAngle - In the implementation block
@property (nonatomic,readonly) BOOL interior;                                        //@synthesize interior=_interior - In the implementation block
@property (nonatomic,readonly) CGPoint circleCenter;                                 //@synthesize circleCenter=_circleCenter - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSides; 
@property (nonatomic,readonly) unsigned long long numberOfVisibleSides; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)interior;
-(double)circleRadius;
-(double)centerAngle;
-(void)enumerateSideViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setCircleRadius:(double)arg1 centerAngle:(double)arg2 circleCenter:(CGPoint)arg3 interior:(BOOL)arg4 ;
-(void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2 ;
-(void)transitionToSideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSides;
-(id)viewForSideAtIndex:(unsigned long long)arg1 ;
-(void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfVisibleSides;
-(void)_setCurrentFraction:(double)arg1 ;
-(double)_angleForIndex:(unsigned long long)arg1 ;
-(CGAffineTransform)_transformForAngle:(double)arg1 ;
-(double)_alphaForIndex:(unsigned long long)arg1 ;
-(CGPoint)circleCenter;
@end

