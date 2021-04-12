/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusFastScrollingTouchSequence : NSObject {

	BOOL _didReceiveSpatialFocusUpdate;
	BOOL _didReceiveProgrammaticFocusUpdate;
	double _peakSpeed;
	CGPoint _startLocation;
	CGPoint _previousLocation;
	CGPoint _endLocation;
	CGVector _axisLockedDistanceAccumulator;

}

@property (assign,nonatomic) CGPoint startLocation;                               //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) CGPoint previousLocation;                            //@synthesize previousLocation=_previousLocation - In the implementation block
@property (assign,nonatomic) CGPoint endLocation;                                 //@synthesize endLocation=_endLocation - In the implementation block
@property (assign,nonatomic) double peakSpeed;                                    //@synthesize peakSpeed=_peakSpeed - In the implementation block
@property (assign,nonatomic) CGVector axisLockedDistanceAccumulator;              //@synthesize axisLockedDistanceAccumulator=_axisLockedDistanceAccumulator - In the implementation block
@property (assign,nonatomic) BOOL didReceiveSpatialFocusUpdate;                   //@synthesize didReceiveSpatialFocusUpdate=_didReceiveSpatialFocusUpdate - In the implementation block
@property (assign,nonatomic) BOOL didReceiveProgrammaticFocusUpdate;              //@synthesize didReceiveProgrammaticFocusUpdate=_didReceiveProgrammaticFocusUpdate - In the implementation block
-(double)peakSpeed;
-(CGPoint)endLocation;
-(void)setEndLocation:(CGPoint)arg1 ;
-(CGPoint)startLocation;
-(void)setStartLocation:(CGPoint)arg1 ;
-(CGPoint)previousLocation;
-(void)setPreviousLocation:(CGPoint)arg1 ;
-(CGVector)axisLockedDistanceAccumulator;
-(void)setAxisLockedDistanceAccumulator:(CGVector)arg1 ;
-(BOOL)didReceiveSpatialFocusUpdate;
-(void)setDidReceiveSpatialFocusUpdate:(BOOL)arg1 ;
-(BOOL)didReceiveProgrammaticFocusUpdate;
-(void)setDidReceiveProgrammaticFocusUpdate:(BOOL)arg1 ;
-(void)setPeakSpeed:(double)arg1 ;
@end

