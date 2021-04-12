/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)reset;
-(id)initWithDepth:(unsigned long long)arg1 ;
-(double)peakSpeed;
-(CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1 ;
-(double)averageTouchPathAngleOverTimeDuration:(double)arg1 ;
-(void)updateWithLocation:(CGPoint)arg1 timestamp:(double)arg2 ;
-(int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(BOOL)arg2 ;
@end

