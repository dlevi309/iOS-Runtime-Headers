/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI99 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)addPoint:(CGPoint)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(void)clearHistory;
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGPoint)diffFromLastPoint;
-(CGSize)displacementInInterval:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(BOOL)isPlacedCarefully;
@end

