/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {

	long long m_index;
	SCD_Struct_TS119 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)addPoint:(CGPoint)arg1 ;
-(void)clearHistory;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(double)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
-(double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
@end

