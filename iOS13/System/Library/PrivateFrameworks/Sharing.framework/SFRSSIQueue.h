/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSMutableArray;

@interface SFRSSIQueue : NSObject {

	NSMutableArray* _rssiValues;
	NSMutableArray* _tickValues;

}

@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
-(double)velocity;
-(double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2 ;
-(void)addSample:(double)arg1 atTicks:(unsigned long long)arg2 ;
-(double)velocitySmoothed;
@end

