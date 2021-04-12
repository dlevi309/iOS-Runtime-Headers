/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKBarSeries.h>

@interface HKHistogramBarSeries : HKBarSeries {

	unsigned long long _numberOfColumns;

}

@property (assign,nonatomic) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
-(unsigned long long)numberOfColumns;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(CGRect)arg2 minimumSpacing:(double)arg3 ;
-(id)initWithFillStyle:(id)arg1 numberOfColumns:(unsigned long long)arg2 cornerRadii:(CGSize)arg3 ;
@end

