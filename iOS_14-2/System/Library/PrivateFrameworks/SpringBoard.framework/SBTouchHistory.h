/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBGestureRecognizerTouchHistoryProviding.h>

@class NSMutableArray, NSString;

@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding> {

	unsigned long long _depth;
	NSMutableArray* _locations;
	NSMutableArray* _timestamps;
	double _peakSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)peakSpeed;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(id)init;
-(void)updateWithLocation:(CGPoint)arg1 timestamp:(double)arg2 ;
-(id)initWithDepth:(unsigned long long)arg1 ;
-(int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(BOOL)arg2 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)reset;
@end

