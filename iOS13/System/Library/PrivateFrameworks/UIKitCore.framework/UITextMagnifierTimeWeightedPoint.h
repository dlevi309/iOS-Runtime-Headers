/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI89 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)addPoint:(CGPoint)arg1 ;
-(void)clearHistory;
-(BOOL)isPlacedCarefully;
-(CGPoint)diffFromLastPoint;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
@end

